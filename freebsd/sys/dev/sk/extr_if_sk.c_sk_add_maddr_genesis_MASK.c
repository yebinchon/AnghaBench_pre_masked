
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ u_int ;
struct sockaddr_dl {int dummy; } ;
struct sk_add_maddr_genesis_ctx {int* hashes; int mode; int sc_if; } ;


 scalar_t__ FUNC_0 (struct sockaddr_dl*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static u_int
FUNC_3(void *VAR_3, struct sockaddr_dl *VAR_4, u_int VAR_5)
{
 struct sk_add_maddr_genesis_ctx *VAR_6 = VAR_3;
 int VAR_7;





 if (VAR_5 + 1 < VAR_2) {
  FUNC_1(VAR_6->sc_if, (uint16_t *)FUNC_0(VAR_4), VAR_5 + 1);
  VAR_6->mode |= VAR_1;
  return (1);
 }
 VAR_7 = FUNC_2((const uint8_t *)FUNC_0(VAR_4));
 if (VAR_7 < 32)
  VAR_6->hashes[0] |= (1 << VAR_7);
 else
  VAR_6->hashes[1] |= (1 << (VAR_7 - 32));
 VAR_6->mode |= VAR_0;

 return (1);
}
