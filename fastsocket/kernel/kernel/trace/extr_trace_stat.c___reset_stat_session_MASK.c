
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct rb_node* rb_node; } ;
struct stat_session {TYPE_1__ stat_root; int ts; } ;
struct rb_node {int dummy; } ;


 TYPE_1__ VAR_0 ;
 struct rb_node* FUNC_0 (int ,struct rb_node*) ;

__attribute__((used)) static void FUNC_1(struct stat_session *VAR_1)
{
 struct rb_node *VAR_2 = VAR_1->stat_root.rb_node;

 while (VAR_2)
  VAR_2 = FUNC_0(VAR_1->ts, VAR_2);

 VAR_1->stat_root = VAR_0;
}
