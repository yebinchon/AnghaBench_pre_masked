
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct regcache*,int ,int) ;
 int FUNC_2 (struct regcache*,int,struct value**,int,int,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_3 (struct gdbarch *VAR_2, CORE_ADDR VAR_3,
    struct regcache *VAR_4, CORE_ADDR VAR_5,
    int VAR_6, struct value **VAR_7, CORE_ADDR VAR_8,
    int VAR_9, CORE_ADDR VAR_10)
{
  CORE_ADDR VAR_11 = (VAR_9 ? (VAR_5 - 12) : (VAR_5 - 8));


  FUNC_1 (VAR_4, VAR_0, VAR_11);


  VAR_8 = FUNC_2 (VAR_4, VAR_6, VAR_7, VAR_8,
    VAR_9, VAR_10);


  VAR_8 -= 16 * 4;


  FUNC_0 (VAR_8 % 8 == 0);


  FUNC_1 (VAR_4, VAR_1, VAR_8);

  return VAR_8;
}
