
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;
struct rpcap_header {scalar_t__ ver; int plen; } ;
typedef int SOCKET ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_2(SOCKET VAR_1, uint8 VAR_2, struct rpcap_header *VAR_3, char *VAR_4)
{



 if (VAR_3->ver != VAR_2)
 {



  if (FUNC_1(VAR_1, VAR_3->plen, VAR_4) == -1)
   return -1;




  if (VAR_4 != ((void*)0))
  {
   FUNC_0(VAR_4, VAR_0,
       "Server sent us a message with version %u when we were expecting %u",
       VAR_3->ver, VAR_2);
  }
  return -1;
 }
 return 0;
}
