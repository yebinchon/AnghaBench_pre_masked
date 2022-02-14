
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ time_t ;
struct TYPE_6__ {struct packed_rrset_data* data; int hash; struct ub_packed_rrset_key* key; } ;
struct TYPE_5__ {int* dname; int type; int dname_len; } ;
struct ub_packed_rrset_key {TYPE_3__ entry; TYPE_2__ rk; } ;
struct TYPE_4__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_1__ sin6_addr; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {int count; size_t* rr_len; int** rr_data; scalar_t__* rr_ttl; int security; int trust; scalar_t__ rrsig_count; int ttl; } ;
struct dns64_env {int prefix_net; int prefix_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 struct packed_rrset_data* FUNC_3 (struct regional*,int) ;
 scalar_t__ FUNC_4 (struct regional*,int*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_7(const struct ub_packed_rrset_key* VAR_2,
        const struct packed_rrset_data* VAR_3,
        struct ub_packed_rrset_key *VAR_4,
        struct packed_rrset_data **VAR_5, struct regional *VAR_6,
        struct dns64_env* VAR_7 )
{
 struct packed_rrset_data *VAR_8;
 size_t VAR_9;





 if(VAR_3->count > VAR_1) {
  *VAR_5 = ((void*)0);
  return;
 }
 if (!(VAR_8 = *VAR_5 = FUNC_3(VAR_6,
    sizeof(struct packed_rrset_data)
    + VAR_3->count * (sizeof(size_t) + sizeof(time_t) +
        sizeof(uint8_t*) + 2 + 16)))) {
  FUNC_1("out of memory");
  return;
 }


 VAR_8->ttl = VAR_3->ttl;
 VAR_8->count = VAR_3->count;
 VAR_8->rrsig_count = 0;
 VAR_8->trust = VAR_3->trust;
 VAR_8->security = VAR_3->security;




 VAR_8->rr_len =
     (size_t*)((uint8_t*)VAR_8 + sizeof(struct packed_rrset_data));
 VAR_8->rr_data = (uint8_t**)&VAR_8->rr_len[VAR_8->count];
 VAR_8->rr_ttl = (time_t*)&VAR_8->rr_data[VAR_8->count];
 for(VAR_9 = 0; VAR_9 < VAR_3->count; ++VAR_9) {
  if (VAR_3->rr_len[VAR_9] != 6 || VAR_3->rr_data[VAR_9][0] != 0
      || VAR_3->rr_data[VAR_9][1] != 4) {
   *VAR_5 = ((void*)0);
   return;
  }
  VAR_8->rr_len[VAR_9] = 18;
  VAR_8->rr_data[VAR_9] =
      (uint8_t*)&VAR_8->rr_ttl[VAR_8->count] + 18*VAR_9;
  VAR_8->rr_data[VAR_9][0] = 0;
  VAR_8->rr_data[VAR_9][1] = 16;
  FUNC_6(
    ((struct sockaddr_in6*)&VAR_7->prefix_addr)->sin6_addr.s6_addr,
    VAR_7->prefix_net, &VAR_3->rr_data[VAR_9][2],
    &VAR_8->rr_data[VAR_9][2] );
  VAR_8->rr_ttl[VAR_9] = VAR_3->rr_ttl[VAR_9];
 }





 if(!VAR_4) {
  FUNC_1("no key");
  *VAR_5 = ((void*)0);
  return;
 }

 VAR_4->rk.dname = (uint8_t*)FUNC_4(VAR_6,
       VAR_2->rk.dname, VAR_2->rk.dname_len);

 if(!VAR_4->rk.dname) {
  FUNC_1("out of memory");
  *VAR_5 = ((void*)0);
  return;
 }

 VAR_4->rk.type = FUNC_0(VAR_0);
 FUNC_2(&VAR_4->entry, 0, sizeof(VAR_4->entry));
 VAR_4->entry.key = VAR_4;
 VAR_4->entry.hash = FUNC_5(&VAR_4->rk);
 VAR_4->entry.data = VAR_8;

}
