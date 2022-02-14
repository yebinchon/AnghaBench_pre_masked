
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct query_info {int qname_len; int qname; } ;
struct TYPE_2__ {struct auth_zone* key; } ;
struct auth_zone {int data; int name; int namelabs; int namelen; TYPE_1__ node; } ;
struct auth_data {int dummy; } ;
typedef int rbnode_type ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct auth_zone*,int **) ;

__attribute__((used)) static void
FUNC_2(struct auth_zone* VAR_0, struct query_info* VAR_1, int* VAR_2,
 struct auth_data** VAR_3)
{
 struct auth_zone VAR_4;
 VAR_4.node.key = &VAR_4;
 VAR_4.name = VAR_1->qname;
 VAR_4.namelen = VAR_1->qname_len;
 VAR_4.namelabs = FUNC_0(VAR_4.name);
 *VAR_2 = FUNC_1(&VAR_0->data, &VAR_4,
  (rbnode_type**)VAR_3);
}
