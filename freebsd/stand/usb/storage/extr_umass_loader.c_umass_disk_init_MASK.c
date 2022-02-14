
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * device; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(void)
{
 uint32_t VAR_2;

 FUNC_3();
 FUNC_4();


 for (VAR_2 = 0; VAR_2 < (8 * VAR_0); VAR_2++) {
  FUNC_2();
  FUNC_1(1000000 / VAR_0);
  VAR_2++;
  FUNC_0(1);
  if (VAR_1.device != ((void*)0))
   return (0);
 }
 return (0);
}
