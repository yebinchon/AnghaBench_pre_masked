
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct dc_hash_maddr_admtek_le_ctx {int* hashes; int sc; } ;


 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_0, struct sockaddr_dl *VAR_1, u_int VAR_2)
{
 struct dc_hash_maddr_admtek_le_ctx *VAR_3 = VAR_0;
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_3->sc, FUNC_0(VAR_1));
 if (VAR_4 < 32)
  VAR_3->hashes[0] |= (1 << VAR_4);
 else
  VAR_3->hashes[1] |= (1 << (VAR_4 - 32));

 return (1);
}
