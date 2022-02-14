
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct serviced_query {int last_rtt; scalar_t__ status; int * pending; scalar_t__ ssl_upstream; scalar_t__ tcp_upstream; TYPE_1__* outnet; int last_sent_time; int zonelen; int zone; int addrlen; int addr; } ;
typedef int sldns_buffer ;
struct TYPE_2__ {int * now_tv; int * now_secs; int infra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int ,int*,int *,int*) ;
 int * FUNC_1 (struct serviced_query*,int *,int,int ,struct serviced_query*) ;
 int FUNC_2 (struct serviced_query*,int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct serviced_query* VAR_5, sldns_buffer* VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 uint8_t VAR_10;
 if(!FUNC_0(VAR_5->outnet->infra, &VAR_5->addr, VAR_5->addrlen, VAR_5->zone,
  VAR_5->zonelen, *VAR_5->outnet->now_secs, &VAR_7, &VAR_10,
  &VAR_8))
  return 0;
 VAR_5->last_rtt = VAR_8;
 if(VAR_7 != -1)
  VAR_5->status = VAR_3;
 else VAR_5->status = VAR_2;
 FUNC_2(VAR_5, VAR_6, VAR_5->status == VAR_3);
 VAR_5->last_sent_time = *VAR_5->outnet->now_tv;
 if(VAR_5->tcp_upstream || VAR_5->ssl_upstream) {
  VAR_9 = VAR_8;
  if(VAR_8 >= VAR_1 && VAR_8 < VAR_0)
   VAR_9 = VAR_0;
 } else {
  VAR_9 = VAR_0;
 }
 VAR_5->pending = FUNC_1(VAR_5, VAR_6, VAR_9,
  VAR_4, VAR_5);
 return VAR_5->pending != ((void*)0);
}
