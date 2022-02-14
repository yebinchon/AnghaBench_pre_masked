
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(int VAR_2)
{
 if (VAR_2 < 0)
  FUNC_0("cannot set NF to a negative value");
 if (VAR_2 > VAR_1)
  FUNC_2(VAR_2);

 if (VAR_0 < VAR_2)
     FUNC_1(VAR_0+1, VAR_2);
 else
     FUNC_1(VAR_2+1, VAR_0);

 VAR_0 = VAR_2;
}
