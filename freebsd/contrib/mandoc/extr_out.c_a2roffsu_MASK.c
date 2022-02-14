
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roffsu {int unit; int scale; } ;
typedef enum roffscale { ____Placeholder_roffscale } roffscale ;


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
 int FUNC_0 (char const*,char**) ;

const char *
FUNC_1(const char *VAR_11, struct roffsu *VAR_12, enum roffscale VAR_13)
{
 char *VAR_14;

 VAR_12->unit = VAR_13 == VAR_6 ? VAR_0 : VAR_13;
 VAR_12->scale = FUNC_0(VAR_11, &VAR_14);
 if (VAR_14 == VAR_11)
  return ((void*)0);

 switch (*VAR_14++) {
 case 'c':
  VAR_12->unit = VAR_1;
  break;
 case 'i':
  VAR_12->unit = VAR_5;
  break;
 case 'f':
  VAR_12->unit = VAR_4;
  break;
 case 'M':
  VAR_12->unit = VAR_7;
  break;
 case 'm':
  VAR_12->unit = VAR_2;
  break;
 case 'n':
  VAR_12->unit = VAR_3;
  break;
 case 'P':
  VAR_12->unit = VAR_8;
  break;
 case 'p':
  VAR_12->unit = VAR_9;
  break;
 case 'u':
  VAR_12->unit = VAR_0;
  break;
 case 'v':
  VAR_12->unit = VAR_10;
  break;
 default:
  VAR_14--;
  if (VAR_6 == VAR_13)
   return ((void*)0);
  VAR_12->unit = VAR_13;
  break;
 }
 return VAR_14;
}
