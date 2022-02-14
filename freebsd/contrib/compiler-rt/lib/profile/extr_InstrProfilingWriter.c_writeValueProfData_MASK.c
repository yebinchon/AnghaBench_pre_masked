
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __llvm_profile_data ;
typedef int VPDataReaderType ;
typedef int ProfDataWriter ;
typedef int ProfBufferIO ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int const*) ;

__attribute__((used)) static int FUNC_4(ProfDataWriter *VAR_0,
                              VPDataReaderType *VAR_1,
                              const __llvm_profile_data *VAR_2,
                              const __llvm_profile_data *VAR_3) {
  ProfBufferIO *VAR_4;
  const __llvm_profile_data *VAR_5 = 0;

  if (!VAR_1)
    return 0;

  VAR_4 = FUNC_1(VAR_0);

  for (VAR_5 = VAR_2; VAR_5 < VAR_3; VAR_5++) {
    if (FUNC_3(VAR_4, VAR_1, VAR_5))
      return -1;
  }

  if (FUNC_0(VAR_4) != 0)
    return -1;
  FUNC_2(VAR_4);

  return 0;
}
