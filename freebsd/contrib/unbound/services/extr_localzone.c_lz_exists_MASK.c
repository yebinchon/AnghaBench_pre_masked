
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct local_zones {int lock; int ztree; } ;
struct TYPE_2__ {struct local_zone* key; } ;
struct local_zone {int name; TYPE_1__ node; int namelabs; int namelen; int dclass; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(struct local_zones* VAR_1, const char* VAR_2)
{
 struct local_zone VAR_3;
 VAR_3.node.key = &VAR_3;
 VAR_3.dclass = VAR_0;
 if(!FUNC_4(VAR_2, &VAR_3.name, &VAR_3.namelen, &VAR_3.namelabs)) {
  FUNC_3("bad name %s", VAR_2);
  return 0;
 }
 FUNC_1(&VAR_1->lock);
 if(FUNC_5(&VAR_1->ztree, &VAR_3.node)) {
  FUNC_2(&VAR_1->lock);
  FUNC_0(VAR_3.name);
  return 1;
 }
 FUNC_2(&VAR_1->lock);
 FUNC_0(VAR_3.name);
 return 0;
}
