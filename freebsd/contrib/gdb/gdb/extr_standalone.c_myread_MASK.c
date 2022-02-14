
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

FUNC_2 (int VAR_5, char *VAR_6, int VAR_7, char *VAR_8)
{
  int VAR_9 = FUNC_1 (VAR_3, VAR_7);

  if (VAR_5 != VAR_2)
    {
      VAR_1 = VAR_0;
      return -1;
    }

  FUNC_0 (VAR_6, VAR_4, VAR_9);
  VAR_3 -= VAR_9;
  return VAR_9;
}
