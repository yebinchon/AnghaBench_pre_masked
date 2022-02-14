
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct ctrl_iface_priv {int ctrl_dst; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sockaddr_storage*,int ,char*) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct ctrl_iface_priv *VAR_1,
        struct sockaddr_storage *VAR_2,
        socklen_t VAR_3,
        char *VAR_4)
{
 FUNC_1(VAR_0, "CTRL_IFACE LEVEL %s", VAR_4);

 return FUNC_0(&VAR_1->ctrl_dst, VAR_2, VAR_3, VAR_4);
}
