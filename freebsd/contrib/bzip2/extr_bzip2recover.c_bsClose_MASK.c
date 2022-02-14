
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UChar ;
struct TYPE_4__ {char mode; int buffLive; int buffer; int handle; } ;
typedef scalar_t__ Int32 ;
typedef TYPE_1__ BitStream ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6 ( BitStream* VAR_2 )
{
   Int32 VAR_3;

   if ( VAR_2->mode == 'w' ) {
      while ( VAR_2->buffLive < 8 ) {
         VAR_2->buffLive++;
         VAR_2->buffer <<= 1;
      };
      VAR_3 = FUNC_3 ( (UChar) (VAR_2->buffer), VAR_2->handle );
      if (VAR_3 == VAR_0) FUNC_5();
      VAR_1++;
      VAR_3 = FUNC_1 ( VAR_2->handle );
      if (VAR_3 == VAR_0) FUNC_5();
   }
   VAR_3 = FUNC_0 ( VAR_2->handle );
   if (VAR_3 == VAR_0) {
      if (VAR_2->mode == 'w') FUNC_5(); else FUNC_4();
   }
   FUNC_2 ( VAR_2 );
}
