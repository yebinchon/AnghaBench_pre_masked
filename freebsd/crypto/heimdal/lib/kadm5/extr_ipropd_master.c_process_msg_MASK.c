
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int version; int name; int fd; int ac; } ;
typedef TYPE_1__ slave ;
typedef int krb5_storage ;
struct TYPE_9__ {int length; int data; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;
typedef int int32_t ;






 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,char*,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,TYPE_1__*,int,char const*,int) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9 (krb5_context VAR_0, slave *VAR_1, int VAR_2,
      const char *VAR_3, uint32_t VAR_4)
{
    int VAR_5 = 0;
    krb5_data VAR_6;
    krb5_storage *VAR_7;
    int32_t VAR_8;

    VAR_5 = FUNC_1(VAR_0, VAR_1->ac, &VAR_1->fd, &VAR_6);
    if(VAR_5) {
 FUNC_5 (VAR_0, VAR_5, "error reading message from %s", VAR_1->name);
 return 1;
    }

    VAR_7 = FUNC_4 (VAR_6.data, VAR_6.length);
    if (VAR_7 == ((void*)0)) {
 FUNC_6 (VAR_0, "process_msg: no memory");
 FUNC_0 (&VAR_6);
 return 1;
    }
    if (FUNC_2 (VAR_7, &VAR_8) != 0) {
 FUNC_6 (VAR_0, "process_msg: client send too short command");
 FUNC_0 (&VAR_6);
 return 1;
    }
    switch (VAR_8) {
    case 128 :
 VAR_5 = FUNC_2 (VAR_7, &VAR_8);
 if (VAR_5 != 0) {
     FUNC_6 (VAR_0, "process_msg: client send too I_HAVE data");
     break;
 }

 if (VAR_1->version == 0 && VAR_8 != 0) {
     if (VAR_4 < (uint32_t)VAR_8) {
  FUNC_6 (VAR_0, "Slave %s (version %lu) have later version "
       "the master (version %lu) OUT OF SYNC",
       VAR_1->name, (unsigned long)VAR_8,
       (unsigned long)VAR_4);
     }
     VAR_1->version = VAR_8;
 }
 if ((uint32_t)VAR_8 < VAR_1->version) {
     FUNC_6 (VAR_0, "Slave claims to not have "
   "version we already sent to it");
 } else {
     VAR_5 = FUNC_7 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 }
 break;
    case 129 :
 break;
    case 131:
    case 130 :
    default :
 FUNC_6 (VAR_0, "Ignoring command %d", VAR_8);
 break;
    }

    FUNC_0 (&VAR_6);
    FUNC_3 (VAR_7);

    FUNC_8(VAR_1);

    return VAR_5;
}
