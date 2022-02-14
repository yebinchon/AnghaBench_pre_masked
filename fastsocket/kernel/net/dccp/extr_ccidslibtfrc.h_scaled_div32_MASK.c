
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;


 int FUNC_0 (char*,unsigned long long,unsigned long long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(u64 VAR_1, u64 VAR_2)
{
 u64 VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_3 > VAR_0) {
  FUNC_0("Overflow: %llu/%llu > UINT_MAX",
     (unsigned long long)VAR_1, (unsigned long long)VAR_2);
  return VAR_0;
 }
 return VAR_3;
}
