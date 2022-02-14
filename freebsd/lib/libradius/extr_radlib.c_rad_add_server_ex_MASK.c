
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct servent {void* s_port; } ;
struct TYPE_2__ {int sin_len; void* sin_port; int sin_addr; int sin_family; } ;
struct rad_server {int timeout; int max_tries; int dead_time; int bindto; scalar_t__ next_probe; scalar_t__ is_dead; scalar_t__ num_tries; int * secret; TYPE_1__ addr; } ;
struct rad_handle {size_t num_servers; scalar_t__ type; struct rad_server* servers; } ;
struct in_addr {int s_addr; } ;
struct hostent {int h_addr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rad_handle*,char*,...) ;
 struct hostent* FUNC_1 (char const*) ;
 struct servent* FUNC_2 (char*,char*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int * FUNC_7 (char const*) ;

int
FUNC_8(struct rad_handle *VAR_5, const char *VAR_6, int VAR_7,
    const char *VAR_8, int VAR_9, int VAR_10, int VAR_11,
    struct in_addr *VAR_12)
{
 struct rad_server *VAR_13;

 if (VAR_5->num_servers >= VAR_1) {
  FUNC_0(VAR_5, "Too many RADIUS servers specified");
  return -1;
 }
 VAR_13 = &VAR_5->servers[VAR_5->num_servers];

 FUNC_6(&VAR_13->addr, 0, sizeof VAR_13->addr);
 VAR_13->addr.sin_len = sizeof VAR_13->addr;
 VAR_13->addr.sin_family = VAR_0;
 if (!FUNC_4(VAR_6, &VAR_13->addr.sin_addr)) {
  struct hostent *VAR_14;

  if ((VAR_14 = FUNC_1(VAR_6)) == ((void*)0)) {
   FUNC_0(VAR_5, "%s: host not found", VAR_6);
   return -1;
  }
  FUNC_5(&VAR_13->addr.sin_addr, VAR_14->h_addr,
      sizeof VAR_13->addr.sin_addr);
 }
 if (VAR_7 != 0)
  VAR_13->addr.sin_port = FUNC_3((u_short)VAR_7);
 else {
  struct servent *VAR_15;

  if (VAR_5->type == VAR_3)
   VAR_13->addr.sin_port =
       (VAR_15 = FUNC_2("radius", "udp")) != ((void*)0) ?
    VAR_15->s_port : FUNC_3(VAR_4);
  else
   VAR_13->addr.sin_port =
       (VAR_15 = FUNC_2("radacct", "udp")) != ((void*)0) ?
    VAR_15->s_port : FUNC_3(VAR_2);
 }
 if ((VAR_13->secret = FUNC_7(VAR_8)) == ((void*)0)) {
  FUNC_0(VAR_5, "Out of memory");
  return -1;
 }
 VAR_13->timeout = VAR_9;
 VAR_13->max_tries = VAR_10;
 VAR_13->num_tries = 0;
 VAR_13->is_dead = 0;
 VAR_13->dead_time = VAR_11;
 VAR_13->next_probe = 0;
 VAR_13->bindto = VAR_12->s_addr;
 VAR_5->num_servers++;
 return 0;
}
