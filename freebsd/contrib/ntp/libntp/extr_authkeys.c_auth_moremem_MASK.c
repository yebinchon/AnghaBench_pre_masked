
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void symkey_alloc ;
typedef void symkey ;
struct TYPE_2__ {int f; } ;


 int FUNC_0 (int ,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int,int,int ) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;

void
FUNC_2(
 int VAR_7
 )
{
 symkey * VAR_8;
 int VAR_9;
 VAR_9 = (VAR_7 > 0)
  ? VAR_7
  : VAR_0;
 VAR_8 = FUNC_1(VAR_9, sizeof(*VAR_8), (0));



 VAR_4 += VAR_9;

 for (; VAR_9 > 0; VAR_9--, VAR_8++) {
  FUNC_0(VAR_3, VAR_8, VAR_6.f);
 }






}
