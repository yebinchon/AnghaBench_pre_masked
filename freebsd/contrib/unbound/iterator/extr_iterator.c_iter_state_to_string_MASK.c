
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum iter_state { ____Placeholder_iter_state } iter_state ;
const char*
FUNC_0(enum iter_state VAR_0)
{
 switch (VAR_0)
 {
 case 131 :
  return "INIT REQUEST STATE";
 case 133 :
  return "INIT REQUEST STATE (stage 2)";
 case 132:
  return "INIT REQUEST STATE (stage 3)";
 case 129 :
  return "QUERY TARGETS STATE";
 case 130 :
  return "PRIME RESPONSE STATE";
 case 136 :
  return "COLLECT CLASS STATE";
 case 135 :
  return "DSNS FIND STATE";
 case 128 :
  return "QUERY RESPONSE STATE";
 case 134 :
  return "FINISHED RESPONSE STATE";
 default :
  return "UNKNOWN ITER STATE";
 }
}
