
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_7__ {scalar_t__ valid; scalar_t__ fire_time; scalar_t__ expire_time; TYPE_1__* ccache; struct TYPE_7__* next; } ;
typedef TYPE_2__ kcm_event ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,TYPE_2__**) ;
 int FUNC_3 (int,char*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__**) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;

krb5_error_code
FUNC_6(krb5_context VAR_4, time_t VAR_5)
{
    krb5_error_code VAR_6;
    kcm_event **VAR_7;

    FUNC_0(&VAR_2);


    if (VAR_5 < VAR_3 + VAR_0) {
 FUNC_1(&VAR_2);
 return 0;
    }


    for (VAR_7 = &VAR_1; *VAR_7 != ((void*)0); VAR_7 = &(*VAR_7)->next) {
 if ((*VAR_7)->valid == 0)
     continue;

 if (VAR_5 >= (*VAR_7)->fire_time) {
     VAR_6 = FUNC_2(VAR_4, VAR_7);
     if (VAR_6) {
  FUNC_3(1, "Could not fire event for cache %s: %s",
   (*VAR_7)->ccache->name, FUNC_5(VAR_4, VAR_6));
     }
 } else if ((*VAR_7)->expire_time && VAR_5 >= (*VAR_7)->expire_time) {
     VAR_6 = FUNC_4(VAR_4, VAR_7);
     if (VAR_6) {
  FUNC_3(1, "Could not expire event for cache %s: %s",
   (*VAR_7)->ccache->name, FUNC_5(VAR_4, VAR_6));
     }
 }

 if (*VAR_7 == ((void*)0))
     break;
    }

    VAR_3 = VAR_5;

    FUNC_1(&VAR_2);

    return 0;
}
