
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct page {int dummy; } ;
struct lruvec {int dummy; } ;
typedef enum lru_list { ____Placeholder_lru_list } lru_list ;


 struct lruvec* FUNC_0 (struct zone*,struct page*,int) ;
 int FUNC_1 (struct page*,int) ;

struct lruvec *FUNC_2(struct zone *VAR_0,
      struct page *VAR_1,
      enum lru_list VAR_2,
      enum lru_list VAR_3)
{

 FUNC_1(VAR_1, VAR_2);
 return FUNC_0(VAR_0, VAR_1, VAR_3);
}
