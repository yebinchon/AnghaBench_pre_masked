
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtpav {int num_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct mtpav *VAR_3, int VAR_4)
{
 int VAR_5;
 if (VAR_4 <= 0x00)
  return VAR_3->num_ports + VAR_1;
 else if (VAR_4 <= 0x08) {
  VAR_5 = VAR_4 - 1;
  if (VAR_5 >= VAR_3->num_ports)
   VAR_5 = 0;
  return VAR_5;
 } else if (VAR_4 <= 0x10) {
  VAR_5 = VAR_4 - 0x09 + VAR_3->num_ports;
  if (VAR_5 >= VAR_3->num_ports * 2)
   VAR_5 = VAR_3->num_ports;
  return VAR_5;
 } else if (VAR_4 == 0x11)
  return VAR_3->num_ports + VAR_2;
 else
  return VAR_3->num_ports + VAR_0;
}
