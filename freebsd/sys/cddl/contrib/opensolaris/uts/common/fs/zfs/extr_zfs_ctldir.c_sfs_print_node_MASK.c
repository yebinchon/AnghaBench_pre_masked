
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char* uintmax_t ;
struct TYPE_3__ {char* sn_name; scalar_t__ sn_id; scalar_t__ sn_parent_id; } ;
typedef TYPE_1__ sfs_node_t ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static void
FUNC_1(sfs_node_t *VAR_0)
{
 FUNC_0("\tname = %s\n", VAR_0->sn_name);
 FUNC_0("\tparent_id = %ju\n", (uintmax_t)VAR_0->sn_parent_id);
 FUNC_0("\tid = %ju\n", (uintmax_t)VAR_0->sn_id);
}
