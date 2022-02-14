
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct module_qstate {int region; TYPE_1__* env; } ;
struct TYPE_5__ {size_t qname_len; scalar_t__ qtype; int qclass; int * qname; } ;
struct iter_qstate {TYPE_3__* dp; int chase_flags; TYPE_2__ qchase; scalar_t__ refetch_glue; } ;
struct delegpt {int dummy; } ;
struct TYPE_6__ {size_t namelen; int * name; } ;
struct TYPE_4__ {int fwds; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct delegpt*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,size_t*) ;
 struct delegpt* FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct module_qstate* VAR_3, struct iter_qstate* VAR_4)
{
 struct delegpt* VAR_5;
 uint8_t* VAR_6 = VAR_4->qchase.qname;
 size_t VAR_7 = VAR_4->qchase.qname_len;
 if(VAR_4->refetch_glue && VAR_4->dp) {
  VAR_6 = VAR_4->dp->name;
  VAR_7 = VAR_4->dp->namelen;
 }

 if( (VAR_4->qchase.qtype == VAR_1 || VAR_4->refetch_glue)
  && !FUNC_1(VAR_4->qchase.qname))
  FUNC_2(&VAR_6, &VAR_7);
 VAR_5 = FUNC_3(VAR_3->env->fwds, VAR_6, VAR_4->qchase.qclass);
 if(!VAR_5)
  return 0;

 VAR_4->chase_flags |= VAR_0;
 VAR_4->dp = FUNC_0(VAR_5, VAR_3->region);

 FUNC_4(VAR_2, "forwarding request");
 return 1;
}
