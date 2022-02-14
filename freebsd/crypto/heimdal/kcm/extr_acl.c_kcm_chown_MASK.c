
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_6__ {scalar_t__ uid; scalar_t__ gid; } ;
typedef TYPE_1__ kcm_client ;
typedef TYPE_2__* kcm_ccache ;
typedef scalar_t__ gid_t ;
struct TYPE_7__ {int flags; scalar_t__ uid; scalar_t__ gid; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

krb5_error_code
FUNC_3(krb5_context VAR_2,
   kcm_client *VAR_3,
   kcm_ccache VAR_4,
   uid_t VAR_5,
   gid_t VAR_6)
{
    FUNC_2(VAR_4);


    if (VAR_4->flags & VAR_0)
 return VAR_1;

    if (VAR_4->uid != VAR_3->uid)
 return VAR_1;

    if (VAR_4->gid != VAR_3->gid)
 return VAR_1;

    FUNC_0(&VAR_4->mutex);

    VAR_4->uid = VAR_5;
    VAR_4->gid = VAR_6;

    FUNC_1(&VAR_4->mutex);

    return 0;
}
