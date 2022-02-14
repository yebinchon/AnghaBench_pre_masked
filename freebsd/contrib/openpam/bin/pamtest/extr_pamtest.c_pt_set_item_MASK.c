
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



 int * VAR_1 ;
 int FUNC_0 (int ,int,char const*) ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, const char *VAR_4)
{
 int VAR_5;

 switch (VAR_3) {
 case 131:
 case 129:
 case 138:
 case 135:
 case 130:
 case 133:
 case 132:
 case 128:
 case 137:
 case 134:
 case 136:
  FUNC_2("setting %s to %s", VAR_1[VAR_3], VAR_4);
  break;
 default:
  FUNC_2("setting %s", VAR_1[VAR_3]);
  break;
 }
 if ((VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4)) != VAR_0)
  FUNC_1(VAR_5, "pam_set_item(%s)", VAR_1[VAR_3]);
 return (VAR_5);
}
