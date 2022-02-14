
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
struct TYPE_8__ {scalar_t__ uid; scalar_t__ gid; int pid; } ;
typedef TYPE_1__ kcm_client ;
typedef TYPE_2__* kcm_ccache ;
struct TYPE_9__ {int flags; scalar_t__ uid; scalar_t__ gid; int mode; int name; int session; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_3 (int,char*,int ,int ,int ) ;
 int FUNC_4 (int) ;

krb5_error_code
FUNC_5(krb5_context VAR_8,
    kcm_client *VAR_9,
    kcm_operation VAR_10,
    kcm_ccache VAR_11)
{
    int VAR_12 = 0;
    int VAR_13 = 0;
    uint16_t VAR_14;
    krb5_error_code VAR_15;

    FUNC_1(VAR_11);

    switch (VAR_10) {
    case 137:
    case 149:
    case 128:
    case 134:
    case 130:
    case 150:
    case 151:
    case 142:
    case 138:
    case 136:
    case 131:
    case 129:
 VAR_13 = 1;
 VAR_12 = 0;
 break;
    case 135:
    case 140:
    case 133:
    case 148:
    case 132:
    case 139:
    case 144:
    case 145:
    case 146:
    case 147:
    case 143:
    case 141:
 VAR_13 = 0;
 VAR_12 = 1;
 break;
    default:
 VAR_15 = VAR_1;
 goto out;
    }

    if (VAR_11->flags & VAR_0) {

 if (VAR_10 == 137 ||
     VAR_10 == 149 ||
     VAR_10 == 134 ||
     VAR_10 == 136) {
     VAR_15 = VAR_1;
     goto out;
 }


 if (FUNC_0(VAR_9)) {
     VAR_15 = 0;
     goto out;
 }
    }


    VAR_14 = VAR_3|VAR_6;


    if (FUNC_0(VAR_9)) {
 if (VAR_12)
     VAR_14 |= VAR_4|VAR_2|VAR_3;
 if (VAR_13)
     VAR_14 |= VAR_7|VAR_5|VAR_6;
    }

    if (FUNC_2(VAR_9, VAR_11->uid, VAR_11->session)) {
 if (VAR_12)
     VAR_14 |= VAR_3;
 if (VAR_13)
     VAR_14 |= VAR_6;
    }

    if (VAR_9->uid == VAR_11->uid) {
 if (VAR_12)
     VAR_14 |= VAR_4;
 if (VAR_13)
     VAR_14 |= VAR_7;
    }

    if (VAR_9->gid == VAR_11->gid) {
 if (VAR_12)
     VAR_14 |= VAR_2;
 if (VAR_13)
     VAR_14 |= VAR_5;
    }

    VAR_15 = (VAR_11->mode & VAR_14) ? 0 : VAR_1;

out:
    if (VAR_15) {
 FUNC_3(2, "Process %d is not permitted to call %s on cache %s",
  VAR_9->pid, FUNC_4(VAR_10), VAR_11->name);
    }

    return VAR_15;
}
