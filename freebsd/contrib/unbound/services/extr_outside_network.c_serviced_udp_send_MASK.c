
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int time_t ;
struct serviced_query {int last_rtt; scalar_t__ status; int edns_lame_known; int pending; TYPE_1__* outnet; int last_sent_time; int zonelen; int zone; int addrlen; int addr; } ;
typedef int sldns_buffer ;
struct TYPE_2__ {int * now_tv; int infra; int * now_secs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int ,int*,scalar_t__*,int*) ;
 int FUNC_1 (struct serviced_query*,int *,int,int ,struct serviced_query*) ;
 int FUNC_2 (struct serviced_query*,int *,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int,...) ;

__attribute__((used)) static int
FUNC_4(struct serviced_query* VAR_6, sldns_buffer* VAR_7)
{
 int VAR_8, VAR_9;
 uint8_t VAR_10;
 time_t VAR_11 = *VAR_6->outnet->now_secs;

 if(!FUNC_0(VAR_6->outnet->infra, &VAR_6->addr, VAR_6->addrlen, VAR_6->zone,
  VAR_6->zonelen, VAR_11, &VAR_9, &VAR_10, &VAR_8))
  return 0;
 VAR_6->last_rtt = VAR_8;
 FUNC_3(VAR_0, "EDNS lookup known=%d vs=%d", VAR_10, VAR_9);
 if(VAR_6->status == VAR_1) {
  if(VAR_9 != -1) {
   VAR_6->status = VAR_3;
  } else {
   VAR_6->status = VAR_2;
  }
 }
 FUNC_2(VAR_6, VAR_7, (VAR_6->status == VAR_3) ||
  (VAR_6->status == VAR_4));
 VAR_6->last_sent_time = *VAR_6->outnet->now_tv;
 VAR_6->edns_lame_known = (int)VAR_10;
 FUNC_3(VAR_0, "serviced query UDP timeout=%d msec", VAR_8);
 VAR_6->pending = FUNC_1(VAR_6, VAR_7, VAR_8,
  VAR_5, VAR_6);
 if(!VAR_6->pending)
  return 0;
 return 1;
}
