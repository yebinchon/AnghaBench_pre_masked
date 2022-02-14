
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdma_request {int src_width; int dst_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(struct xdma_request *VAR_9, uint32_t *VAR_10, uint32_t *VAR_11)
{

 *VAR_10 = 0;
 *VAR_11 = FUNC_0(VAR_9->src_width, VAR_9->dst_width);

 switch (VAR_9->src_width) {
 case 1:
  *VAR_10 |= VAR_3;
  break;
 case 2:
  *VAR_10 |= VAR_4;
  break;
 case 4:
  *VAR_10 |= VAR_5;
  break;
 default:
  return (-1);
 }

 switch (VAR_9->dst_width) {
 case 1:
  *VAR_10 |= VAR_0;
  break;
 case 2:
  *VAR_10 |= VAR_1;
  break;
 case 4:
  *VAR_10 |= VAR_2;
  break;
 default:
  return (-1);
 }

 switch (*VAR_11) {
 case 1:
  *VAR_10 |= VAR_6;
  break;
 case 2:
  *VAR_10 |= VAR_7;
  break;
 case 4:
  *VAR_10 |= VAR_8;
  break;
 default:
  return (-1);
 };

 return (0);
}
