
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {int bsBuff; int bsLive; } ;
typedef int Int32 ;
typedef TYPE_1__ EState ;


 int FUNC_0 (int) ;

__attribute__((used)) static
__inline__
void FUNC_1 ( EState* VAR_0, Int32 VAR_1, UInt32 VAR_2 )
{
   FUNC_0 ( VAR_1 );
   VAR_0->bsBuff |= (VAR_2 << (32 - VAR_0->bsLive - VAR_1));
   VAR_0->bsLive += VAR_1;
}
