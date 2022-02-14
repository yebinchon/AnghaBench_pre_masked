
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_config {int const* end; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_0(const uint8_t *VAR_8, const struct pt_config *VAR_9)
{
 int VAR_10;

 if (!VAR_8 || !VAR_9)
  return -VAR_6;

 if (VAR_9->end < VAR_8 + VAR_7)
  return -VAR_5;

 VAR_8 += VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_3; ++VAR_10) {
  if (*VAR_8++ != VAR_1)
   return -VAR_4;
  if (*VAR_8++ != VAR_2)
   return -VAR_4;
 }

 return VAR_7;
}
