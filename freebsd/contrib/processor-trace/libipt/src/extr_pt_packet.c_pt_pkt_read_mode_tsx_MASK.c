
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_packet_mode_tsx {int intx; int abrt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct pt_packet_mode_tsx *VAR_4,
    uint8_t VAR_5)
{
 if (!VAR_4)
  return -VAR_2;

 VAR_4->intx = (VAR_5 & VAR_1) != 0;
 VAR_4->abrt = (VAR_5 & VAR_0) != 0;

 return VAR_3;
}
