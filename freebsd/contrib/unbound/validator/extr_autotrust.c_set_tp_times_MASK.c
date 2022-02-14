
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct trust_anchor {TYPE_1__* autr; } ;
struct TYPE_2__ {int query_interval; int retry_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;

__attribute__((used)) static void
FUNC_1(struct trust_anchor* VAR_2, time_t VAR_3,
 time_t VAR_4, int* VAR_5)
{
 time_t VAR_6, VAR_7 = VAR_2->autr->query_interval, VAR_8 = VAR_2->autr->retry_time;


 VAR_6 = 15 * 24 * 3600;
 if(VAR_4/2 < VAR_6)
  VAR_6 = VAR_4/2;
 if(VAR_3/2 < VAR_6)
  VAR_6 = VAR_3/2;

 if(!VAR_1) {
  if(VAR_6 < 3600)
   VAR_2->autr->query_interval = 3600;
  else VAR_2->autr->query_interval = VAR_6;
 } else VAR_2->autr->query_interval = VAR_6;


 VAR_6 = 24 * 3600;
 if(VAR_4/10 < VAR_6)
  VAR_6 = VAR_4/10;
 if(VAR_3/10 < VAR_6)
  VAR_6 = VAR_3/10;

 if(!VAR_1) {
  if(VAR_6 < 3600)
   VAR_2->autr->retry_time = 3600;
  else VAR_2->autr->retry_time = VAR_6;
 } else VAR_2->autr->retry_time = VAR_6;

 if(VAR_7 != VAR_2->autr->query_interval || VAR_8 != VAR_2->autr->retry_time) {
  *VAR_5 = 1;
  FUNC_0(VAR_0, "orig_ttl is %d", (int)VAR_4);
  FUNC_0(VAR_0, "rrsig_exp_interval is %d",
   (int)VAR_3);
  FUNC_0(VAR_0, "query_interval: %d, retry_time: %d",
   (int)VAR_2->autr->query_interval,
   (int)VAR_2->autr->retry_time);
 }
}
