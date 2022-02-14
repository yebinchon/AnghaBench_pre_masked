
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char const* VAR_0 ;
 unsigned char const* VAR_1 ;
 unsigned char const* VAR_2 ;
 unsigned char const* VAR_3 ;
 unsigned char const* VAR_4 ;
 unsigned char const* VAR_5 ;

const unsigned char *
FUNC_0(int VAR_6, size_t *VAR_7)
{
 switch (VAR_6) {
 case 133:
  *VAR_7 = sizeof VAR_0;
  return VAR_0;
 case 132:
  *VAR_7 = sizeof VAR_1;
  return VAR_1;
 case 131:
  *VAR_7 = sizeof VAR_2;
  return VAR_2;
 case 130:
  *VAR_7 = sizeof VAR_3;
  return VAR_3;
 case 129:
  *VAR_7 = sizeof VAR_4;
  return VAR_4;
 case 128:
  *VAR_7 = sizeof VAR_5;
  return VAR_5;
 default:
  *VAR_7 = 0;
  return ((void*)0);
 }
}
