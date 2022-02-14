
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct name_tree_node {int dummy; } ;
struct iter_priv {int n; int region; } ;
struct config_strlist {int str; struct config_strlist* next; } ;
struct config_file {struct config_strlist* private_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,struct name_tree_node*,int *,size_t,int,int ) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int *,size_t) ;
 int * FUNC_7 (int ,size_t*) ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_9(struct iter_priv* VAR_2, struct config_file* VAR_3)
{

 struct config_strlist* VAR_4;
 struct name_tree_node* VAR_5;
 uint8_t* VAR_6, *VAR_7;
 size_t VAR_8;
 int VAR_9;

 for(VAR_4 = VAR_3->private_domain; VAR_4; VAR_4 = VAR_4->next) {
  FUNC_2(VAR_4->str);
  VAR_6 = FUNC_7(VAR_4->str, &VAR_8);
  if(!VAR_6) {
   FUNC_3("cannot parse private-domain: %s", VAR_4->str);
   return 0;
  }
  VAR_9 = FUNC_0(VAR_6, &VAR_8);
  VAR_7 = (uint8_t*)FUNC_6(VAR_2->region, VAR_6, VAR_8);
  FUNC_1(VAR_6);
  if(!VAR_7) {
   FUNC_3("out of memory");
   return 0;
  }
  VAR_5 = (struct name_tree_node*)FUNC_5(VAR_2->region,
   sizeof(*VAR_5));
  if(!VAR_5) {
   FUNC_3("out of memory");
   return 0;
  }
  if(!FUNC_4(&VAR_2->n, VAR_5, VAR_7, VAR_8, VAR_9,
   VAR_0)) {
   FUNC_8(VAR_1, "ignoring duplicate "
    "private-domain: %s", VAR_4->str);
  }
 }
 return 1;
}
