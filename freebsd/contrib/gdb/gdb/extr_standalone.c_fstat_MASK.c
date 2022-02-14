
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

FUNC_0 (int VAR_4, struct stat *VAR_5)
{
  if (VAR_4 != VAR_2)
    {
      VAR_1 = VAR_0;
      return -1;
    }
  VAR_5->st_size = VAR_3;
}
