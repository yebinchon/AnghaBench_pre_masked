
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; scalar_t__ sin_family; int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; int h_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockaddr_in*,int) ;
 struct hostent* FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (long) ;
 struct sockaddr_in* FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (char*,char const*) ;

int
FUNC_7(const char *VAR_4, struct sockaddr **VAR_5, long VAR_6)
{
 struct hostent* VAR_7;
 struct sockaddr_in *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_4);
 if (!VAR_7) {
  FUNC_6("can't get server address `%s': ", VAR_4);
  FUNC_2(((void*)0));
  return VAR_2;
 }
 if (VAR_7->h_addrtype != VAR_0) {
  FUNC_6("address for `%s' is not in the AF_INET family", VAR_4);
  return VAR_1;
 }
 if (VAR_7->h_length != 4) {
  FUNC_6("address for `%s' has invalid length", VAR_4);
  return VAR_1;
 }
 VAR_9 = sizeof(struct sockaddr_in);
 VAR_8 = FUNC_4(VAR_9);
 if (VAR_8 == ((void*)0))
  return VAR_3;
 FUNC_0(VAR_8, VAR_9);
 VAR_8->sin_len = VAR_9;
 VAR_8->sin_family = VAR_7->h_addrtype;
 FUNC_5(&VAR_8->sin_addr.s_addr, VAR_7->h_addr, 4);
 VAR_8->sin_port = FUNC_3(VAR_6);
 *VAR_5 = (struct sockaddr*)VAR_8;
 return 0;
}
