
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ e_kind; int e_class; } ;
typedef TYPE_1__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,void*,int,size_t) ;

int
FUNC_3(Elf *VAR_4, size_t VAR_5)
{
 void *VAR_6;
 int VAR_7;

 if (VAR_4 == ((void*)0) || VAR_4->e_kind != VAR_3 ||
     ((VAR_7 = VAR_4->e_class) != VAR_1 && VAR_7 != VAR_2) ||
     ((VAR_6 = FUNC_1(VAR_4, VAR_7, 0)) == ((void*)0))) {
  FUNC_0(VAR_0, 0);
  return (0);
 }

 return (FUNC_2(VAR_4, VAR_6, VAR_7, VAR_5));
}
