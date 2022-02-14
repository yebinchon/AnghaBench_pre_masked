
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_15__ {int allow_anonymous; } ;
typedef TYPE_2__ krb5_kdc_configuration ;
typedef int krb5_error_code ;
typedef TYPE_3__* krb5_context ;
struct TYPE_14__ {int invalid; int forwardable; int forwarded; int proxiable; int proxy; int may_postdate; int postdated; int renewable; } ;
struct TYPE_19__ {scalar_t__* starttime; scalar_t__ endtime; scalar_t__ authtime; int * renew_till; TYPE_1__ flags; int caddr; } ;
struct TYPE_18__ {scalar_t__ request_anonymous; scalar_t__ renew; scalar_t__ renewable; scalar_t__ postdated; scalar_t__ allow_postdate; scalar_t__ proxy; scalar_t__ proxiable; scalar_t__ forwarded; scalar_t__ forwardable; scalar_t__ validate; } ;
struct TYPE_17__ {scalar_t__* from; int * rtime; int addresses; TYPE_5__ kdc_options; } ;
struct TYPE_16__ {scalar_t__ max_skew; } ;
typedef TYPE_4__ KDC_REQ_BODY ;
typedef TYPE_5__ KDCOptions ;
typedef TYPE_6__ EncTicketPart ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_5,
  krb5_kdc_configuration *VAR_6,
  KDC_REQ_BODY *VAR_7, const EncTicketPart *VAR_8, EncTicketPart *VAR_9)
{
    KDCOptions VAR_10 = VAR_7->kdc_options;

    if(VAR_10.validate){
 if(!VAR_8->flags.invalid || VAR_8->starttime == ((void*)0)){
     FUNC_2(VAR_5, VAR_6, 0,
      "Bad request to validate ticket");
     return VAR_0;
 }
 if(*VAR_8->starttime > VAR_4){
     FUNC_2(VAR_5, VAR_6, 0,
      "Early request to validate ticket");
     return VAR_3;
 }

 VAR_9->flags.invalid = 0;
    }else if(VAR_8->flags.invalid){
 FUNC_2(VAR_5, VAR_6, 0,
  "Ticket-granting ticket has INVALID flag set");
 return VAR_2;
    }

    if(VAR_10.forwardable){
 if(!VAR_8->flags.forwardable){
     FUNC_2(VAR_5, VAR_6, 0,
      "Bad request for forwardable ticket");
     return VAR_0;
 }
 VAR_9->flags.forwardable = 1;
    }
    if(VAR_10.forwarded){
 if(!VAR_8->flags.forwardable){
     FUNC_2(VAR_5, VAR_6, 0,
      "Request to forward non-forwardable ticket");
     return VAR_0;
 }
 VAR_9->flags.forwarded = 1;
 VAR_9->caddr = VAR_7->addresses;
    }
    if(VAR_8->flags.forwarded)
 VAR_9->flags.forwarded = 1;

    if(VAR_10.proxiable){
 if(!VAR_8->flags.proxiable){
     FUNC_2(VAR_5, VAR_6, 0,
      "Bad request for proxiable ticket");
     return VAR_0;
 }
 VAR_9->flags.proxiable = 1;
    }
    if(VAR_10.proxy){
 if(!VAR_8->flags.proxiable){
     FUNC_2(VAR_5, VAR_6, 0,
      "Request to proxy non-proxiable ticket");
     return VAR_0;
 }
 VAR_9->flags.proxy = 1;
 VAR_9->caddr = VAR_7->addresses;
    }
    if(VAR_8->flags.proxy)
 VAR_9->flags.proxy = 1;

    if(VAR_10.allow_postdate){
 if(!VAR_8->flags.may_postdate){
     FUNC_2(VAR_5, VAR_6, 0,
      "Bad request for post-datable ticket");
     return VAR_0;
 }
 VAR_9->flags.may_postdate = 1;
    }
    if(VAR_10.postdated){
 if(!VAR_8->flags.may_postdate){
     FUNC_2(VAR_5, VAR_6, 0,
      "Bad request for postdated ticket");
     return VAR_0;
 }
 if(VAR_7->from)
     *VAR_9->starttime = *VAR_7->from;
 VAR_9->flags.postdated = 1;
 VAR_9->flags.invalid = 1;
    }else if(VAR_7->from && *VAR_7->from > VAR_4 + VAR_5->max_skew){
 FUNC_2(VAR_5, VAR_6, 0, "Ticket cannot be postdated");
 return VAR_1;
    }

    if(VAR_10.renewable){
 if(!VAR_8->flags.renewable || VAR_8->renew_till == ((void*)0)){
     FUNC_2(VAR_5, VAR_6, 0,
      "Bad request for renewable ticket");
     return VAR_0;
 }
 VAR_9->flags.renewable = 1;
 FUNC_0(VAR_9->renew_till);
 FUNC_1(&VAR_7->rtime);
 *VAR_9->renew_till = *VAR_7->rtime;
    }
    if(VAR_10.renew){
 time_t VAR_11;
 if(!VAR_8->flags.renewable || VAR_8->renew_till == ((void*)0)){
     FUNC_2(VAR_5, VAR_6, 0,
      "Request to renew non-renewable ticket");
     return VAR_0;
 }
 VAR_11 = VAR_8->endtime;
 if(VAR_8->starttime)
     VAR_11 -= *VAR_8->starttime;
 else
     VAR_11 -= VAR_8->authtime;
 VAR_9->endtime = *VAR_9->starttime + VAR_11;
 if (VAR_9->renew_till != ((void*)0))
     VAR_9->endtime = FUNC_3(*VAR_9->renew_till, VAR_9->endtime);
    }
    return 0;
}
