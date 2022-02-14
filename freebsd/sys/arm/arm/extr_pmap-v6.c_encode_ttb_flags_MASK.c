
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ coherent_walk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static uint32_t
FUNC_1(int VAR_8)
{
 uint32_t VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_9 = (VAR_7[VAR_8] >> VAR_1) &
  VAR_0;
 VAR_10 = (VAR_7[VAR_8] >> VAR_5) &
  VAR_4;
 VAR_11 = (VAR_7[VAR_8] >> VAR_3) &
  VAR_2;

 VAR_12 = VAR_11 << 5;
 VAR_12 |= VAR_10 << 3;
 if (VAR_6.coherent_walk)
  VAR_12 |= (VAR_9 & 0x1) << 6;
 VAR_12 |= (VAR_9 & 0x2) >> 1;





 return VAR_12;
}
