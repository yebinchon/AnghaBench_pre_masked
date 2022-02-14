
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdma_sglist {int src_width; int dst_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_0(struct xdma_sglist *VAR_6, uint32_t *VAR_7)
{
 uint32_t VAR_8;

 VAR_8 = 0;

 switch (VAR_6->src_width) {
 case 1:
  VAR_8 |= VAR_3;
  break;
 case 2:
  VAR_8 |= VAR_4;
  break;
 case 4:
  VAR_8 |= VAR_5;
  break;
 default:
  return (-1);
 }

 switch (VAR_6->dst_width) {
 case 1:
  VAR_8 |= VAR_0;
  break;
 case 2:
  VAR_8 |= VAR_1;
  break;
 case 4:
  VAR_8 |= VAR_2;
  break;
 default:
  return (-1);
 }

 *VAR_7 |= VAR_8;

 return (0);
}
