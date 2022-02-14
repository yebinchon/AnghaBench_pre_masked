
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8 ;
typedef int uint32 ;
typedef int uint16 ;
struct rpcap_header {int plen; int value; void* type; void* ver; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rpcap_header*,int ,int) ;

void
FUNC_3(struct rpcap_header *VAR_0, uint8 VAR_1, uint8 VAR_2, uint16 VAR_3, uint32 VAR_4)
{
 FUNC_2(VAR_0, 0, sizeof(struct rpcap_header));

 VAR_0->ver = VAR_1;
 VAR_0->type = VAR_2;
 VAR_0->value = FUNC_1(VAR_3);
 VAR_0->plen = FUNC_0(VAR_4);
}
