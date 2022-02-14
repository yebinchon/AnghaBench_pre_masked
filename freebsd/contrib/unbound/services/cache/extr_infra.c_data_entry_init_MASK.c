
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct lruhash_entry {scalar_t__ data; } ;
struct infra_data {scalar_t__ timeout_other; scalar_t__ timeout_AAAA; scalar_t__ timeout_A; scalar_t__ lame_other; scalar_t__ lame_type_A; scalar_t__ rec_lame; scalar_t__ isdnsseclame; scalar_t__ probedelay; scalar_t__ edns_lame_known; scalar_t__ edns_version; int rtt; scalar_t__ ttl; } ;
struct infra_cache {scalar_t__ host_ttl; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct infra_cache* VAR_0, struct lruhash_entry* VAR_1,
 time_t VAR_2)
{
 struct infra_data* VAR_3 = (struct infra_data*)VAR_1->data;
 VAR_3->ttl = VAR_2 + VAR_0->host_ttl;
 FUNC_0(&VAR_3->rtt);
 VAR_3->edns_version = 0;
 VAR_3->edns_lame_known = 0;
 VAR_3->probedelay = 0;
 VAR_3->isdnsseclame = 0;
 VAR_3->rec_lame = 0;
 VAR_3->lame_type_A = 0;
 VAR_3->lame_other = 0;
 VAR_3->timeout_A = 0;
 VAR_3->timeout_AAAA = 0;
 VAR_3->timeout_other = 0;
}
