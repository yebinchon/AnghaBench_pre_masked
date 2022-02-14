
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pt_time {int cbr; int have_cbr; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(uint32_t *VAR_2, const struct pt_time *VAR_3)
{
 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 if (!VAR_3->have_cbr)
  return -VAR_1;

 *VAR_2 = VAR_3->cbr;

 return 0;
}
