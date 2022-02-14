
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct regional {int dummy; } ;
struct query_info {int qname_len; int * qname; } ;
struct TYPE_4__ {int query_flags; int qinfo; TYPE_1__* env; } ;
struct mesh_state {TYPE_2__ s; } ;
struct TYPE_3__ {struct regional* scratch; } ;


 void* FUNC_0 (struct regional*,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct mesh_state* VAR_0, struct query_info** VAR_1,
 uint16_t* VAR_2)
{
 struct regional* VAR_3 = VAR_0->s.env->scratch;
 struct query_info* VAR_4;

 VAR_4 = FUNC_0(VAR_3, &VAR_0->s.qinfo, sizeof(*VAR_4));
 if(!VAR_4)
  return;
 VAR_4->qname = FUNC_0(VAR_3, VAR_4->qname,
  VAR_4->qname_len);
 if(!VAR_4->qname)
  return;
 *VAR_1 = VAR_4;
 *VAR_2 = VAR_0->s.query_flags;
}
