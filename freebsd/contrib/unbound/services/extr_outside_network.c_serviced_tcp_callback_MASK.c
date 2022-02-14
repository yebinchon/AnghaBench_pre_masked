
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_6__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct serviced_query {scalar_t__ status; int addrlen; int addr; int last_rtt; int qtype; int zonelen; int zone; TYPE_1__* outnet; TYPE_3__ last_sent_time; scalar_t__ ssl_upstream; scalar_t__ tcp_upstream; int want_dnssec; int qbuflen; int qbuf; int * pending; } ;
struct comm_reply {int addrlen; int addr; struct comm_point* c; } ;
struct comm_point {int buffer; int type; } ;
struct TYPE_5__ {scalar_t__ log_forwarder_response_messages; scalar_t__ log_resolver_response_messages; } ;
struct TYPE_4__ {int infra; struct timeval* now_tv; int * now_secs; TYPE_2__* dtenv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*,int *,int ,int ,int ,int ,int ,TYPE_3__*,struct timeval*,int ) ;
 int FUNC_2 (int ,int *,int ,int ,int ,int,int ) ;
 int FUNC_3 (int ,int *,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_4 (int ,int *,int ,int ,int ) ;
 int FUNC_5 (int ,char*,int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (struct serviced_query*,int,struct comm_point*,struct comm_reply*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (struct serviced_query*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int) ;

int
FUNC_13(struct comm_point* VAR_11, void* VAR_12, int VAR_13,
        struct comm_reply* VAR_14)
{
 struct serviced_query* VAR_15 = (struct serviced_query*)VAR_12;
 struct comm_reply VAR_16;
 VAR_15->pending = ((void*)0);
 if(VAR_13 != VAR_5)
  FUNC_5(VAR_7, "tcp error for address",
   &VAR_15->addr, VAR_15->addrlen);
 if(VAR_13==VAR_5)
  FUNC_4(VAR_15->outnet->infra, &VAR_15->addr,
   VAR_15->addrlen, VAR_15->zone, VAR_15->zonelen);
 if(VAR_13==VAR_5 && VAR_15->status == VAR_9 &&
  (FUNC_0(FUNC_11(VAR_11->buffer)) ==
  VAR_0 || FUNC_0(FUNC_11(
  VAR_11->buffer)) == VAR_2) ) {

  VAR_15->status = VAR_10;
  FUNC_10(VAR_15, VAR_11->buffer);
  return 0;
 } else if(VAR_13==VAR_5 &&
  VAR_15->status == VAR_10 &&
   (FUNC_0(FUNC_11(VAR_11->buffer)) ==
   VAR_1 || FUNC_0(
   FUNC_11(VAR_11->buffer)) == VAR_3
   || FUNC_0(FUNC_11(VAR_11->buffer))
   == VAR_4)) {



  if(!VAR_15->want_dnssec)
    if(!FUNC_2(VAR_15->outnet->infra, &VAR_15->addr,
   VAR_15->addrlen, VAR_15->zone, VAR_15->zonelen, -1,
   *VAR_15->outnet->now_secs))
   FUNC_7("Out of memory caching no edns for host");
  VAR_15->status = VAR_8;
 }
 if(VAR_15->tcp_upstream || VAR_15->ssl_upstream) {
     struct timeval VAR_17 = *VAR_15->outnet->now_tv;
     if(VAR_13!=VAR_5) {
         if(!FUNC_3(VAR_15->outnet->infra, &VAR_15->addr,
      VAR_15->addrlen, VAR_15->zone, VAR_15->zonelen, VAR_15->qtype,
      -1, VAR_15->last_rtt, (time_t)VAR_17.tv_sec))
      FUNC_7("out of memory in TCP exponential backoff.");
     } else if(VAR_17.tv_sec > VAR_15->last_sent_time.tv_sec ||
  (VAR_17.tv_sec == VAR_15->last_sent_time.tv_sec &&
  VAR_17.tv_usec > VAR_15->last_sent_time.tv_usec)) {

  int VAR_18 = ((int)(VAR_17.tv_sec - VAR_15->last_sent_time.tv_sec))*1000
    + ((int)VAR_17.tv_usec - (int)VAR_15->last_sent_time.tv_usec)/1000;
  FUNC_12(VAR_6, "measured TCP-time at %d msec", VAR_18);
  FUNC_6(VAR_18 >= 0);


  if(VAR_18 < 60000) {
      if(!FUNC_3(VAR_15->outnet->infra, &VAR_15->addr,
   VAR_15->addrlen, VAR_15->zone, VAR_15->zonelen, VAR_15->qtype,
   VAR_18, VAR_15->last_rtt, (time_t)VAR_17.tv_sec))
   FUNC_7("out of memory noting rtt.");
  }
     }
 }

 if(!VAR_14) {

  VAR_14 = &VAR_16;
  VAR_16 = VAR_11;
 }
 FUNC_8(&VAR_14->addr, &VAR_15->addr, VAR_15->addrlen);
 VAR_14->addrlen = VAR_15->addrlen;
 FUNC_9(VAR_15, VAR_13, VAR_11, VAR_14);
 return 0;
}
