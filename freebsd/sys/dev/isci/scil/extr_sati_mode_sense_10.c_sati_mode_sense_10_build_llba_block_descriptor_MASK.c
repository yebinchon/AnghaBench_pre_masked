
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
typedef int U32 ;
typedef int SATI_TRANSLATOR_SEQUENCE_T ;
typedef int ATA_IDENTIFY_DEVICE_DATA_T ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int*,int*) ;
 int FUNC_1 (int *,void*,int,int ) ;

__attribute__((used)) static
U32 FUNC_2(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_1,
   void * VAR_2,
   ATA_IDENTIFY_DEVICE_DATA_T * VAR_3,
   U32 VAR_4
)
{
   U32 VAR_5 = 0;
   U32 VAR_6 = 0;
   U32 VAR_7 = 0;



   FUNC_0(
      VAR_3, &VAR_5, &VAR_6, &VAR_7
   );


   FUNC_1(VAR_1, VAR_2, VAR_4, (U8)((VAR_6>>24) & 0xFF));
   FUNC_1(VAR_1, VAR_2, VAR_4+1, (U8)((VAR_6>>16) & 0xFF));
   FUNC_1(VAR_1, VAR_2, VAR_4+2, (U8)((VAR_6>>8) & 0xFF));
   FUNC_1(VAR_1, VAR_2, VAR_4+3, (U8)(VAR_6 & 0xFF));
   FUNC_1(VAR_1, VAR_2, VAR_4+4, (U8)((VAR_5>>24) & 0xFF));
   FUNC_1(VAR_1, VAR_2, VAR_4+5, (U8)((VAR_5>>16) & 0xFF));
   FUNC_1(VAR_1, VAR_2, VAR_4+6, (U8)((VAR_5>>8) & 0xFF));
   FUNC_1(VAR_1, VAR_2, VAR_4+7, (U8)(VAR_5 & 0xFF));


   FUNC_1(VAR_1, VAR_2, VAR_4+8, 0);
   FUNC_1(VAR_1, VAR_2, VAR_4+9, 0);
   FUNC_1(VAR_1, VAR_2, VAR_4+10, 0);
   FUNC_1(VAR_1, VAR_2, VAR_4+11, 0);


   FUNC_1(VAR_1,VAR_2, VAR_4+12, (U8)((VAR_7>>24) & 0xFF));
   FUNC_1(VAR_1,VAR_2, VAR_4+13, (U8)((VAR_7>>16) & 0xFF));
   FUNC_1(VAR_1,VAR_2, VAR_4+14, (U8)((VAR_7>>8) & 0xFF));
   FUNC_1(VAR_1,VAR_2, VAR_4+15, (U8)(VAR_7 & 0xFF));

   return VAR_0;
}
