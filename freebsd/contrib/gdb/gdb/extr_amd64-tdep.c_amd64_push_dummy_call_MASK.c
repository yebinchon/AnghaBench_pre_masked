
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regcache*,int,struct value**,int,int) ;
 int FUNC_1 (struct regcache*,int ,char*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_4 (struct gdbarch *VAR_3, CORE_ADDR VAR_4,
         struct regcache *VAR_5, CORE_ADDR VAR_6,
         int VAR_7, struct value **VAR_8, CORE_ADDR VAR_9,
         int VAR_10, CORE_ADDR VAR_11)
{
  char VAR_12[8];


  VAR_9 = FUNC_0 (VAR_5, VAR_7, VAR_8, VAR_9, VAR_10);


  if (VAR_10)
    {
      FUNC_2 (VAR_12, 8, VAR_11);
      FUNC_1 (VAR_5, VAR_1, VAR_12);
    }


  VAR_9 -= 8;
  FUNC_2 (VAR_12, 8, VAR_6);
  FUNC_3 (VAR_9, VAR_12, 8);


  FUNC_2 (VAR_12, 8, VAR_9);
  FUNC_1 (VAR_5, VAR_2, VAR_12);


  FUNC_1 (VAR_5, VAR_0, VAR_12);

  return VAR_9 + 16;
}
