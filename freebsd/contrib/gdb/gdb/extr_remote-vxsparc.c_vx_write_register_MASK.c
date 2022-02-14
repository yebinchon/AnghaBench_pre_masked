
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
typedef int ULONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct regcache* VAR_10 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct regcache*,int,int *) ;
 int FUNC_2 (struct regcache*,int,char*) ;
 int FUNC_3 (int *,struct regcache*,int,char*) ;
 int FUNC_4 (struct regcache*,int ,int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

void
FUNC_5 (int VAR_13)
{
  struct regcache *VAR_14 = VAR_10;
  char VAR_15[VAR_6];
  char VAR_16[VAR_4];
  int VAR_17 = 1;
  int VAR_18 = 1;
  CORE_ADDR VAR_19;

  if (VAR_13 != -1)
    {
      if ((VAR_5 <= VAR_13 && VAR_13 <= VAR_7)
   || (VAR_3 <= VAR_13 && VAR_13 <= VAR_2))
 VAR_18 = 0;
      else
 VAR_17 = 0;
    }


  if (VAR_17)
    {
      FUNC_3 (&VAR_12, VAR_14, -1, VAR_15);
      FUNC_0 (VAR_15, VAR_6, VAR_1);


      if (VAR_13 == -1 || VAR_13 == VAR_9
   || (VAR_13 >= VAR_8 && VAR_13 <= VAR_7))
 {
   ULONGEST VAR_20;

   FUNC_1 (VAR_14, VAR_9, &VAR_20);
   FUNC_4 (VAR_14, VAR_20, VAR_13);
 }
    }


  if (VAR_18 && VAR_11)
    {
      FUNC_2 (VAR_14, -1, VAR_16);
      FUNC_0 (VAR_16, VAR_4, VAR_0);
    }
}
