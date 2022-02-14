
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state; } ;
typedef TYPE_1__ SATI_TRANSLATOR_SEQUENCE_T ;
typedef int SATI_STATUS ;
typedef int ATA_IDENTIFY_DEVICE_DATA_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,void*,int,void*,int ,int,int ) ;
 int FUNC_2 (TYPE_1__*,void*,void*) ;
 int FUNC_3 (TYPE_1__*,void*,int,int) ;

SATI_STATUS FUNC_4(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_6,
   void * VAR_7,
   void * VAR_8
)
{
   FUNC_3(VAR_6, VAR_8, 0, 0x00);
   FUNC_3(VAR_6, VAR_8, 1, VAR_3);
   FUNC_3(VAR_6, VAR_8, 2, 0x02);
   FUNC_3(VAR_6, VAR_8, 3, 0x38);


   FUNC_3(VAR_6, VAR_8, 4, 0x00);
   FUNC_3(VAR_6, VAR_8, 5, 0x00);
   FUNC_3(VAR_6, VAR_8, 6, 0x00);
   FUNC_3(VAR_6, VAR_8, 7, 0x00);


   FUNC_3(VAR_6, VAR_8, 8, 0x41);
   FUNC_3(VAR_6, VAR_8, 9, 0x54);
   FUNC_3(VAR_6, VAR_8, 10, 0x41);
   FUNC_3(VAR_6, VAR_8, 11, 0x20);
   FUNC_3(VAR_6, VAR_8, 12, 0x20);
   FUNC_3(VAR_6, VAR_8, 13, 0x20);
   FUNC_3(VAR_6, VAR_8, 14, 0x20);
   FUNC_3(VAR_6, VAR_8, 15, 0x20);


   FUNC_1(
      VAR_6,
      VAR_8,
      16,
      VAR_7,
      FUNC_0(VAR_5),
      16,
      VAR_4
   );


   FUNC_2(
      VAR_6,
      VAR_7,
      VAR_8
   );




   FUNC_3(VAR_6, VAR_8, 56, 0xEC);


   FUNC_3(VAR_6, VAR_8, 57, 0x00);
   FUNC_3(VAR_6, VAR_8, 58, 0x00);
   FUNC_3(VAR_6, VAR_8, 59, 0x00);


   FUNC_1(
      VAR_6,
      VAR_8,
      60,
      VAR_7,
      0,
      sizeof(ATA_IDENTIFY_DEVICE_DATA_T),
      VAR_0
   );


   VAR_6->state = VAR_2;

   return VAR_1;
}
