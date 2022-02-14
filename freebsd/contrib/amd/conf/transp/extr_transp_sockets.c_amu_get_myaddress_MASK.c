
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int voidp ;
typedef int u_long ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct hostent {int ** h_addr_list; } ;
typedef int sin ;
typedef int dq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (struct sockaddr_in*) ;
 struct hostent* FUNC_2 (char const*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int,scalar_t__) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int ,char*,char const*,...) ;

void
FUNC_9(struct in_addr *VAR_4, const char *VAR_5)
{
  struct hostent *VAR_6;
  char VAR_7[20];
  if (VAR_5 == ((void*)0))
    goto out;


  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6 == ((void*)0)) {

    FUNC_8(VAR_1, "Unable to resolve localhost_address \"%s\" (%s): using default",
  VAR_5, FUNC_3(VAR_3));
    goto out;
  }
  if (VAR_6->h_addr_list == ((void*)0)) {
    FUNC_8(VAR_1, "localhost_address \"%s\" has no IP addresses: using default",
  VAR_5);
    goto out;
  }
  if (VAR_6->h_addr_list[1] != ((void*)0)) {
    FUNC_8(VAR_1, "localhost_address \"%s\" has more than one IP addresses: using first",
  VAR_5);
    goto out;
  }
  FUNC_6((voidp) &VAR_4->s_addr, (voidp) VAR_6->h_addr_list[0], sizeof(VAR_4->s_addr));
  FUNC_8(VAR_2, "localhost_address \"%s\" requested, using %s",
       VAR_5, FUNC_5(VAR_7, sizeof(VAR_7), VAR_4->s_addr));
  return;

 out:
  VAR_4->s_addr = FUNC_4(VAR_0);
}
