
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
typedef int VCHIQ_BULK_MODE_T ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,unsigned int,int ) ;
 int FUNC_1 (int ,int ,void*,unsigned int,void*,int,int ) ;

VCHIQ_STATUS_T
FUNC_2(VCHIQ_SERVICE_HANDLE_T VAR_3, void *VAR_4,
 unsigned int VAR_5, void *VAR_6, VCHIQ_BULK_MODE_T VAR_7)
{
 VCHIQ_STATUS_T VAR_8;

 switch (VAR_7) {
 case 128:
 case 129:
  VAR_8 = FUNC_1(VAR_3,
   VAR_2, VAR_4, VAR_5, VAR_6,
   VAR_7, VAR_0);
  break;
 case 130:
  VAR_8 = FUNC_0(VAR_3,
   VAR_4, VAR_5, VAR_0);
  break;
 default:
  return VAR_1;
 }

 return VAR_8;
}
