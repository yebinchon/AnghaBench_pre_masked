
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_long ;
struct TYPE_2__ {int* vi_pixel_fsizes; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline u_long
FUNC_0(uint16_t VAR_1, uint16_t VAR_2, uint16_t VAR_3)
{
  int VAR_4, VAR_5, VAR_6;

  VAR_4 = VAR_0.vi_pixel_fsizes[2];
  VAR_5 = VAR_0.vi_pixel_fsizes[1];
  VAR_6 = VAR_0.vi_pixel_fsizes[0];
  return (VAR_1 >> (16 - VAR_4) << (VAR_5 + VAR_6)) | (VAR_2 >> (16 - VAR_5) << VAR_6) |
  (VAR_3 >> (16 - VAR_6) << 0);
}
