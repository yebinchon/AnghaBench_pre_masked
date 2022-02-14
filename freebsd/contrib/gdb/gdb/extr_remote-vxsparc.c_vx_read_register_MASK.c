
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct regcache* VAR_4 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (struct regcache*,int,char*) ;
 int FUNC_3 (int *,struct regcache*,int,char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

void
FUNC_4 (int VAR_7)
{
  struct regcache *VAR_8 = VAR_4;
  char VAR_9[VAR_3];
  char VAR_10[VAR_2];
  CORE_ADDR VAR_11;


  FUNC_1 (VAR_9, VAR_3, VAR_1);
  FUNC_3 (&VAR_6, VAR_8, -1, VAR_9);





  if (VAR_5)
    FUNC_1 (VAR_10, VAR_2, VAR_0);
  else
    FUNC_0 (VAR_10, 0, VAR_2);
  FUNC_2 (VAR_8, -1, VAR_10);
}
