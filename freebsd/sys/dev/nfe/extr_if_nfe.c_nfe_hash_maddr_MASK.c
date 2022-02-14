
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct nfe_hash_maddr_ctx {int * mask; int * addr; } ;


 int VAR_0 ;
 int * FUNC_0 (struct sockaddr_dl*) ;

__attribute__((used)) static u_int
FUNC_1(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 struct nfe_hash_maddr_ctx *VAR_4 = VAR_1;
 uint8_t *VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = VAR_5[VAR_7];
  VAR_4->addr[VAR_7] &= VAR_6;
  VAR_4->mask[VAR_7] &= ~VAR_6;
 }

 return (1);
}
