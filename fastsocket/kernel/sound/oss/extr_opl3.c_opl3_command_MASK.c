
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int model; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3 (int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
  int VAR_4;






 FUNC_1(((unsigned char) (VAR_2 & 0xff)), VAR_1);

 if (VAR_0->model != 2)
  FUNC_2(10);
 else
  for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
   FUNC_0(VAR_1);

 FUNC_1(((unsigned char) (VAR_3 & 0xff)), VAR_1 + 1);

 if (VAR_0->model != 2)
  FUNC_2(30);
 else
  for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
   FUNC_0(VAR_1);
}
