
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef scalar_t__ u_int32 ;
typedef scalar_t__ associd_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static associd_t
FUNC_1(
 u_int32 VAR_1
 )
{
 associd_t VAR_2;
 u_long VAR_3;

 VAR_2 = (associd_t)VAR_1;
 if (0 == VAR_2 || VAR_1 != VAR_2) {
  VAR_3 = VAR_1;
  FUNC_0(VAR_0,
   "***Invalid association ID %lu specified\n",
   VAR_3);
  return 0;
 }

 return VAR_2;
}
