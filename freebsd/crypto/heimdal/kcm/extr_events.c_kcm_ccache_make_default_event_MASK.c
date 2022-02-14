
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int krb5_error_code ;
struct TYPE_13__ {scalar_t__ endtime; } ;
struct TYPE_11__ {scalar_t__ renewable; } ;
struct TYPE_12__ {TYPE_1__ b; } ;
struct TYPE_14__ {TYPE_3__ times; TYPE_2__ flags; } ;
typedef TYPE_4__ krb5_creds ;
typedef int krb5_context ;
struct TYPE_15__ {void* action; scalar_t__ fire_time; int backoff_time; scalar_t__ expire_time; TYPE_6__* ccache; } ;
typedef TYPE_5__ kcm_event ;
typedef TYPE_6__* kcm_ccache ;
struct TYPE_16__ {int flags; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,TYPE_6__*,TYPE_4__*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_8,
         kcm_event *VAR_9,
         krb5_creds *VAR_10)
{
    krb5_error_code VAR_11 = 0;
    kcm_ccache VAR_12 = VAR_9->ccache;

    VAR_9->fire_time = 0;
    VAR_9->expire_time = 0;
    VAR_9->backoff_time = VAR_1;

    if (VAR_10 == ((void*)0)) {

 if ((VAR_12->flags & VAR_6) == 0) {
     FUNC_1(0, "Cannot acquire credentials without a key");
     return VAR_7;
 }

 VAR_9->fire_time = FUNC_2(((void*)0));
 VAR_9->action = VAR_0;
    } else if (FUNC_0(VAR_8, VAR_12, VAR_10)) {
 if (VAR_10->flags.b.renewable) {
     VAR_9->action = VAR_4;
     VAR_12->flags |= VAR_5;
 } else {
     if (VAR_12->flags & VAR_6)
  VAR_9->action = VAR_0;
     else
  VAR_9->action = VAR_2;
     VAR_12->flags &= ~(VAR_5);
 }

 VAR_9->fire_time = VAR_10->times.endtime - VAR_3;
    } else {
 VAR_9->action = VAR_2;
    }

    return VAR_11;
}
