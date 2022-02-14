
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_1(int VAR_4)
{

 switch (VAR_4) {
 case 129:
  if (VAR_0)
   VAR_0 += VAR_1;
  if (VAR_2)
   VAR_2 += VAR_3;
  break;
 case 128:
  if (VAR_0 && VAR_0 > VAR_1)
   VAR_0 -= VAR_1;
  if (VAR_2 && VAR_2 > VAR_3)
   VAR_2 -= VAR_3;
  break;
 default:
  FUNC_0(1, "crankrate invoked with unknown signal: %d", VAR_4);
 }
}
