
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int FUNC_0 (char const,int ,int ) ;

int
FUNC_1(const char *VAR_10)
{

 for (; *VAR_10 != '\0'; VAR_10++) {
  switch (*VAR_10) {
  case 'H':
   FUNC_0(*VAR_10,
       VAR_6,
       VAR_1);
   break;
  case 'M':
   FUNC_0(*VAR_10,
       VAR_5,
       VAR_0);
   break;
  case 'Q':
   FUNC_0(*VAR_10,
       VAR_7,
       VAR_2);
   break;
  case 'T':
   FUNC_0(*VAR_10,
       VAR_8,
       VAR_3);
   break;
  case 'V':
   FUNC_0(*VAR_10,
       VAR_9,
       VAR_4);
   break;
  default:
   return (-1);
  }
 }
 return (0);
}
