
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct xlocale_collate {TYPE_1__* info; } ;
struct TYPE_2__ {int * pri_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct xlocale_collate *VAR_3, unsigned char *VAR_4, int VAR_5, int VAR_6)
{

 uint32_t VAR_7 = (uint32_t)VAR_3->info->pri_count[VAR_6];
 int VAR_8 = 0;

 while (VAR_7) {
  *VAR_4 = (VAR_5 & VAR_0) + VAR_1;
  VAR_5 >>= VAR_2;
  VAR_7 >>= VAR_2;
  VAR_4++;
  VAR_8++;
 }
 return (VAR_8);
}
