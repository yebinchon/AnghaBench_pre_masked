
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_node {scalar_t__ sec; scalar_t__ type; } ;
struct roff_meta {int dummy; } ;
struct mpage {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct mpage *VAR_2, const struct roff_meta *VAR_3,
 const struct roff_node *VAR_4)
{

 return VAR_4->sec == VAR_1 && VAR_4->type == VAR_0;
}
