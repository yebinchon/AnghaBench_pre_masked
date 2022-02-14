
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffLive; int buffer; int handle; } ;
typedef int Int32 ;
typedef TYPE_1__ BitStream ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static Int32 FUNC_2 ( BitStream* VAR_2 )
{
   if (VAR_2->buffLive > 0) {
      VAR_2->buffLive --;
      return ( ((VAR_2->buffer) >> (VAR_2->buffLive)) & 0x1 );
   } else {
      Int32 VAR_3 = FUNC_0 ( VAR_2->handle );
      if ( VAR_3 == VAR_0 ) {
         if (VAR_1 != 0) FUNC_1();
         return 2;
      }
      VAR_2->buffLive = 7;
      VAR_2->buffer = VAR_3;
      return ( ((VAR_2->buffer) >> 7) & 0x1 );
   }
}
