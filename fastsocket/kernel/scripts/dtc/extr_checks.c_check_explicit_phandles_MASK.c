
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct property {TYPE_1__ val; } ;
struct node {int phandle; int fullpath; } ;
struct check {int dummy; } ;
typedef int cell_t ;


 int FUNC_0 (struct check*,char*,int ,int,...) ;
 struct node* FUNC_1 (struct node*,int) ;
 struct property* FUNC_2 (struct node*,char*) ;
 int FUNC_3 (struct property*) ;

__attribute__((used)) static void FUNC_4(struct check *VAR_0, struct node *VAR_1,
       struct node *VAR_2)
{
 struct property *VAR_3;
 struct node *VAR_4;
 cell_t VAR_5;

 VAR_3 = FUNC_2(VAR_2, "linux,phandle");
 if (! VAR_3)
  return;

 if (VAR_3->val.len != sizeof(cell_t)) {
  FUNC_0(VAR_0, "%s has bad length (%d) linux,phandle property",
       VAR_2->fullpath, VAR_3->val.len);
  return;
 }

 VAR_5 = FUNC_3(VAR_3);
 if ((VAR_5 == 0) || (VAR_5 == -1)) {
  FUNC_0(VAR_0, "%s has invalid linux,phandle value 0x%x",
       VAR_2->fullpath, VAR_5);
  return;
 }

 VAR_4 = FUNC_1(VAR_1, VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_0, "%s has duplicated phandle 0x%x (seen before at %s)",
       VAR_2->fullpath, VAR_5, VAR_4->fullpath);
  return;
 }

 VAR_2->phandle = VAR_5;
}
