
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcap_header {int plen; } ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int,char*,int ) ;

__attribute__((used)) static int FUNC_2(SOCKET VAR_3, struct rpcap_header *VAR_4, char *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, (char *) VAR_4, sizeof(struct rpcap_header),
     VAR_2|VAR_1, VAR_5,
     VAR_0);
 if (VAR_6 == -1)
 {

  return -1;
 }
 VAR_4->plen = FUNC_0(VAR_4->plen);
 return 0;
}
