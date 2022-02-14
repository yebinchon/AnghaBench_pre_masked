
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int time_t ;
struct TYPE_6__ {struct packed_rrset_data* data; int hash; struct ub_packed_rrset_key* key; } ;
struct TYPE_5__ {size_t dname_len; int dname; scalar_t__ flags; void* rrset_class; void* type; } ;
struct ub_packed_rrset_key {TYPE_3__ entry; TYPE_2__ rk; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {int count; size_t* rr_len; scalar_t__* rr_data; scalar_t__ ttl; scalar_t__* rr_ttl; int trust; scalar_t__ rrsig_count; } ;
struct auth_rrset {TYPE_1__* data; } ;
struct auth_data {int namelen; } ;
typedef int buf ;
struct TYPE_4__ {int count; int* rr_len; int ** rr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,size_t) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int *,size_t) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (struct packed_rrset_data*) ;
 scalar_t__ FUNC_5 (struct regional*,int) ;
 int FUNC_6 (struct regional*,int *,size_t) ;
 scalar_t__ FUNC_7 (struct regional*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_2 ;
 size_t FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__,size_t) ;
 size_t FUNC_11 (int *,size_t,int ,int *,size_t,int *,int) ;

__attribute__((used)) static int
FUNC_12(uint8_t* VAR_3, size_t VAR_4, struct regional* VAR_5,
 struct auth_data* VAR_6, struct auth_rrset* VAR_7, uint16_t VAR_8,
 struct ub_packed_rrset_key** VAR_9)
{
 uint8_t VAR_10[VAR_0];
 uint8_t* VAR_11;
 size_t VAR_12, VAR_13;
 struct packed_rrset_data* VAR_14;


 if(VAR_7->data->count < 1) return 0;
 if(VAR_7->data->rr_len[0] < 3) return 0;
 VAR_11 = VAR_7->data->rr_data[0]+2;
 VAR_12 = VAR_7->data->rr_len[0]-2;
 if(FUNC_9(VAR_7->data->rr_data[0]) != VAR_12)
  return 0;
 if(FUNC_0(VAR_11, VAR_12) != VAR_12)
  return 0;


 VAR_13 = FUNC_11(VAR_3, VAR_4, VAR_6->namelen,
  VAR_11, VAR_12, VAR_10, sizeof(VAR_10));
 if(VAR_13 == 0) {

  *VAR_9 = ((void*)0);
  return 1;
 }
 *VAR_9 = (struct ub_packed_rrset_key*)FUNC_5(VAR_5,
  sizeof(struct ub_packed_rrset_key));
 if(!*VAR_9)
  return 0;
 FUNC_3(&(*VAR_9)->entry, 0, sizeof((*VAR_9)->entry));
 (*VAR_9)->entry.key = (*VAR_9);
 (*VAR_9)->rk.type = FUNC_1(VAR_1);
 (*VAR_9)->rk.rrset_class = FUNC_1(VAR_8);
 (*VAR_9)->rk.flags = 0;
 (*VAR_9)->rk.dname = FUNC_6(VAR_5, VAR_3, VAR_4);
 if(!(*VAR_9)->rk.dname)
  return 0;
 (*VAR_9)->rk.dname_len = VAR_4;
 (*VAR_9)->entry.hash = FUNC_8(&(*VAR_9)->rk);
 VAR_14 = (struct packed_rrset_data*)FUNC_7(VAR_5,
  sizeof(struct packed_rrset_data) + sizeof(size_t) +
  sizeof(uint8_t*) + sizeof(time_t) + sizeof(uint16_t)
  + VAR_13);
 if(!VAR_14)
  return 0;
 (*VAR_9)->entry.data = VAR_14;
 VAR_14->ttl = 0;
 VAR_14->count = 1;
 VAR_14->rrsig_count = 0;
 VAR_14->trust = VAR_2;
 VAR_14->rr_len = (size_t*)((uint8_t*)VAR_14 +
  sizeof(struct packed_rrset_data));
 VAR_14->rr_len[0] = VAR_13 + sizeof(uint16_t);
 FUNC_4(VAR_14);
 VAR_14->rr_ttl[0] = VAR_14->ttl;
 FUNC_10(VAR_14->rr_data[0], VAR_13);
 FUNC_2(VAR_14->rr_data[0] + sizeof(uint16_t), VAR_10, VAR_13);
 return 1;
}
