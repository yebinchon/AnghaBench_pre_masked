
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
 int FUNC_0 (int ) ;
 char* FUNC_1 (struct value*) ;
 int FUNC_2 (struct value*) ;
 int FUNC_3 (struct regcache*,int ,char*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_6 (struct gdbarch *VAR_2, CORE_ADDR VAR_3,
        struct regcache *VAR_4, CORE_ADDR VAR_5, int VAR_6,
        struct value **VAR_7, CORE_ADDR VAR_8, int VAR_9,
        CORE_ADDR VAR_10)
{
  char VAR_11[4];
  int VAR_12;


  for (VAR_12 = VAR_6 - 1; VAR_12 >= 0; VAR_12--)
    {
      int VAR_13 = FUNC_0 (FUNC_2 (VAR_7[VAR_12]));
      VAR_8 -= (VAR_13 + 3) & ~3;
      FUNC_5 (VAR_8, FUNC_1 (VAR_7[VAR_12]), VAR_13);
    }


  if (VAR_9)
    {
      VAR_8 -= 4;
      FUNC_4 (VAR_11, 4, VAR_10);
      FUNC_5 (VAR_8, VAR_11, 4);
    }


  VAR_8 -= 4;
  FUNC_4 (VAR_11, 4, VAR_5);
  FUNC_5 (VAR_8, VAR_11, 4);


  FUNC_4 (VAR_11, 4, VAR_8);
  FUNC_3 (VAR_4, VAR_1, VAR_11);


  FUNC_3 (VAR_4, VAR_0, VAR_11);
  return VAR_8 + 8;
}
