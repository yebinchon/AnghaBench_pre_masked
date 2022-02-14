
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; int sin_family; TYPE_1__ sin_addr; } ;
struct hostent {scalar_t__ h_addr; } ;
typedef int destAddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (struct sockaddr_in*,int ,int ,int *,int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 unsigned long FUNC_4 (char*) ;
 int FUNC_5 (struct sockaddr_in*,char,int) ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_6 (char *VAR_6)
{
  struct sockaddr_in VAR_7;
  struct hostent *VAR_8;
  unsigned long VAR_9;




  VAR_9 = FUNC_4 (VAR_6);
  if (VAR_9 == -1)
    {
      VAR_8 = (struct hostent *) FUNC_3 (VAR_6);
      if (VAR_8 == ((void*)0))



 FUNC_2 ("Invalid hostname.  Couldn't find remote host address.");
      VAR_9 = *(unsigned long *) VAR_8->h_addr;
    }

  FUNC_5 (&VAR_7, '\0', sizeof (VAR_7));

  VAR_7.sin_addr.s_addr = VAR_9;
  VAR_7.sin_family = VAR_0;
  VAR_7.sin_port = 0;





  VAR_5 = VAR_3;
  VAR_4 = FUNC_1 (&VAR_7, VAR_1, VAR_2, &VAR_5, 0, 0);



  if (VAR_4 == ((void*)0))
    {
      FUNC_0 ("\tnet_connect");
      FUNC_2 ("Couldn't connect to remote target.");
    }
}
