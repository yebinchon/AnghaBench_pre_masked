
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_dl {int dummy; } ;
struct dwc_hash_maddr_ctx {int* hash; TYPE_1__* sc; } ;
struct TYPE_2__ {scalar_t__ mactype; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static u_int
FUNC_3(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 struct dwc_hash_maddr_ctx *VAR_5 = VAR_2;
 uint32_t VAR_6, VAR_7, VAR_8;
 uint8_t VAR_9;

 VAR_6 = FUNC_2(FUNC_0(VAR_3), VAR_1);

 VAR_9 = FUNC_1(~VAR_6 & 0xff);
 if (VAR_5->sc->mactype == VAR_0)
  VAR_9 >>= 2;
 VAR_8 = (VAR_9 >> 5);
 VAR_7 = (VAR_9 & 31);
 VAR_5->hash[VAR_8] |= (1 << VAR_7);

 return (1);
}
