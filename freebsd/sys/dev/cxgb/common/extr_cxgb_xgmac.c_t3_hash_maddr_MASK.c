
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct t3_mcaddr_ctx {int hash_lo; int hash_hi; TYPE_1__* mac; } ;
struct sockaddr_dl {int dummy; } ;
struct TYPE_2__ {scalar_t__ nucast; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static u_int
FUNC_3(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 struct t3_mcaddr_ctx *VAR_4 = VAR_1;
 int VAR_5;

 if (VAR_4->mac->nucast + VAR_3 < VAR_0)
  FUNC_2(VAR_4->mac, VAR_4->mac->nucast + VAR_3, FUNC_0(VAR_2));
 else {
  VAR_5 = FUNC_1(FUNC_0(VAR_2));
  if (VAR_5 < 32)
   VAR_4->hash_lo |= (1 << VAR_5);
  else
   VAR_4->hash_hi |= (1 << (VAR_5 - 32));
 }
 return (1);
}
