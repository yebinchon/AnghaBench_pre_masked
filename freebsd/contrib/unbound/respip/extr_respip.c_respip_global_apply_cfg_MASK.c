
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct respip_set {int dummy; } ;
struct config_file {int * respip_tags; int * respip_actions; int * respip_data; int num_tags; int tagname; } ;


 int FUNC_0 (struct respip_set*,int ,int ,int *,int *,int *) ;

int
FUNC_1(struct respip_set* VAR_0, struct config_file* VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1->tagname, VAR_1->num_tags,
  VAR_1->respip_tags, VAR_1->respip_actions, VAR_1->respip_data);
 VAR_1->respip_data = ((void*)0);
 VAR_1->respip_actions = ((void*)0);
 VAR_1->respip_tags = ((void*)0);
 return VAR_2;
}
