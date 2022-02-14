
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {int h_length; int h_addr; int h_addrtype; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int) ;
 struct hostent* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_3, struct sockaddr_in *VAR_4)
{
  struct hostent *VAR_5;

  FUNC_1((char *)VAR_4, sizeof(struct sockaddr));
  VAR_4->sin_family = VAR_0;
  if((VAR_4->sin_addr.s_addr = FUNC_3(VAR_3)) == VAR_1) {
    VAR_5 = FUNC_2(VAR_3);
    if (!VAR_5) {
      FUNC_4(VAR_2,"unknown host %s", VAR_3);
      return 1;
    }
    VAR_4->sin_family = VAR_5->h_addrtype;
    FUNC_0(VAR_5->h_addr, (caddr_t)&VAR_4->sin_addr, VAR_5->h_length);
  }
  return 0;
}
