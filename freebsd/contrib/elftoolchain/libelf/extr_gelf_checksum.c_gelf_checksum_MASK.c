
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int e_class; } ;
typedef TYPE_1__ Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 long FUNC_1 (TYPE_1__*,int) ;

long
FUNC_2(Elf *VAR_3)
{
 int VAR_4;
 if (VAR_3 == ((void*)0) ||
     ((VAR_4 = VAR_3->e_class) != VAR_1 && VAR_4 != VAR_2)) {
  FUNC_0(VAR_0, 0);
  return (0L);
 }
 return (FUNC_1(VAR_3, VAR_4));
}
