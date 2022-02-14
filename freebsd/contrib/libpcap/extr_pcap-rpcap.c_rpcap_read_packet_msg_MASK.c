
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int cc; int * bp; int errbuf; } ;
typedef TYPE_1__ pcap_t ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int *,size_t,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(SOCKET VAR_3, pcap_t *VAR_4, size_t VAR_5)
{
 u_char *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = VAR_4->bp;
 VAR_7 = VAR_4->cc;





 while ((size_t)VAR_7 < VAR_5)
 {




  VAR_8 = FUNC_1(VAR_3, VAR_6, VAR_5 - VAR_7,
      VAR_2|VAR_1, VAR_4->errbuf,
      VAR_0);
  if (VAR_8 == -1)
  {




   VAR_4->bp = VAR_6;
   VAR_4->cc = VAR_7;
   return -1;
  }
  if (VAR_8 == -3)
  {





   VAR_4->bp = VAR_6;
   VAR_4->cc = VAR_7;
   return -3;
  }
  if (VAR_8 == 0)
  {





   FUNC_0(VAR_4->errbuf, VAR_0,
       "The server terminated the connection.");
   return -1;
  }
  VAR_6 += VAR_8;
  VAR_7 += VAR_8;
 }
 VAR_4->bp = VAR_6;
 VAR_4->cc = VAR_7;
 return 0;
}
