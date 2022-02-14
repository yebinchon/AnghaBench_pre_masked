
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct client {int salen; int * sock; int servername; int sa; int moniker; } ;
typedef int hostname ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,int) ;
 int FUNC_1 (int) ;
 struct client* FUNC_2 (int,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct sockaddr*,int,int ,int,int *,int ,int ) ;
 int FUNC_7 (int,struct sockaddr*,int*) ;
 int * FUNC_8 (int) ;

__attribute__((used)) static struct client *
FUNC_9(int VAR_2, int VAR_3, const char *VAR_4)
{
    struct client *VAR_5;

    VAR_5 = FUNC_2(1, sizeof(*VAR_5));

    if (VAR_4) {
 VAR_5->moniker = FUNC_4(VAR_4);
    } else {
 char VAR_6[VAR_0];
 FUNC_5(VAR_6, sizeof(VAR_6));
 FUNC_0(&VAR_5->moniker, "gssmask: %s:%d", VAR_6, VAR_3);
    }

    {
 VAR_5->salen = sizeof(VAR_5->sa);
 FUNC_7(VAR_2, (struct sockaddr *)&VAR_5->sa, &VAR_5->salen);

 FUNC_6((struct sockaddr *)&VAR_5->sa, VAR_5->salen,
      VAR_5->servername, sizeof(VAR_5->servername),
      ((void*)0), 0, VAR_1);
    }

    VAR_5->sock = FUNC_8(VAR_2);
    if (VAR_5->sock == ((void*)0))
 FUNC_3(1, "krb5_storage_from_fd");

    FUNC_1(VAR_2);

    return VAR_5;
}
