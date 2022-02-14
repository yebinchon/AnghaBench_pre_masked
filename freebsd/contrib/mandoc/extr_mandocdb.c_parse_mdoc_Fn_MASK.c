
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct roff_node {scalar_t__ type; scalar_t__ sec; TYPE_1__* child; } ;
struct roff_meta {int dummy; } ;
struct mpage {int dummy; } ;
struct TYPE_2__ {struct roff_node* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mpage*,TYPE_1__*) ;
 int FUNC_1 (struct mpage*,struct roff_node const*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct mpage *VAR_4, const struct roff_meta *VAR_5,
 const struct roff_node *VAR_6)
{
 uint64_t VAR_7;

 if (VAR_6->child == ((void*)0))
  return 0;

 FUNC_0(VAR_4, VAR_6->child);

 VAR_6 = VAR_6->child->next;
 if (VAR_6 != ((void*)0) && VAR_6->type == VAR_0) {
  VAR_7 = VAR_2;
  if (VAR_6->sec == VAR_1)
   VAR_7 |= VAR_3;
  FUNC_1(VAR_4, VAR_6, VAR_7, 0);
 }

 return 0;
}
