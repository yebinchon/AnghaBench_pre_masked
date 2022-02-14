
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int __u32 ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline __u32 FUNC_1(void *VAR_0, __u32 VAR_1, int VAR_2)
{
 switch (VAR_2) {
  case 4:
   return *(__u32 *)VAR_0 % VAR_1;
  case 8:
   {
   __u64 VAR_3 = *(__u64 *)VAR_0;
   return FUNC_0(VAR_3, VAR_1);
   }
 }


 return 0;
}
