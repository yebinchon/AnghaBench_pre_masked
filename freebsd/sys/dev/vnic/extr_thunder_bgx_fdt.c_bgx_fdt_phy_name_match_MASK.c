
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgx {int qlm_mode; } ;
typedef int ssize_t ;
typedef int boolean_t ;


 int VAR_0 ;







 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static boolean_t
FUNC_1(struct bgx *VAR_2, char *VAR_3, ssize_t VAR_4)
{
 const char *VAR_5;
 ssize_t VAR_6;

 switch (VAR_2->qlm_mode) {
 case 131:
  VAR_5 = "sgmii";
  VAR_6 = sizeof("sgmii");
  break;
 case 130:
  VAR_5 = "xaui";
  VAR_6 = sizeof("xaui");
  if (VAR_6 < VAR_4)
   return (VAR_0);
  if (FUNC_0(VAR_3, VAR_5, VAR_6) == 0)
   return (VAR_1);
  VAR_5 = "dxaui";
  VAR_6 = sizeof("dxaui");
  break;
 case 132:
  VAR_5 = "raui";
  VAR_6 = sizeof("raui");
  break;
 case 129:
  VAR_5 = "xfi";
  VAR_6 = sizeof("xfi");
  break;
 case 128:
  VAR_5 = "xlaui";
  VAR_6 = sizeof("xlaui");
  break;
 case 134:
  VAR_5 = "xfi-10g-kr";
  VAR_6 = sizeof("xfi-10g-kr");
  break;
 case 133:
  VAR_5 = "xlaui-40g-kr";
  VAR_6 = sizeof("xlaui-40g-kr");
  break;
 default:
  return (VAR_0);
 }

 if (VAR_6 > VAR_4)
  return (VAR_0);
 if (FUNC_0(VAR_3, VAR_5, VAR_6 - 1) == 0 &&
     (VAR_3[VAR_6 - 1] == '\0' || VAR_3[VAR_6 - 1] == '@'))
  return (VAR_1);

 return (VAR_0);
}
