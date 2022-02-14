
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imv {size_t num_supported_types; int * supported_types; } ;
typedef size_t TNC_UInt32 ;
typedef int TNC_Result ;
typedef unsigned long* TNC_MessageTypeList ;
typedef int TNC_MessageType ;
typedef scalar_t__ TNC_IMVID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned long*,size_t) ;
 struct tnc_if_imv* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,size_t,unsigned long) ;

__attribute__((used)) static TNC_Result FUNC_4(
 TNC_IMVID VAR_4,
 TNC_MessageTypeList VAR_5,
 TNC_UInt32 VAR_6)
{
 TNC_UInt32 VAR_7;
 struct tnc_if_imv *VAR_8;

 FUNC_3(VAR_0, "TNC: TNC_TNCS_ReportMessageTypes(imvID=%lu "
     "typeCount=%lu)",
     (unsigned long) VAR_4, (unsigned long) VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  FUNC_3(VAR_0, "TNC: supportedTypes[%lu] = %lu",
      VAR_7, VAR_5[VAR_7]);
 }

 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8 == ((void*)0))
  return VAR_2;
 FUNC_0(VAR_8->supported_types);
 VAR_8->supported_types = FUNC_1(VAR_5,
      VAR_6 * sizeof(TNC_MessageType));
 if (VAR_8->supported_types == ((void*)0))
  return VAR_1;
 VAR_8->num_supported_types = VAR_6;

 return VAR_3;
}
