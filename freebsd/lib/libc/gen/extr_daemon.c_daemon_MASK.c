
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int,int) ;

int
FUNC_3(int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 if (!VAR_4)
  VAR_6 = FUNC_1(VAR_2, VAR_1, 0);
 else
  VAR_6 = -1;

 if (!VAR_3)
  VAR_5 = FUNC_1("/", VAR_0);
 else
  VAR_5 = -1;

 VAR_7 = FUNC_2(VAR_5, VAR_6);

 if (VAR_5 != -1)
  FUNC_0(VAR_5);

 if (VAR_6 > 2)
  FUNC_0(VAR_6);

 return (VAR_7);
}
