
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int e_scn; } ;
struct TYPE_15__ {TYPE_1__ e_elf; } ;
struct TYPE_17__ {scalar_t__ e_kind; int e_class; scalar_t__ e_cmd; int e_flags; TYPE_2__ e_u; } ;
struct TYPE_16__ {size_t s_ndx; } ;
typedef TYPE_3__ Elf_Scn ;
typedef TYPE_4__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_3 (int *) ;
 void* FUNC_4 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,void*) ;
 int VAR_6 ;

Elf_Scn *
FUNC_6(Elf *VAR_7, size_t VAR_8)
{
 int VAR_9;
 void *VAR_10;
 Elf_Scn *VAR_11;

 if (VAR_7 == ((void*)0) || VAR_7->e_kind != VAR_4 ||
     ((VAR_9 = VAR_7->e_class) != VAR_1 && VAR_9 != VAR_2)) {
  FUNC_0(VAR_0, 0);
  return (((void*)0));
 }

 if ((VAR_10 = FUNC_4(VAR_7, VAR_9, 0)) == ((void*)0))
  return (((void*)0));

 if (VAR_7->e_cmd != VAR_3 &&
     (VAR_7->e_flags & VAR_5) == 0 &&
     FUNC_5(VAR_7, VAR_10) == 0)
  return (((void*)0));

 for (VAR_11 = FUNC_3(&VAR_7->e_u.e_elf.e_scn); VAR_11 != ((void*)0);) {
  if (VAR_11->s_ndx == VAR_8)
   return (VAR_11);

  if (VAR_11->s_ndx < VAR_8)
   VAR_11 = FUNC_2(VAR_11, VAR_6);
  else
   VAR_11 = FUNC_1(VAR_11, VAR_6);
 }

 FUNC_0(VAR_0, 0);
 return (((void*)0));
}
