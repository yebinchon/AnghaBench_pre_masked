
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_2__ {int general_config_bits; } ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef TYPE_1__ ATA_IDENTIFY_DEVICE_DATA_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,void*,int,void*,int ,int,int ) ;
 int FUNC_2 (int *,void*,void*) ;
 int FUNC_3 (int *,void*,int,int) ;

void FUNC_4(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_3,
   void * VAR_4,
   void * VAR_5
)
{
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_6 = (ATA_IDENTIFY_DEVICE_DATA_T*)
                                           VAR_4;
   U32 VAR_7;


   FUNC_3(VAR_3, VAR_5, 0, 0x00);



   if (VAR_6->general_config_bits & VAR_0)
      FUNC_3(VAR_3, VAR_5, 1, 0x80);
   else
      FUNC_3(VAR_3, VAR_5, 1, 0x00);

   FUNC_3(VAR_3, VAR_5, 2, 0x05);
   FUNC_3(VAR_3, VAR_5, 3, 0x02);

   FUNC_3(VAR_3, VAR_5, 4, 62);


   FUNC_3(VAR_3, VAR_5, 5, 0x00);
   FUNC_3(VAR_3, VAR_5, 6, 0x00);
   FUNC_3(VAR_3, VAR_5, 7, 0x02);


   FUNC_3(VAR_3, VAR_5, 8, 0x41);
   FUNC_3(VAR_3, VAR_5, 9, 0x54);
   FUNC_3(VAR_3, VAR_5, 10, 0x41);
   FUNC_3(VAR_3, VAR_5, 11, 0x20);
   FUNC_3(VAR_3, VAR_5, 12, 0x20);
   FUNC_3(VAR_3, VAR_5, 13, 0x20);
   FUNC_3(VAR_3, VAR_5, 14, 0x20);
   FUNC_3(VAR_3, VAR_5, 15, 0x20);


   FUNC_1(
      VAR_3,
      VAR_5,
      16,
      VAR_4,
      FUNC_0(VAR_2),
      16,
      VAR_1
   );

   FUNC_2(
      VAR_3,
      VAR_4,
      VAR_5
   );


   for (VAR_7 = 36; VAR_7 < 58; VAR_7++)
      FUNC_3(VAR_3, VAR_5, VAR_7, 0);




   FUNC_3(VAR_3, VAR_5, 58, 0);
   FUNC_3(VAR_3, VAR_5, 59, 0x80);


   FUNC_3(VAR_3, VAR_5, 60, 0x0C);
   FUNC_3(VAR_3, VAR_5, 61, 0x20);


   FUNC_3(VAR_3, VAR_5, 62, 0x04);
   FUNC_3(VAR_3, VAR_5, 63, 0x60);


   FUNC_3(VAR_3, VAR_5, 64, 0x04);
   FUNC_3(VAR_3, VAR_5, 65, 0xC0);


   FUNC_3(VAR_3, VAR_5, 66, 0x16);
   FUNC_3(VAR_3, VAR_5, 67, 0x23);
}
