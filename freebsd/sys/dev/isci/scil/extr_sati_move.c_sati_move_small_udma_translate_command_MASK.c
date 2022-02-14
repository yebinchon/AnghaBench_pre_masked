
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_4__ {scalar_t__ data_direction; int protocol; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (void*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,void*,int ,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static
void FUNC_5(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_3,
   void * VAR_4,
   void * VAR_5,
   U8 VAR_6,
   U8 VAR_7
)
{
   U8 * VAR_8 = FUNC_0(VAR_4);
   U8 * VAR_9 = FUNC_1(VAR_5);

   FUNC_3(VAR_3, VAR_5, VAR_6, VAR_7);
   FUNC_4(VAR_9, FUNC_2(VAR_8, 4));

   if (VAR_3->data_direction == VAR_0)
      VAR_3->protocol = VAR_1;
   else
      VAR_3->protocol = VAR_2;
}
