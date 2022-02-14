
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_5__ {scalar_t__ data_direction; int protocol; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,void*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,void*,void*,int ,int ) ;

__attribute__((used)) static
SATI_STATUS FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_4,
   void * VAR_5,
   void * VAR_6,
   U32 VAR_7,
   U8 VAR_8,
   U8 VAR_9
)
{
   FUNC_0(VAR_4, VAR_6, VAR_8, VAR_9);

   if (VAR_4->data_direction == VAR_1)
      VAR_4->protocol = VAR_2;
   else
      VAR_4->protocol = VAR_3;

   return FUNC_1(
             VAR_4, VAR_5, VAR_6, VAR_7, VAR_0
          );
}
