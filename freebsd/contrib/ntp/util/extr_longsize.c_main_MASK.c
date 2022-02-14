
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

FUNC_2()
{
 if (sizeof(long) == 8) {
  FUNC_1("-DLONG8\n");
 } else if (sizeof(long) == 4) {
  FUNC_1("-DLONG4\n");
 }
 FUNC_0(0);
}
