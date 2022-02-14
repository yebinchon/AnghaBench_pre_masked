
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_3__ {scalar_t__ data_direction; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (void*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static
void FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_1,
   void * VAR_2,
   U8 VAR_3,
   U8 VAR_4
)
{
   U8 * VAR_5 = FUNC_0(VAR_2);

   if (VAR_1->data_direction == VAR_0)
      FUNC_1(VAR_5, VAR_3);
   else
      FUNC_1(VAR_5, VAR_4);
}
