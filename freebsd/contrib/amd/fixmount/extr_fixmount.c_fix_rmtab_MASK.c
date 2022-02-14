
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
struct hostent {int h_addr; } ;
typedef TYPE_1__* mountlist ;
typedef int hostaddr ;
struct TYPE_4__ {int ml_directory; int ml_hostname; struct TYPE_4__* ml_next; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int FUNC_0 (char*,struct in_addr,int ) ;
 struct hostent* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct in_addr*,int ,int) ;
 int FUNC_4 (int *,char*,TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_5(CLIENT *VAR_3, char *VAR_4, mountlist VAR_5, int VAR_6, int VAR_7)
{
  mountlist VAR_8;
  struct hostent *VAR_9;
  struct in_addr VAR_10;




  if ((VAR_9 = FUNC_1(VAR_4))) {
    FUNC_3(&VAR_10, VAR_9->h_addr, sizeof(VAR_10));
  } else {
    VAR_10.s_addr = VAR_0;
  }

  for (VAR_8 = VAR_5; VAR_8; VAR_8 = VAR_8->ml_next) {
    if (FUNC_2(VAR_8->ml_hostname, VAR_2, VAR_1)) {
      if (VAR_7 || !FUNC_0(VAR_4, VAR_10, VAR_8->ml_directory))
 FUNC_4(VAR_3, VAR_4, VAR_8, VAR_6);
    }
  }
}
