
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
struct rpcap_header {int dummy; } ;
typedef int SOCKET ;


 int FUNC_0 (int ,int ,struct rpcap_header*,int *,char*) ;
 int FUNC_1 (int ,int ,struct rpcap_header*,char*) ;
 int FUNC_2 (int ,struct rpcap_header*,char*) ;

__attribute__((used)) static int FUNC_3(SOCKET VAR_0, uint8 VAR_1, uint8 VAR_2, struct rpcap_header *VAR_3, char *VAR_4)
{
 uint16 VAR_5;

 if (FUNC_2(VAR_0, VAR_3, VAR_4) == -1)
 {

  return -1;
 }




 if (FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4) == -1)
  return -1;




 return FUNC_0(VAR_0, VAR_2, VAR_3,
     &VAR_5, VAR_4);
}
