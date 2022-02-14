
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imc {size_t num_supported_types; int * supported_types; } ;
typedef size_t TNC_UInt32 ;
typedef int TNC_Result ;
typedef unsigned long* TNC_MessageTypeList ;
typedef int TNC_MessageType ;
typedef size_t TNC_IMCID ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned long*,size_t) ;
 struct tnc_if_imc** VAR_5 ;
 int FUNC_2 (int ,char*,size_t,unsigned long) ;

__attribute__((used)) static TNC_Result FUNC_3(
 TNC_IMCID VAR_6,
 TNC_MessageTypeList VAR_7,
 TNC_UInt32 VAR_8)
{
 TNC_UInt32 VAR_9;
 struct tnc_if_imc *VAR_10;

 FUNC_2(VAR_0, "TNC: TNC_TNCC_ReportMessageTypes(imcID=%lu "
     "typeCount=%lu)",
     (unsigned long) VAR_6, (unsigned long) VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  FUNC_2(VAR_0, "TNC: supportedTypes[%lu] = %lu",
      VAR_9, VAR_7[VAR_9]);
 }

 if (VAR_6 >= VAR_1 || VAR_5[VAR_6] == ((void*)0))
  return VAR_3;

 VAR_10 = VAR_5[VAR_6];
 FUNC_0(VAR_10->supported_types);
 VAR_10->supported_types = FUNC_1(VAR_7,
      VAR_8 * sizeof(TNC_MessageType));
 if (VAR_10->supported_types == ((void*)0))
  return VAR_2;
 VAR_10->num_supported_types = VAR_8;

 return VAR_4;
}
