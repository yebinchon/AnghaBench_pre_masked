
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct sis_hash_maddr_ctx {int* hashes; int sc; } ;


 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
 struct sis_hash_maddr_ctx *VAR_3 = VAR_0;
 uint32_t VAR_4;

 VAR_4 = FUNC_1(VAR_3->sc, FUNC_0(VAR_1));
 VAR_3->hashes[VAR_4 >> 4] |= 1 << (VAR_4 & 0xf);

 return (1);
}
