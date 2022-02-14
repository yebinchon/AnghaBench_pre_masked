
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef int ULONGEST ;





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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regcache*,int,char*) ;
 int FUNC_2 (struct regcache*,int ,int*) ;
 int FUNC_3 (void*,int,int) ;

__attribute__((used)) static void
FUNC_4 (struct gdbarch *VAR_12,
         struct regcache *VAR_13,
         int VAR_14, void *VAR_15)
{
  FUNC_0 (VAR_14 >= VAR_5);

  if (VAR_14 >= VAR_0 && VAR_14 <= VAR_1)
    {
      VAR_14 = VAR_11 + 2 * (VAR_14 - VAR_0);
      FUNC_1 (VAR_13, VAR_14, VAR_15);
      FUNC_1 (VAR_13, VAR_14 + 1, ((char *)VAR_15) + 4);
    }
  else if (VAR_14 >= VAR_2 && VAR_14 <= VAR_3)
    {
      VAR_14 = VAR_4 + (VAR_14 - VAR_2);
      FUNC_1 (VAR_13, VAR_14, VAR_15);
    }
  else if (VAR_14 >= VAR_6 && VAR_14 <= VAR_7)
    {
      VAR_14 = VAR_11 + 4 * (VAR_14 - VAR_6);
      FUNC_1 (VAR_13, VAR_14, VAR_15);
      FUNC_1 (VAR_13, VAR_14 + 1, ((char *)VAR_15) + 4);
      FUNC_1 (VAR_13, VAR_14 + 2, ((char *)VAR_15) + 8);
      FUNC_1 (VAR_13, VAR_14 + 3, ((char *)VAR_15) + 12);
    }
  else if (VAR_14 >= VAR_8 && VAR_14 <= VAR_9)
    {
      VAR_14 = VAR_4 + 2 * (VAR_14 - VAR_8);
      FUNC_1 (VAR_13, VAR_14, VAR_15);
      FUNC_1 (VAR_13, VAR_14 + 1, ((char *)VAR_15) + 8);
    }
  else if (VAR_14 == 129
    || VAR_14 == 128
    || VAR_14 == 131
    || VAR_14 == 130)
    {
      ULONGEST VAR_16;

      FUNC_2 (VAR_13, VAR_10, &VAR_16);
      switch (VAR_14)
 {
 case 129:
   VAR_16 = (VAR_16 >> 0) & ((1 << 5) - 1);
   break;
 case 128:
   VAR_16 = (VAR_16 >> 8) & ((1 << 12) - 1);
   break;
 case 131:
   VAR_16 = (VAR_16 >> 24) & ((1 << 8) - 1);
   break;
 case 130:
   VAR_16 = (VAR_16 >> 32) & ((1 << 8) - 1);
   break;
 }
      FUNC_3 (VAR_15, 8, VAR_16);
    }
}
