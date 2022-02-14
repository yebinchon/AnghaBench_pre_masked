
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_2__ {int device_nominal_form_factor; } ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef TYPE_1__ ATA_IDENTIFY_DEVICE_DATA_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,void*,int,void*,int ,int,int ) ;
 int FUNC_2 (int *,void*,int,int) ;

void FUNC_3(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_4,
   void * VAR_5,
   void * VAR_6
)
{
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_7 = (ATA_IDENTIFY_DEVICE_DATA_T*)
      VAR_5;

   U32 VAR_8;



   FUNC_2(VAR_4, VAR_6, 0, 0x00);

   FUNC_2(VAR_4, VAR_6, 1, VAR_2);


   FUNC_2(VAR_4, VAR_6, 2, 0x00);
   FUNC_2(VAR_4, VAR_6, 3, VAR_1);

   FUNC_1(
      VAR_4,
      VAR_6,
      4,
      VAR_5,
      FUNC_0(VAR_3),
      2,
      VAR_0
    );

    FUNC_2(VAR_4, VAR_6, 6, 0x00);

    FUNC_2(
       VAR_4,
       VAR_6,
       7,
       (VAR_7->device_nominal_form_factor & 0x0F)
    );


    for(VAR_8 = 8; VAR_8 < 64; VAR_8++)
    {
       FUNC_2(VAR_4, VAR_6, VAR_8, 0x00);
    }
}
