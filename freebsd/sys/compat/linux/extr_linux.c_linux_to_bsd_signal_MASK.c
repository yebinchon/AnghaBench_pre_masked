
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int* VAR_2 ;

int
FUNC_3(int VAR_3)
{

 FUNC_0(VAR_3 > 0 && VAR_3 <= VAR_0, ("invalid Linux signal %d\n", VAR_3));

 if (VAR_3 < VAR_1)
  return (VAR_2[FUNC_1(VAR_3)]);

 return (FUNC_2(VAR_3));
}
