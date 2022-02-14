
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;
typedef int ULONGEST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct type*) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,char*,struct type*) ;
 struct type* FUNC_2 (int *,int) ;
 struct type* FUNC_3 (struct type*) ;
 int FUNC_4 (char*,int *,int) ;
 int FUNC_5 (struct regcache*,int,char*) ;
 int FUNC_6 (struct regcache*,int,int *) ;

void
FUNC_7 (struct type *VAR_4, struct regcache *VAR_5, void *VAR_6)
{
  struct type *VAR_7;

  VAR_7 = FUNC_3 (VAR_4);
  if (VAR_7 != ((void*)0))
    {
      char VAR_8[VAR_2];
      int VAR_9 = 0;
      int VAR_10 = VAR_0;
      int VAR_11 = FUNC_0 (VAR_4) / FUNC_0 (VAR_7);

      while (VAR_11-- > 0)
 {
   FUNC_5 (VAR_5, VAR_10, VAR_8);
   FUNC_1 (VAR_8, VAR_3,
      (char *)VAR_6 + VAR_9, VAR_7);
   VAR_9 += FUNC_0 (VAR_7);
   VAR_10++;
 }
    }
  else
    {
      ULONGEST VAR_12;
      int VAR_13 = 0;
      int VAR_14 = VAR_1;
      int VAR_15 = FUNC_0 (FUNC_2 (((void*)0), VAR_1));
      int VAR_16 = FUNC_0 (VAR_4) / VAR_15;
      int VAR_17 = FUNC_0 (VAR_4) % VAR_15;

      while (VAR_16-- > 0)
 {
   ULONGEST VAR_18;
   FUNC_6 (VAR_5, VAR_14, &VAR_18);
   FUNC_4 ((char *)VAR_6 + VAR_13, &VAR_18, VAR_15);
   VAR_13 += VAR_15;
   VAR_14++;
 }

      if (VAR_17)
 {
          FUNC_6 (VAR_5, VAR_14, &VAR_12);
   FUNC_4 ((char *)VAR_6 + VAR_13, &VAR_12, VAR_17);
 }
    }
}
