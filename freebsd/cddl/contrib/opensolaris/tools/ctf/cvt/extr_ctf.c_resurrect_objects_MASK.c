
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ushort_t ;
typedef int tdesc_t ;
struct TYPE_10__ {int td_iihash; } ;
typedef TYPE_1__ tdata_t ;
typedef int symit_data_t ;
struct TYPE_11__ {scalar_t__ ii_type; char* ii_owner; int ii_name; int * ii_dtype; } ;
typedef TYPE_2__ iidesc_t ;
struct TYPE_12__ {scalar_t__ cth_objtoff; size_t cth_funcoff; } ;
typedef TYPE_3__ ctf_header_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_13__ {int st_info; } ;
typedef TYPE_4__ GElf_Sym ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_4__* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(ctf_header_t *VAR_4, tdata_t *VAR_5, tdesc_t **VAR_6, int VAR_7,
    caddr_t VAR_8, symit_data_t *VAR_9)
{
 caddr_t VAR_10 = VAR_8 + VAR_4->cth_objtoff;
 size_t VAR_11 = VAR_4->cth_funcoff - VAR_4->cth_objtoff;
 caddr_t VAR_12;

 FUNC_8(VAR_9);
 for (VAR_12 = VAR_10; VAR_12 < VAR_10 + VAR_11; VAR_12 += 2) {
  void *VAR_13 = (void *) VAR_12;
  ushort_t VAR_14 = *((ushort_t *)VAR_13);
  iidesc_t *VAR_15;
  GElf_Sym *VAR_16;

  if (!(VAR_16 = FUNC_7(VAR_9, VAR_3)) && VAR_14 != 0) {
   FUNC_4(
       "Unexpected end of object symbols at %x of %x",
       VAR_12 - VAR_10, VAR_11);
  }

  if (VAR_14 == 0) {
   FUNC_1(3, "Skipping null object\n");
   continue;
  } else if (VAR_14 >= VAR_7) {
   FUNC_4("Reference to invalid type %d", VAR_14);
  }

  VAR_15 = FUNC_3(FUNC_6(VAR_9));
  VAR_15->ii_dtype = VAR_6[VAR_14];
  if (FUNC_0(VAR_16->st_info) == VAR_2) {
   VAR_15->ii_type = VAR_1;
   VAR_15->ii_owner = FUNC_9(FUNC_5(VAR_9));
  } else
   VAR_15->ii_type = VAR_0;
  FUNC_2(VAR_5->td_iihash, VAR_15);

  FUNC_1(3, "Resurrected %s object %s (%d) from %s\n",
      (VAR_15->ii_type == VAR_0 ? "global" : "static"),
      VAR_15->ii_name, VAR_14, (VAR_15->ii_owner ? VAR_15->ii_owner : "(none)"));
 }
}
