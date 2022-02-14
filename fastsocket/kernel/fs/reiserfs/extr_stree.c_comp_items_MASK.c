
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int dummy; } ;
struct item_head {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct treepath const*) ;
 struct buffer_head* FUNC_3 (struct treepath const*) ;
 struct item_head* FUNC_4 (struct treepath const*) ;
 int FUNC_5 (struct item_head const*,struct item_head*,int ) ;

int FUNC_6(const struct item_head *VAR_1, const struct treepath *VAR_2)
{
 struct buffer_head *VAR_3 = FUNC_3(VAR_2);
 struct item_head *VAR_4;


 if (!FUNC_0(VAR_3))
  return 1;


 if (FUNC_2(VAR_2) >= FUNC_1(VAR_3))
  return 1;


 VAR_4 = FUNC_4(VAR_2);
 return FUNC_5(VAR_1, VAR_4, VAR_0);
}
