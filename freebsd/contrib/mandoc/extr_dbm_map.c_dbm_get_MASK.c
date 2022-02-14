
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__,...) ;

void *
FUNC_2(int32_t VAR_2)
{
 VAR_2 = FUNC_0(VAR_2);
 if (VAR_2 < 0) {
  FUNC_1("dbm_get: Database corrupt: offset %d", VAR_2);
  return ((void*)0);
 }
 if (VAR_2 >= VAR_1) {
  FUNC_1("dbm_get: Database corrupt: offset %d > %d",
      VAR_2, VAR_1);
  return ((void*)0);
 }
 return VAR_0 + VAR_2;
}
