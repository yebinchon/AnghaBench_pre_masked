
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct long_ad {int extLocation; int extLength; } ;
struct kernel_long_ad {int extLocation; int extLength; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline struct kernel_long_ad FUNC_2(struct long_ad VAR_0)
{
 struct kernel_long_ad VAR_1;

 VAR_1.extLength = FUNC_0(VAR_0.extLength);
 VAR_1.extLocation = FUNC_1(VAR_0.extLocation);

 return VAR_1;
}
