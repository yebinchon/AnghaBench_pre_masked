
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum i40e_aq_link_speed { ____Placeholder_i40e_aq_link_speed } i40e_aq_link_speed ;
char *
FUNC_0(enum i40e_aq_link_speed VAR_0)
{
 int VAR_1;

 char *VAR_2[] = {
  "Unknown",
  "100 Mbps",
  "1 Gbps",
  "10 Gbps",
  "40 Gbps",
  "20 Gbps",
  "25 Gbps",
 };

 switch (VAR_0) {
 case 134:
  VAR_1 = 1;
  break;
 case 132:
  VAR_1 = 2;
  break;
 case 133:
  VAR_1 = 3;
  break;
 case 129:
  VAR_1 = 4;
  break;
 case 131:
  VAR_1 = 5;
  break;
 case 130:
  VAR_1 = 6;
  break;
 case 128:
 default:
  VAR_1 = 0;
  break;
 }

 return VAR_2[VAR_1];
}
