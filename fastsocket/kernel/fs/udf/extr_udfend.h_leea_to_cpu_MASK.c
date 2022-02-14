
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_extent_ad {void* extLocation; void* extLength; } ;
struct extent_ad {int extLocation; int extLength; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline struct kernel_extent_ad FUNC_1(struct extent_ad VAR_0)
{
 struct kernel_extent_ad VAR_1;

 VAR_1.extLength = FUNC_0(VAR_0.extLength);
 VAR_1.extLocation = FUNC_0(VAR_0.extLocation);

 return VAR_1;
}
