
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct respip_client_info {int dummy; } ;
struct query_info {int dummy; } ;
struct TYPE_3__ {int is_priming; int is_valrec; struct respip_client_info* client_info; int query_flags; struct query_info qinfo; } ;
struct TYPE_4__ {struct mesh_state* key; } ;
struct mesh_state {TYPE_1__ s; int * unique; TYPE_2__ node; } ;
struct mesh_area {int all; } ;


 scalar_t__ FUNC_0 (int *,struct mesh_state*) ;

struct mesh_state* FUNC_1(struct mesh_area* VAR_0,
 struct respip_client_info* VAR_1, struct query_info* VAR_2,
 uint16_t VAR_3, int VAR_4, int VAR_5)
{
 struct mesh_state VAR_6;
 struct mesh_state* VAR_7;

 VAR_6.node.key = &VAR_6;
 VAR_6.s.is_priming = VAR_4;
 VAR_6.s.is_valrec = VAR_5;
 VAR_6.s.qinfo = *VAR_2;
 VAR_6.s.query_flags = VAR_3;



 VAR_6.unique = ((void*)0);
 VAR_6.s.client_info = VAR_1;

 VAR_7 = (struct mesh_state*)FUNC_0(&VAR_0->all, &VAR_6);
 return VAR_7;
}
