
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int va_flags; size_t va_index; int va_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * VAR_5 ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_6;


 if (VAR_4 == ((void*)0))
  return (0);


 if (FUNC_0(VAR_4->va_mode))
  return (VAR_0);





 if ((VAR_6 = FUNC_3()) == 0) {
  if (VAR_4 != ((void*)0)) {
   if ((VAR_4->va_flags & VAR_1) != 0) {
    FUNC_1(6);
    VAR_4->va_flags &= ~VAR_1;
   }
   VAR_4->va_flags &= ~VAR_2;
   VAR_5[VAR_4->va_index] = VAR_3;
  }
 }

 FUNC_2();

 return (VAR_6);
}
