
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {struct ub_packed_rrset_key* data; } ;
struct TYPE_3__ {scalar_t__ dname_len; scalar_t__ flags; scalar_t__ type; scalar_t__ rrset_class; int dname; } ;
struct ub_packed_rrset_key {scalar_t__ ttl; int count; scalar_t__ rrsig_count; scalar_t__ trust; scalar_t__ security; size_t* rr_len; int ** rr_data; TYPE_2__ entry; TYPE_1__ rk; } ;
struct regional {int dummy; } ;
struct rbtree_type {scalar_t__ count; } ;
struct packed_rrset_data {scalar_t__ ttl; int count; scalar_t__ rrsig_count; scalar_t__ trust; scalar_t__ security; size_t* rr_len; int ** rr_data; TYPE_2__ entry; TYPE_1__ rk; } ;
struct canon_rr {size_t rr_idx; int node; } ;
typedef int fk ;
typedef int fd ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ub_packed_rrset_key*,int ,int) ;
 int FUNC_1 (struct ub_packed_rrset_key*,struct ub_packed_rrset_key*,struct rbtree_type*,struct canon_rr*) ;
 int VAR_2 ;
 int FUNC_2 (struct ub_packed_rrset_key*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct rbtree_type*) ;
 int FUNC_5 (struct rbtree_type*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 struct canon_rr* FUNC_7 (struct regional*,int) ;

int FUNC_8(struct regional* VAR_3,
 struct ub_packed_rrset_key* VAR_4, struct ub_packed_rrset_key* VAR_5)
{
 struct rbtree_type VAR_6, VAR_7;
 struct canon_rr *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 struct packed_rrset_data* VAR_12=(struct packed_rrset_data*)VAR_4->entry.data;
 struct packed_rrset_data* VAR_13=(struct packed_rrset_data*)VAR_5->entry.data;
 struct ub_packed_rrset_key VAR_14;
 struct packed_rrset_data VAR_15;
 size_t VAR_16[2];
 uint8_t* VAR_17[2];


 if(VAR_4->rk.dname_len != VAR_5->rk.dname_len ||
  VAR_4->rk.flags != VAR_5->rk.flags ||
  VAR_4->rk.type != VAR_5->rk.type ||
  VAR_4->rk.rrset_class != VAR_5->rk.rrset_class ||
  FUNC_3(VAR_4->rk.dname, VAR_5->rk.dname) != 0)
  return 0;
 if(VAR_12->ttl != VAR_13->ttl ||
  VAR_12->count != VAR_13->count ||
  VAR_12->rrsig_count != VAR_13->rrsig_count ||
  VAR_12->trust != VAR_13->trust ||
  VAR_12->security != VAR_13->security)
  return 0;


 FUNC_2(&VAR_14, 0, sizeof(VAR_14));
 FUNC_2(&VAR_15, 0, sizeof(VAR_15));
 VAR_14.entry.data = &VAR_15;
 VAR_15.count = 2;
 VAR_15.rr_len = VAR_16;
 VAR_15.rr_data = VAR_17;
 FUNC_5(&VAR_6, &VAR_2);
 FUNC_5(&VAR_7, &VAR_2);
 if(VAR_12->count > VAR_1 || VAR_13->count > VAR_1)
  return 1;
 VAR_8 = FUNC_7(VAR_3, sizeof(struct canon_rr)*VAR_12->count);
 VAR_9 = FUNC_7(VAR_3, sizeof(struct canon_rr)*VAR_13->count);
 if(!VAR_8 || !VAR_9) return 1;


 FUNC_1(VAR_4, VAR_12, &VAR_6, VAR_8);
 FUNC_1(VAR_5, VAR_13, &VAR_7, VAR_9);


 if(VAR_6 != VAR_7)
  return 0;
 VAR_10 = (struct canon_rr*)FUNC_4(&VAR_6);
 VAR_11 = (struct canon_rr*)FUNC_4(&VAR_7);
 while(VAR_10 != (struct canon_rr*)VAR_0 &&
  VAR_11 != (struct canon_rr*)VAR_0) {
  VAR_16[0] = VAR_12->rr_len[VAR_10->rr_idx];
  VAR_16[1] = VAR_13->rr_len[VAR_11->rr_idx];
  VAR_17[0] = VAR_12->rr_data[VAR_10->rr_idx];
  VAR_17[1] = VAR_13->rr_data[VAR_11->rr_idx];

  if(FUNC_0(&VAR_14, 0, 1) != 0)
   return 0;
  VAR_10 = (struct canon_rr*)FUNC_6(&VAR_10->node);
  VAR_11 = (struct canon_rr*)FUNC_6(&VAR_11->node);
 }
 return 1;
}
