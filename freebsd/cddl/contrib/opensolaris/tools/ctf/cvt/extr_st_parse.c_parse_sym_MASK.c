
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tdesc_t ;
typedef int iitype_t ;
struct TYPE_3__ {int ii_type; int * ii_dtype; } ;
typedef TYPE_1__ iidesc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,char*) ;
 char* FUNC_1 (char*,int **) ;

__attribute__((used)) static iitype_t
FUNC_2(char *VAR_4, iidesc_t *VAR_5)
{
 tdesc_t *VAR_6;
 iitype_t VAR_7 = 0;





 switch (*VAR_4++) {
 case 'G':
  VAR_7 = VAR_0;
  break;
 case 'S':
  VAR_7 = VAR_3;
  break;
 case 'p':
  VAR_7 = VAR_2;
  break;
 case '(':
  VAR_4--;

 case 'r':
 case 'V':
  VAR_7 = VAR_1;
  break;
 default:
  FUNC_0("parse_sym", "[GprSV(]", VAR_4 - 1);
 }

 if (!(VAR_4 = FUNC_1(VAR_4, &VAR_6)))
  return (-1);

 VAR_5->ii_type = VAR_7;
 VAR_5->ii_dtype = VAR_6;

 return (VAR_7);
}
