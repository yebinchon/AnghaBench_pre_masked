
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint64_t ;
typedef int dof_secidx_t ;
struct TYPE_6__ {uintptr_t dofs_offset; int dofs_size; int dofs_align; int dofs_entsize; } ;
typedef TYPE_1__ dof_sec_t ;
struct TYPE_7__ {int dofr_tgtsec; int dofr_relsec; int dofr_strtab; } ;
typedef TYPE_2__ dof_relohdr_t ;
struct TYPE_8__ {uintptr_t dofr_offset; int dofr_type; } ;
typedef TYPE_3__ dof_relodesc_t ;
typedef int dof_hdr_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (uintptr_t,int) ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__* FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_3(dof_hdr_t *VAR_3, dof_sec_t *VAR_4, uint64_t VAR_5,
    uint64_t VAR_6)
{
 uintptr_t VAR_7 = (uintptr_t)VAR_3;
 uintptr_t VAR_8;
 dof_relohdr_t *VAR_9 =
     (dof_relohdr_t *)(uintptr_t)(VAR_7 + VAR_4->dofs_offset);
 dof_sec_t *VAR_10, *VAR_11, *VAR_12;
 dof_relodesc_t *VAR_13;
 uint_t VAR_14, VAR_15;

 if (VAR_4->dofs_size < sizeof (dof_relohdr_t) ||
     VAR_4->dofs_align != sizeof (dof_secidx_t)) {
  FUNC_1(VAR_3, "invalid relocation header");
  return (-1);
 }

 VAR_10 = FUNC_2(VAR_3, VAR_2, VAR_9->dofr_strtab);
 VAR_11 = FUNC_2(VAR_3, VAR_1, VAR_9->dofr_relsec);
 VAR_12 = FUNC_2(VAR_3, VAR_0, VAR_9->dofr_tgtsec);
 VAR_8 = (uintptr_t)VAR_12 + sizeof (dof_sec_t);

 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0) || VAR_12 == ((void*)0))
  return (-1);

 if (VAR_11->dofs_entsize < sizeof (dof_relodesc_t) ||
     VAR_11->dofs_align != sizeof (uint64_t)) {
  FUNC_1(VAR_3, "invalid relocation section");
  return (-1);
 }

 VAR_13 = (dof_relodesc_t *)(uintptr_t)(VAR_7 + VAR_11->dofs_offset);
 VAR_15 = VAR_11->dofs_size / VAR_11->dofs_entsize;

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  uintptr_t VAR_16 = VAR_7 + VAR_12->dofs_offset + VAR_13->dofr_offset;

  switch (VAR_13->dofr_type) {
  case 129:
   break;
  case 128:
  case 130:
   if (VAR_13->dofr_offset >= VAR_12->dofs_size || VAR_13->dofr_offset +
       sizeof (uint64_t) > VAR_12->dofs_size) {
    FUNC_1(VAR_3, "bad relocation offset");
    return (-1);
   }

   if (VAR_16 >= (uintptr_t)VAR_12 && VAR_16 < VAR_8) {
    FUNC_1(VAR_3, "bad relocation offset");
    return (-1);
   }

   if (!FUNC_0(VAR_16, sizeof (uint64_t))) {
    FUNC_1(VAR_3, "misaligned setx relo");
    return (-1);
   }

   if (VAR_13->dofr_type == 128)
    *(uint64_t *)VAR_16 += VAR_5;
   else
    *(uint64_t *)VAR_16 +=
        VAR_6 + VAR_12->dofs_offset + VAR_13->dofr_offset;
   break;
  default:
   FUNC_1(VAR_3, "invalid relocation type");
   return (-1);
  }

  VAR_13 = (dof_relodesc_t *)((uintptr_t)VAR_13 + VAR_11->dofs_entsize);
 }

 return (0);
}
