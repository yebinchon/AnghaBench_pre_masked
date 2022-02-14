
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int port_t ;
struct TYPE_13__ {scalar_t__ ixon; } ;
struct TYPE_14__ {TYPE_1__ cor2; } ;
struct TYPE_15__ {scalar_t__ mode; unsigned long brphys; unsigned char* brbuf; unsigned long arphys; unsigned char* arbuf; int ibytes; unsigned char* received_data; int received_len; int overflow; TYPE_2__ aopt; int port; int ipkts; int ierrs; int (* call_on_err ) (TYPE_3__*,int ) ;int rintr; } ;
typedef TYPE_3__ cx_chan_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 unsigned short VAR_16 ;
 unsigned short VAR_17 ;
 int FUNC_6 (int ) ;
 unsigned short VAR_18 ;
 unsigned short VAR_19 ;
 unsigned short VAR_20 ;
 unsigned short VAR_21 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (TYPE_3__*,int ) ;
 int FUNC_17 (TYPE_3__*,int ) ;
 int FUNC_18 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_19 (cx_chan_t *VAR_22)
{
 unsigned short VAR_23;
 int VAR_24 = 0, VAR_25;

 ++VAR_22->rintr;
 VAR_23 = FUNC_9 (FUNC_6(VAR_22->port));


 VAR_25 = FUNC_7(VAR_22);
 if (VAR_22->mode == VAR_7 && (VAR_23 & VAR_14)) {
  unsigned long VAR_26 = (unsigned short) FUNC_9 (FUNC_4(VAR_22->port)) |
   (long) FUNC_9 (FUNC_5(VAR_22->port)) << 16;
  unsigned char *VAR_27 = ((void*)0);
  port_t VAR_28 = 0, VAR_29 = 0;

  if (VAR_26 >= VAR_22->brphys && VAR_26 < VAR_22->brphys+VAR_6) {
   VAR_27 = VAR_22->brbuf;
   VAR_24 = VAR_26 - VAR_22->brphys;
   VAR_28 = FUNC_2(VAR_22->port);
   VAR_29 = FUNC_3(VAR_22->port);
  } else if (VAR_26 >= VAR_22->arphys && VAR_26 < VAR_22->arphys+VAR_6) {
   VAR_27 = VAR_22->arbuf;
   VAR_24 = VAR_26 - VAR_22->arphys;
   VAR_28 = FUNC_0(VAR_22->port);
   VAR_29 = FUNC_1(VAR_22->port);
  }

  if (VAR_24) {
   VAR_22->ibytes += VAR_24;
   VAR_22->received_data = VAR_27;
   VAR_22->received_len = VAR_24;


   FUNC_11 (VAR_28, VAR_25);
   FUNC_10 (VAR_29, VAR_0);
  }
  return (VAR_9);
 }


 if (VAR_23 & VAR_21) {
  ++VAR_22->ierrs;
  if (VAR_22->call_on_err)
   VAR_22->call_on_err (VAR_22, VAR_5);
 } else if (VAR_22->mode != VAR_7 && (VAR_23 & VAR_15)) {
  ++VAR_22->ierrs;
  if (VAR_22->call_on_err)
   VAR_22->call_on_err (VAR_22, VAR_2);
 } else if (VAR_22->mode != VAR_7 && (VAR_23 & (VAR_17 | VAR_16))) {
  ++VAR_22->ierrs;
  if (VAR_22->call_on_err)
   VAR_22->call_on_err (VAR_22, VAR_3);
 } else if (VAR_22->mode == VAR_7 && (VAR_23 & VAR_12)) {
  ++VAR_22->ierrs;
  if (VAR_22->call_on_err)
   VAR_22->call_on_err (VAR_22, VAR_2);
 } else if (VAR_22->mode == VAR_7 && (VAR_23 & VAR_11)) {
  ++VAR_22->ierrs;
  if (VAR_22->call_on_err)
   VAR_22->call_on_err (VAR_22, VAR_3);
 } else if (VAR_22->mode == VAR_7 && (VAR_23 & VAR_10)) {
  if (VAR_22->call_on_err)
   VAR_22->call_on_err (VAR_22, VAR_1);
 } else if (! (VAR_23 & VAR_19)) {
  ++VAR_22->ierrs;
 } else {

  VAR_24 = (VAR_23 & VAR_18) ? FUNC_9(FUNC_2(VAR_22->port)) : FUNC_9(FUNC_0(VAR_22->port));

  if (VAR_24 > VAR_6) {




   VAR_24 = VAR_6;
  } else if (VAR_22->mode != VAR_7 && ! (VAR_23 & VAR_20)) {



   if (! VAR_22->overflow) {
    if (VAR_22->call_on_err)
     VAR_22->call_on_err (VAR_22, VAR_4);
    VAR_22->overflow = 1;
    ++VAR_22->ierrs;
   }
  } else if (! VAR_22->overflow) {
   if (VAR_23 & VAR_18) {
    VAR_22->received_data = VAR_22->brbuf;
    VAR_22->received_len = VAR_24;
   } else {
    VAR_22->received_data = VAR_22->arbuf;
    VAR_22->received_len = VAR_24;
   }
   if (VAR_22->mode != VAR_7)
    ++VAR_22->ipkts;
   VAR_22->ibytes += VAR_24;
  } else
   VAR_22->overflow = 0;
 }


 if (! (FUNC_8 (FUNC_1(VAR_22->port)) & VAR_0)) {
  FUNC_11 (FUNC_0(VAR_22->port), VAR_25);
  FUNC_10 (FUNC_1(VAR_22->port), VAR_0);
 }
 if (! (FUNC_8 (FUNC_3(VAR_22->port)) & VAR_0)) {
  FUNC_11 (FUNC_2(VAR_22->port), VAR_25);
  FUNC_10 (FUNC_3(VAR_22->port), VAR_0);
 }


 if ((VAR_23 & VAR_13) && VAR_22->aopt.cor2.ixon)
  return (VAR_8);
 else
  return (0);
}
