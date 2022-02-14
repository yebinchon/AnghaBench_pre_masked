
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef void* time_t ;
struct regional {int dummy; } ;
struct packed_rrset_data {scalar_t__ count; int* rr_len; int* rr_data; void** rr_ttl; void* ttl; } ;
struct dns_msg {TYPE_2__* rep; } ;
struct auth_zone {int namelen; int name; } ;
struct auth_rrset {int dummy; } ;
struct auth_data {int dummy; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__ entry; } ;
struct TYPE_5__ {int rrset_count; scalar_t__ ttl; scalar_t__ serve_expired_ttl; int prefetch_ttl; TYPE_3__** rrsets; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 struct auth_rrset* FUNC_1 (struct auth_data*,int ) ;
 struct auth_data* FUNC_2 (struct auth_zone*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct auth_zone* VAR_2, struct regional* VAR_3,
 struct dns_msg* VAR_4)
{
 uint32_t VAR_5;
 struct packed_rrset_data* VAR_6;
 struct auth_rrset* VAR_7;
 struct auth_data* VAR_8 = FUNC_2(VAR_2, VAR_2->name, VAR_2->namelen);
 if(!VAR_8) return 0;
 VAR_7 = FUNC_1(VAR_8, VAR_0);
 if(!VAR_7) return 0;



 FUNC_4(VAR_4->rep->rrset_count == 0);
 if(!FUNC_5(VAR_2, VAR_3, VAR_4, VAR_8, VAR_7)) return 0;

 VAR_6 = (struct packed_rrset_data*)VAR_4->rep->rrsets[VAR_4->rep->rrset_count-1]->entry.data;

 if(VAR_6->count == 0) return 0;
 if(VAR_6->rr_len[0] < 2+4) return 0;
 VAR_5 = FUNC_6(VAR_6->rr_data[0]+(VAR_6->rr_len[0]-4));
 VAR_6->ttl = (time_t)VAR_5;
 VAR_6->rr_ttl[0] = (time_t)VAR_5;
 VAR_4->rep->ttl = FUNC_3(VAR_4->rep->rrsets[0]);
 VAR_4->rep->prefetch_ttl = FUNC_0(VAR_4->rep->ttl);
 VAR_4->rep->serve_expired_ttl = VAR_4->rep->ttl + VAR_1;
 return 1;
}
