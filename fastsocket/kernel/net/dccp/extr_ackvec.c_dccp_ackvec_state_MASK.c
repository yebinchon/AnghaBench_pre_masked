
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct dccp_ackvec {int* av_buf; } ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(const struct dccp_ackvec *VAR_1,
       const u32 VAR_2)
{
 return VAR_1->av_buf[VAR_2] & VAR_0;
}
