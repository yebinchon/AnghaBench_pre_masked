
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int s ;
struct TYPE_3__ {int ip_net_num; int ip_net_name; struct TYPE_3__* ip_next; } ;
typedef TYPE_1__ addrlist ;


 char* FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,char*,int,int ,...) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;

char *
FUNC_6(void)
{
  addrlist *VAR_1;
  char VAR_2[256];
  int VAR_3;
  char *VAR_4;
  int VAR_5 = 0;
  int VAR_6 = 1024;

  VAR_4 = FUNC_0(VAR_6);
  if (!VAR_4)
    return ((void*)0);

  if (!VAR_0) {
    FUNC_5(VAR_4, "No networks\n", VAR_6);
    return VAR_4;
  }

  if (!VAR_0->ip_next) {

    FUNC_3(VAR_4, VAR_6,
       "Network: wire=\"%s\" (netnumber=%s).\n",
       VAR_0->ip_net_name, VAR_0->ip_net_num);
    return VAR_4;
  }
  VAR_4[0] = '\0';
  for (VAR_3 = 1, VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->ip_next, VAR_3++) {
    FUNC_3(VAR_2, sizeof(VAR_2), "Network %d: wire=\"%s\" (netnumber=%s).\n",
       VAR_3, VAR_1->ip_net_name, VAR_1->ip_net_num);
    VAR_5 += FUNC_1(VAR_2);
    if (VAR_5 > VAR_6) {
      VAR_6 *= 2;
      VAR_4 = FUNC_2(VAR_4, VAR_6);
    }
    FUNC_4(VAR_4, VAR_2, VAR_6);
  }
  return VAR_4;
}
