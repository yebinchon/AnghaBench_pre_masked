
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bcma_erom {int dummy; } ;
typedef int bhnd_port_type ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcma_erom*,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct bcma_erom *VAR_4, uint8_t VAR_5,
    bhnd_port_type *VAR_6)
{
 switch (VAR_5) {
 case 130:
  *VAR_6 = VAR_2;
  return (0);
 case 131:
  *VAR_6 = VAR_1;
  return (0);
 case 129:
 case 128:
  *VAR_6 = VAR_0;
  return (0);
 default:
  FUNC_0(VAR_4, "unsupported region type %hhx\n",
   VAR_5);
  return (VAR_3);
 }
}
