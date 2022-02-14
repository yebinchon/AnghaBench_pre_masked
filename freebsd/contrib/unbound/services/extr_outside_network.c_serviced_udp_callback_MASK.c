
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct serviced_query {scalar_t__ status; int last_rtt; scalar_t__ retry; int edns_lame_known; int qtype; int zonelen; int zone; int addrlen; int addr; TYPE_2__ last_sent_time; int want_dnssec; struct outside_network* outnet; int qbuflen; scalar_t__ qbuf; int * pending; } ;
struct outside_network {int infra; struct timeval* now_tv; TYPE_1__* dtenv; } ;
struct comm_reply {int dummy; } ;
struct comm_point {int buffer; int type; } ;
struct TYPE_3__ {scalar_t__ log_forwarder_response_messages; scalar_t__ log_resolver_response_messages; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,int *,int ,int ,int ,scalar_t__,int ,TYPE_2__*,struct timeval*,int ) ;
 int FUNC_3 (int ,int *,int ,int ,int ,int,int ) ;
 int FUNC_4 (int ,int *,int ,int ,int ,int ,int,int,int ) ;
 int FUNC_5 (int ,char*,int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,scalar_t__,int *,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (struct serviced_query*,int,struct comm_point*,struct comm_reply*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_11 (struct serviced_query*,int ) ;
 int FUNC_12 (struct serviced_query*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;

int
FUNC_15(struct comm_point* VAR_16, void* VAR_17, int VAR_18,
        struct comm_reply* VAR_19)
{
 struct serviced_query* VAR_20 = (struct serviced_query*)VAR_17;
 struct outside_network* VAR_21 = VAR_20->outnet;
 struct timeval VAR_22 = *VAR_20->outnet->now_tv;

 VAR_20->pending = ((void*)0);
 if(VAR_18 == VAR_7) {
  int VAR_23 = 0;
  if(VAR_20->status == VAR_13 && VAR_20->last_rtt < 5000) {

   VAR_20->status = VAR_14;
   FUNC_8(VAR_9, "try edns1xx0", VAR_20->qbuf+10,
    &VAR_20->addr, VAR_20->addrlen);
   if(!FUNC_12(VAR_20, VAR_16->buffer)) {
    FUNC_10(VAR_20, VAR_5, VAR_16, VAR_19);
   }
   return 0;
  }
  if(VAR_20->status == VAR_14) {

   VAR_20->status = VAR_13;
  }
  VAR_20->retry++;
  if(!(VAR_23=FUNC_4(VAR_21->infra, &VAR_20->addr, VAR_20->addrlen,
   VAR_20->zone, VAR_20->zonelen, VAR_20->qtype, -1, VAR_20->last_rtt,
   (time_t)VAR_22.tv_sec)))
   FUNC_7("out of memory in UDP exponential backoff");
  if(VAR_20->retry < VAR_8) {
   FUNC_8(VAR_9, "retry query", VAR_20->qbuf+10,
    &VAR_20->addr, VAR_20->addrlen);
   if(!FUNC_12(VAR_20, VAR_16->buffer)) {
    FUNC_10(VAR_20, VAR_5, VAR_16, VAR_19);
   }
   return 0;
  }
 }
 if(VAR_18 != VAR_6) {

  FUNC_10(VAR_20, VAR_18, VAR_16, VAR_19);
  return 0;
 }
 if( (VAR_20->status == VAR_13
  ||VAR_20->status == VAR_14)
  && (FUNC_0(FUNC_13(VAR_16->buffer))
   == VAR_0 || FUNC_0(
   FUNC_13(VAR_16->buffer)) == VAR_2
      || FUNC_9(VAR_16->buffer, VAR_20->qtype)
   )) {

  FUNC_14(VAR_9, "serviced query: attempt without EDNS");
  VAR_20->status = VAR_15;
  VAR_20->retry = 0;
  if(!FUNC_12(VAR_20, VAR_16->buffer)) {
   FUNC_10(VAR_20, VAR_5, VAR_16, VAR_19);
  }
  return 0;
 } else if(VAR_20->status == VAR_13 &&
  !VAR_20->edns_lame_known) {

  FUNC_5(VAR_9, "serviced query: EDNS works for",
   &VAR_20->addr, VAR_20->addrlen);
  if(!FUNC_3(VAR_21->infra, &VAR_20->addr, VAR_20->addrlen,
   VAR_20->zone, VAR_20->zonelen, 0, (time_t)VAR_22.tv_sec)) {
   FUNC_7("Out of memory caching edns works");
  }
  VAR_20->edns_lame_known = 1;
 } else if(VAR_20->status == VAR_15 &&
  !VAR_20->edns_lame_known && (FUNC_0(
  FUNC_13(VAR_16->buffer)) == VAR_1 ||
  FUNC_0(FUNC_13(VAR_16->buffer)) ==
  VAR_3 || FUNC_0(FUNC_13(
  VAR_16->buffer)) == VAR_4)) {



  if(!VAR_20->want_dnssec) {
    FUNC_5(VAR_9, "serviced query: EDNS fails for",
   &VAR_20->addr, VAR_20->addrlen);
    if(!FUNC_3(VAR_21->infra, &VAR_20->addr, VAR_20->addrlen,
   VAR_20->zone, VAR_20->zonelen, -1, (time_t)VAR_22.tv_sec)) {
   FUNC_7("Out of memory caching no edns for host");
    }
  } else {
    FUNC_5(VAR_9, "serviced query: EDNS fails, but "
   "not stored because need DNSSEC for", &VAR_20->addr,
   VAR_20->addrlen);
  }
  VAR_20->status = VAR_12;
 }
 if(VAR_22.tv_sec > VAR_20->last_sent_time.tv_sec ||
  (VAR_22.tv_sec == VAR_20->last_sent_time.tv_sec &&
  VAR_22.tv_usec > VAR_20->last_sent_time.tv_usec)) {

  int VAR_24 = ((int)(VAR_22.tv_sec - VAR_20->last_sent_time.tv_sec))*1000
    + ((int)VAR_22.tv_usec - (int)VAR_20->last_sent_time.tv_usec)/1000;
  FUNC_14(VAR_9, "measured roundtrip at %d msec", VAR_24);
  FUNC_6(VAR_24 >= 0);


  if(VAR_24 < 60000) {
      if(!FUNC_4(VAR_21->infra, &VAR_20->addr, VAR_20->addrlen,
   VAR_20->zone, VAR_20->zonelen, VAR_20->qtype, VAR_24,
   VAR_20->last_rtt, (time_t)VAR_22.tv_sec))
   FUNC_7("out of memory noting rtt.");
  }
 }


 if(FUNC_1(FUNC_13(VAR_16->buffer))) {


  if(VAR_20->status == VAR_13 ||
   VAR_20->status == VAR_14 ||
   VAR_20->status == VAR_15)

   VAR_20->status = VAR_11;
  else VAR_20->status = VAR_10;
  FUNC_11(VAR_20, VAR_16->buffer);
  return 0;
 }

 FUNC_10(VAR_20, VAR_18, VAR_16, VAR_19);
 return 0;
}
