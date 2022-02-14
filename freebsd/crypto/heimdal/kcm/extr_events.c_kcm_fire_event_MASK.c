
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
struct TYPE_9__ {int action; scalar_t__ fire_time; int backoff_time; scalar_t__ expire_time; TYPE_5__* ccache; int fire_count; } ;
typedef TYPE_1__ kcm_event ;
struct TYPE_10__ {int name; int client; } ;





 int VAR_0 ;
 int const VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_5__*,int **) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_5__*,int **) ;
 int FUNC_6 (int ,char*,char*,int ,char*) ;
 int FUNC_7 (int ,TYPE_1__**) ;
 scalar_t__ FUNC_8 (int ,int ,char**) ;
 int FUNC_9 (TYPE_1__*,char*) ;

__attribute__((used)) static krb5_error_code
FUNC_10(krb5_context VAR_4,
        kcm_event **VAR_5)
{
    kcm_event *VAR_6;
    krb5_error_code VAR_7;
    krb5_creds *VAR_8 = ((void*)0);
    int VAR_9 = 1;

    VAR_6 = *VAR_5;

    switch (VAR_6->action) {
    case 131:
 VAR_7 = FUNC_1(VAR_4, VAR_6->ccache, &VAR_8);
 VAR_9 = 0;
 break;
    case 128:
 VAR_7 = FUNC_5(VAR_4, VAR_6->ccache, &VAR_8);
 if (VAR_7 == VAR_2) {
     VAR_7 = FUNC_1(VAR_4, VAR_6->ccache, &VAR_8);
 }
 VAR_9 = 0;
 break;
    case 130:
 VAR_7 = FUNC_2(VAR_4, VAR_6->ccache->name);
 break;
    case 129:
 VAR_7 = FUNC_3(VAR_4, VAR_6->ccache);
 break;
    default:
 VAR_7 = VAR_3;
 break;
    }

    VAR_6->fire_count++;

    if (VAR_7) {

 VAR_6->fire_time += VAR_6->backoff_time;
 if (VAR_6->backoff_time < VAR_0)
     VAR_6->backoff_time *= 2;


 if (VAR_6->expire_time &&
     VAR_6->fire_time > VAR_6->expire_time)
     FUNC_7(VAR_4, VAR_5);
    } else {
 if (!VAR_9) {
     char *VAR_10;

     if (FUNC_8(VAR_4, VAR_6->ccache->client,
      &VAR_10))
  VAR_10 = ((void*)0);

     FUNC_6(0, "%s credentials in cache %s for principal %s",
      (VAR_6->action == 131) ?
   "Acquired" : "Renewed",
      VAR_6->ccache->name,
      (VAR_10 != ((void*)0)) ? VAR_10 : "<none>");

     if (VAR_10 != ((void*)0))
  FUNC_0(VAR_10);


     VAR_7 = FUNC_4(VAR_4, VAR_6, VAR_8);
     if (VAR_7 || VAR_6->action == VAR_1)
  VAR_9 = 1;
     else
  FUNC_9(VAR_6, "requeuing");
 }
 if (VAR_9)
     FUNC_7(VAR_4, VAR_5);
    }

    return VAR_7;
}
