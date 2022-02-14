
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct activemap {scalar_t__ am_magic; int am_ndirty; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

uint64_t
FUNC_1(const struct activemap *VAR_1)
{

 FUNC_0(VAR_1->am_magic == VAR_0);

 return (VAR_1->am_ndirty);
}
