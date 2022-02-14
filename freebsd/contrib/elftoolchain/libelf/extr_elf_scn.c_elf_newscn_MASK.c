
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t e_nscn; int e_scn; } ;
struct TYPE_9__ {TYPE_1__ e_elf; } ;
struct TYPE_10__ {scalar_t__ e_kind; int e_class; scalar_t__ e_cmd; int e_flags; TYPE_2__ e_u; } ;
typedef int Elf_Scn ;
typedef TYPE_3__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_9 ;
 int * FUNC_2 (TYPE_3__*,size_t) ;
 void* FUNC_3 (TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,void*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int ) ;

Elf_Scn *
FUNC_7(Elf *VAR_10)
{
 int VAR_11;
 void *VAR_12;
 Elf_Scn *VAR_13;

 if (VAR_10 == ((void*)0) || VAR_10->e_kind != VAR_7) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 if ((VAR_11 = VAR_10->e_class) != VAR_2 && VAR_11 != VAR_3) {
  FUNC_0(VAR_1, 0);
  return (((void*)0));
 }

 if ((VAR_12 = FUNC_3(VAR_10, VAR_11, 0)) == ((void*)0))
  return (((void*)0));
 if (VAR_10->e_cmd != VAR_5 &&
     (VAR_10->e_flags & VAR_8) == 0 &&
     FUNC_4(VAR_10, VAR_12) == 0)
  return (((void*)0));

 if (FUNC_1(&VAR_10->e_u.e_elf.e_scn)) {
  FUNC_5(VAR_10->e_u.e_elf.e_nscn == 0);
  if ((VAR_13 = FUNC_2(VAR_10, (size_t) VAR_9)) ==
      ((void*)0))
   return (((void*)0));
  VAR_10->e_u.e_elf.e_nscn++;
 }

 FUNC_5(VAR_10->e_u.e_elf.e_nscn > 0);

 if ((VAR_13 = FUNC_2(VAR_10, VAR_10->e_u.e_elf.e_nscn)) == ((void*)0))
  return (((void*)0));

 VAR_10->e_u.e_elf.e_nscn++;

 (void) FUNC_6(VAR_13, VAR_4, VAR_6);

 return (VAR_13);
}
