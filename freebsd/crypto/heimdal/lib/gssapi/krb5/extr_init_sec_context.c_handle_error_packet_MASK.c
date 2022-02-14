
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int p ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_11__ {unsigned char* data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int int32_t ;
typedef TYPE_2__* gsskrb5_ctx ;
struct TYPE_13__ {int stime; } ;
struct TYPE_12__ {int more_flags; int state; int target; int ccache; } ;
typedef TYPE_3__ KRB_ERROR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_3,
      gsskrb5_ctx VAR_4,
      krb5_data VAR_5)
{
    krb5_error_code VAR_6;
    KRB_ERROR VAR_7;

    VAR_6 = FUNC_3(VAR_3, &VAR_5, &VAR_7);
    if (VAR_6 == 0) {
 VAR_6 = FUNC_2(VAR_3, &VAR_7, ((void*)0));


 if (VAR_6 == VAR_1) {
     krb5_data VAR_8;
     unsigned char VAR_9[4];
     int32_t VAR_10 = VAR_7.stime - FUNC_4(((void*)0));

     VAR_9[0] = (VAR_10 >> 24) & 0xFF;
     VAR_9[1] = (VAR_10 >> 16) & 0xFF;
     VAR_9[2] = (VAR_10 >> 8) & 0xFF;
     VAR_9[3] = (VAR_10 >> 0) & 0xFF;

     VAR_8.data = VAR_9;
     VAR_8.length = sizeof(VAR_9);

     FUNC_1(VAR_3, VAR_4->ccache, VAR_4->target,
          "time-offset", &VAR_8);

     if ((VAR_4->more_flags & VAR_2) == 0)
   VAR_4->state = VAR_0;
     VAR_4->more_flags |= VAR_2;
 }
 FUNC_0 (&VAR_7);
    }
    return VAR_6;
}
