
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_parse {int idx; int type; scalar_t__ def; scalar_t__ defmgmt; int def_multi; scalar_t__ def_uni; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct key_parse*,int ,int) ;
 int FUNC_1 (scalar_t__,struct key_parse*) ;
 int FUNC_2 (struct genl_info*,struct key_parse*) ;

__attribute__((used)) static int FUNC_3(struct genl_info *VAR_2, struct key_parse *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->idx = -1;
 VAR_3->type = -1;

 if (VAR_2->attrs[VAR_1])
  VAR_4 = FUNC_1(VAR_2->attrs[VAR_1], VAR_3);
 else
  VAR_4 = FUNC_2(VAR_2, VAR_3);

 if (VAR_4)
  return VAR_4;

 if (VAR_3->def && VAR_3->defmgmt)
  return -VAR_0;

 if (VAR_3->defmgmt) {
  if (VAR_3->def_uni || !VAR_3->def_multi)
   return -VAR_0;
 }

 if (VAR_3->idx != -1) {
  if (VAR_3->defmgmt) {
   if (VAR_3->idx < 4 || VAR_3->idx > 5)
    return -VAR_0;
  } else if (VAR_3->def) {
   if (VAR_3->idx < 0 || VAR_3->idx > 3)
    return -VAR_0;
  } else {
   if (VAR_3->idx < 0 || VAR_3->idx > 5)
    return -VAR_0;
  }
 }

 return 0;
}
