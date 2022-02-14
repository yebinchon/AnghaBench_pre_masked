
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_5__ {int capabilities; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,void*,int,int) ;

__attribute__((used)) static
void FUNC_1(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_4,
   void * VAR_5
)
{
   U32 VAR_6;

   FUNC_0(VAR_4, VAR_5, 0, 0x00);


   FUNC_0(VAR_4, VAR_5, 1, 0x00);


   FUNC_0(VAR_4, VAR_5, 2, 0x00);
   FUNC_0(VAR_4, VAR_5, 3, 0x02);


   VAR_6 = 4;

   if(VAR_4->device->capabilities & VAR_1)
   {
      FUNC_0(
         VAR_4,
         VAR_5,
         VAR_6,
         VAR_2
      );
      VAR_6 = 5;
   }

   if(VAR_4->device->capabilities & VAR_0)
   {
      FUNC_0(
         VAR_4,
         VAR_5,
         VAR_6,
         VAR_3
      );
   }
}
