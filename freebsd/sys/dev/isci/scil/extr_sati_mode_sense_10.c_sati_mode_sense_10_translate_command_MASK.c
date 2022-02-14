
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_5__ {scalar_t__ scratch; } ;
struct TYPE_6__ {int allocation_length; TYPE_1__ command_specific_data; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int * FUNC_0 (void*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,void*,void*,int) ;

SATI_STATUS FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_0,
   void * VAR_1,
   void * VAR_2
)
{
   U8 * VAR_3 = FUNC_0(VAR_1);

   VAR_0->command_specific_data.scratch = 0;


   VAR_0->allocation_length = (FUNC_1(VAR_3, 7) << 8) |
                                 (FUNC_1(VAR_3, 8));

   return FUNC_2(VAR_0, VAR_1, VAR_2, 10);
}
