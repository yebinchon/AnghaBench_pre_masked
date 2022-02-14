
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef enum return_value_convention { ____Placeholder_return_value_convention } return_value_convention ;
typedef enum amd64_reg_class { ____Placeholder_amd64_reg_class } amd64_reg_class ;



 int VAR_0 ;





 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct gdbarch*,struct regcache*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct regcache*,int,int,int ,char*) ;
 int FUNC_6 (struct regcache*,int,int,int ,char const*) ;

__attribute__((used)) static enum return_value_convention
FUNC_7 (struct gdbarch *VAR_4, struct type *VAR_5,
      struct regcache *VAR_6,
      void *VAR_7, const void *VAR_8)
{
  enum amd64_reg_class VAR_9[2];
  int VAR_10 = FUNC_0 (VAR_5);
  static int VAR_11[] = { 135, 134 };
  static int VAR_12[] = { 129, 128 };
  int VAR_13 = 0;
  int VAR_14 = 0;
  int VAR_15;

  FUNC_2 (!(VAR_7 && VAR_8));


  FUNC_1 (VAR_5, VAR_9);





  if (VAR_9[0] == VAR_0)
    return VAR_3;

  FUNC_2 (VAR_9[1] != VAR_0);
  FUNC_2 (VAR_10 <= 16);

  for (VAR_15 = 0; VAR_10 > 0; VAR_15++, VAR_10 -= 8)
    {
      int VAR_16 = -1;
      int VAR_17 = 0;

      switch (VAR_9[VAR_15])
 {
 case 137:


   VAR_16 = VAR_11[VAR_13++];
   break;

 case 133:


   VAR_16 = VAR_12[VAR_14++];
   break;

 case 132:


   FUNC_2 (VAR_14 > 0);
   VAR_16 = VAR_12[VAR_14 - 1];
   VAR_17 = 8;
   break;

 case 131:


   VAR_16 = VAR_1;
   if (VAR_8)
     FUNC_3 (VAR_4, VAR_6);
   break;

 case 130:


   FUNC_2 (VAR_15 > 0 && VAR_9[0] == 131);
   VAR_16 = VAR_1;
   VAR_17 = 8;
   VAR_10 = 2;
   break;

 case 136:
   continue;

 default:
   FUNC_2 (!"Unexpected register class.");
 }

      FUNC_2 (VAR_16 != -1);

      if (VAR_7)
 FUNC_5 (VAR_6, VAR_16, VAR_17, FUNC_4 (VAR_10, 8),
    (char *) VAR_7 + VAR_15 * 8);
      if (VAR_8)
 FUNC_6 (VAR_6, VAR_16, VAR_17, FUNC_4 (VAR_10, 8),
     (const char *) VAR_8 + VAR_15 * 8);
    }

  return VAR_2;
}
