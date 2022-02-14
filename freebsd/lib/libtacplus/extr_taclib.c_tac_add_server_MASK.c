
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin_len; int sin_port; int sin_addr; int sin_family; } ;
struct tac_server {int timeout; int flags; int * secret; TYPE_1__ addr; } ;
struct tac_handle {size_t num_servers; struct tac_server* servers; } ;
struct hostent {int h_addr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tac_handle*,char*,...) ;
 struct hostent* FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int * FUNC_6 (struct tac_handle*,char const*) ;

int
FUNC_7(struct tac_handle *VAR_3, const char *VAR_4, int VAR_5,
    const char *VAR_6, int VAR_7, int VAR_8)
{
 struct tac_server *VAR_9;

 if (VAR_3->num_servers >= VAR_1) {
  FUNC_0(VAR_3, "Too many TACACS+ servers specified");
  return -1;
 }
 VAR_9 = &VAR_3->servers[VAR_3->num_servers];

 FUNC_5(&VAR_9->addr, 0, sizeof VAR_9->addr);
 VAR_9->addr.sin_len = sizeof VAR_9->addr;
 VAR_9->addr.sin_family = VAR_0;
 if (!FUNC_3(VAR_4, &VAR_9->addr.sin_addr)) {
  struct hostent *VAR_10;

  if ((VAR_10 = FUNC_1(VAR_4)) == ((void*)0)) {
   FUNC_0(VAR_3, "%s: host not found", VAR_4);
   return -1;
  }
  FUNC_4(&VAR_9->addr.sin_addr, VAR_10->h_addr,
      sizeof VAR_9->addr.sin_addr);
 }
 VAR_9->addr.sin_port = FUNC_2(VAR_5 != 0 ? VAR_5 : VAR_2);
 if ((VAR_9->secret = FUNC_6(VAR_3, VAR_6)) == ((void*)0))
  return -1;
 VAR_9->timeout = VAR_7;
 VAR_9->flags = VAR_8;
 VAR_3->num_servers++;
 return 0;
}
