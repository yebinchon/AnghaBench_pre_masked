
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int link_hw_info; scalar_t__ link_up; } ;
typedef TYPE_1__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __inline uint32_t
FUNC_0(qla_host_t *VAR_4)
{
 uint32_t VAR_5 = 0;

 if (VAR_4->link_up) {
  switch ((VAR_4->link_hw_info & 0xF0)) {
  case (0x01 << 4):
  case (0x02 << 4):
  case (0x03 << 4):
   VAR_5 = (VAR_1 | VAR_2);
   break;

  case (0x04 << 4):
  case (0x05 << 4):
  case (0x06 << 4):
   VAR_5 = VAR_3;
   break;

  case (0x07 << 4):
  case (0x08 << 4):
  case (0x09 << 4):
  case (0x0A << 4):
  case (0x0B << 4):
   VAR_5 = VAR_0;
   break;
  }
 }

 return(VAR_5);
}
