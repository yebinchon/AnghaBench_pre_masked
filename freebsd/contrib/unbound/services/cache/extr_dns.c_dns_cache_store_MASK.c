
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct rrset_ref {TYPE_3__* key; int id; } ;
struct reply_info {size_t rrset_count; int flags; TYPE_3__** rrsets; } ;
struct regional {int dummy; } ;
struct query_info {struct reply_info* qname; int qname_len; } ;
struct packed_rrset_data {int dummy; } ;
struct module_env {int alloc; scalar_t__* now; int rrset_cache; } ;
typedef int hashvalue_type ;
struct TYPE_5__ {int type; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_2__ rk; int id; TYPE_1__ entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct module_env*,struct query_info*,int ,struct reply_info*,scalar_t__,int,struct reply_info*,scalar_t__,struct regional*) ;
 int FUNC_1 (struct reply_info*) ;
 struct reply_info* FUNC_2 (struct reply_info*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct packed_rrset_data*,scalar_t__) ;
 int FUNC_5 (struct query_info*,int ) ;
 struct reply_info* FUNC_6 (struct reply_info*,int ,int *) ;
 int FUNC_7 (struct reply_info*,int ) ;
 int FUNC_8 (int ,struct rrset_ref*,int ,scalar_t__) ;

int
FUNC_9(struct module_env* VAR_5, struct query_info* VAR_6,
        struct reply_info* VAR_7, int VAR_8, time_t VAR_9, int VAR_10,
 struct regional* VAR_11, uint32_t VAR_12)
{
 struct reply_info* VAR_13 = ((void*)0);

 VAR_13 = FUNC_6(VAR_7, VAR_5->alloc, ((void*)0));
 if(!VAR_13)
  return 0;




 if(VAR_8) {

  struct rrset_ref VAR_14;
  size_t VAR_15;
  for(VAR_15=0; VAR_15<VAR_13->rrset_count; VAR_15++) {
   FUNC_4((struct packed_rrset_data*)
    VAR_13->rrsets[VAR_15]->entry.data, *VAR_5->now);
   VAR_14.key = VAR_13->rrsets[VAR_15];
   VAR_14.id = VAR_13->rrsets[VAR_15]->id;


   (void)FUNC_8(VAR_5->rrset_cache, &VAR_14,
    VAR_5->alloc, *VAR_5->now +
    ((FUNC_3(VAR_14.key->rk.type)==VAR_4
     && !VAR_10) ? 0:VAR_9));
  }
  FUNC_1(VAR_13);
  return 1;
 } else {

  struct query_info VAR_16;
  hashvalue_type VAR_17;

  VAR_16 = *VAR_6;
  VAR_16.qname = FUNC_2(VAR_6->qname, VAR_6->qname_len);
  if(!VAR_16.qname) {
   FUNC_7(VAR_13, VAR_5->alloc);
   return 0;
  }



  VAR_13->flags |= (VAR_3 | VAR_2);
  VAR_13->flags &= ~(VAR_0 | VAR_1);
  VAR_17 = FUNC_5(&VAR_16, (uint16_t)VAR_12);
  FUNC_0(VAR_5, &VAR_16, VAR_17, VAR_13, VAR_9, VAR_10, VAR_7,
   VAR_12, VAR_11);


  FUNC_1(VAR_16.qname);
 }
 return 1;
}
