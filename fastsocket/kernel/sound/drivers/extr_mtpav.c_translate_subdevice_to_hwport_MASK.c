
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtpav {int num_ports; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mtpav *VAR_2, int VAR_3)
{
 if (VAR_3 < 0)
  return 0x01;
 else if (VAR_3 < VAR_2->num_ports)
  return VAR_3 + 1;
 else if (VAR_3 < VAR_2->num_ports * 2)
  return VAR_3 - VAR_2->num_ports + 0x09;
 else if (VAR_3 == VAR_2->num_ports * 2 + VAR_1)
  return 0x11;
 else if (VAR_3 == VAR_2->num_ports + VAR_0)
  return 0x63;
 return 0;
}
