
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int un ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct client {int flags; } ;
typedef int one ;
typedef TYPE_1__* heim_sipc ;
typedef int heim_ipc_callback ;
struct TYPE_4__ {struct client* mech; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int,int ,int ,void*,TYPE_1__**) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ,int ,void*,int) ;
 int FUNC_6 (int ,int,char*,char const*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ) ;

int
FUNC_10(const char *VAR_7,
         heim_ipc_callback VAR_8,
         void *VAR_9, heim_sipc *VAR_10)
{
    struct sockaddr_un VAR_11;
    int VAR_12, VAR_13;

    VAR_11.sun_family = VAR_0;

    FUNC_6(VAR_11.sun_path, sizeof(VAR_11.sun_path),
      "/var/run/.heim_%s-socket", VAR_7);
    VAR_12 = FUNC_7(VAR_0, VAR_3, 0);
    if (VAR_12 < 0)
 return VAR_6;

    FUNC_8(VAR_12, 1);







    FUNC_9(VAR_11.sun_path);

    if (FUNC_0(VAR_12, (struct sockaddr *)&VAR_11, sizeof(VAR_11)) < 0) {
 FUNC_2(VAR_12);
 return VAR_6;
    }

    if (FUNC_4(VAR_12, VAR_4) < 0) {
 FUNC_2(VAR_12);
 return VAR_6;
    }

    FUNC_1(VAR_11.sun_path, 0666);

    VAR_13 = FUNC_3(VAR_12, VAR_1,
        VAR_8, VAR_9, VAR_10);
    if (VAR_13 == 0) {
 struct client *VAR_14 = (*VAR_10)->mech;
 VAR_14->flags |= VAR_5;
    }

    return VAR_13;
}
