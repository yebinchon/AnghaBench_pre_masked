
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_proto_gre {int keymap_list; int keymap_lock; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct netns_proto_gre*) ;
 struct netns_proto_gre* FUNC_2 (int,int ) ;
 int FUNC_3 (struct net*,int ,struct netns_proto_gre*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_3)
{
 struct netns_proto_gre *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(struct netns_proto_gre), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_4(&VAR_4->keymap_lock);
 FUNC_0(&VAR_4->keymap_list);

 VAR_5 = FUNC_3(VAR_3, VAR_2, VAR_4);
 if (VAR_5 < 0)
  FUNC_1(VAR_4);
 return VAR_5;
}
