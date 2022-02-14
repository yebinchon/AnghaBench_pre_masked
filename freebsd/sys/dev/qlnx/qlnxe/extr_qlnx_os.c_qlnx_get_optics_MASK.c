
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qlnx_link_output {int media_type; int speed; } ;
typedef int qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static uint32_t
FUNC_0(qlnx_host_t *VAR_12, struct qlnx_link_output *VAR_13)
{
 uint32_t VAR_14 = 0;

 switch (VAR_13->media_type) {

 case 129:
 case 128:
  if (VAR_13->speed == (100 * 1000))
   VAR_14 = VAR_9;
  else if (VAR_13->speed == (40 * 1000))
   VAR_14 = VAR_6;
  else if (VAR_13->speed == (25 * 1000))
   VAR_14 = VAR_11;
  else if (VAR_13->speed == (10 * 1000))
   VAR_14 = (VAR_2 | VAR_3);
  else if (VAR_13->speed == (1 * 1000))
   VAR_14 = (VAR_1 | VAR_0);

  break;

 case 130:
  if (VAR_13->speed == (100 * 1000))
   VAR_14 = VAR_8;
  else if (VAR_13->speed == (40 * 1000))
   VAR_14 = VAR_5;
  else if (VAR_13->speed == (25 * 1000))
   VAR_14 = VAR_10;
  else if (VAR_13->speed == (10 * 1000))
   VAR_14 = VAR_4;

  break;

 default :
  VAR_14 = VAR_7;
  break;
 }
 return (VAR_14);
}
