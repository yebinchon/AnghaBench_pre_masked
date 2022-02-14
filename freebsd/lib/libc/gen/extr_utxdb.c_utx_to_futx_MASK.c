
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_type; } ;
struct futx {int fu_type; } ;




 int VAR_0 ;






 int FUNC_0 (struct utmpx const*,struct futx*) ;
 int FUNC_1 (struct utmpx const*,struct futx*) ;
 int FUNC_2 (struct utmpx const*,struct futx*,int ) ;
 int FUNC_3 (struct futx*) ;
 int FUNC_4 (struct utmpx const*,struct futx*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct futx*,int ,int) ;
 int VAR_3 ;

void
FUNC_6(const struct utmpx *VAR_4, struct futx *VAR_5)
{

 FUNC_5(VAR_5, 0, sizeof *VAR_5);

 switch (VAR_4->ut_type) {
 case 135:
 case 130:
 case 131:

 case 129:
  break;
 case 128:
  FUNC_0(VAR_4, VAR_5);
  FUNC_2(VAR_4, VAR_5, VAR_3);
  FUNC_2(VAR_4, VAR_5, VAR_2);

  FUNC_2(VAR_4, VAR_5, VAR_1);
  FUNC_1(VAR_4, VAR_5);
  break;
 case 133:
  FUNC_0(VAR_4, VAR_5);
  FUNC_1(VAR_4, VAR_5);
  break;
 case 132:
  FUNC_0(VAR_4, VAR_5);
  FUNC_2(VAR_4, VAR_5, VAR_3);
  FUNC_2(VAR_4, VAR_5, VAR_2);
  FUNC_1(VAR_4, VAR_5);
  break;
 case 134:
  FUNC_0(VAR_4, VAR_5);
  FUNC_1(VAR_4, VAR_5);
  break;
 default:
  VAR_5->fu_type = VAR_0;
  return;
 }

 FUNC_4(VAR_4, VAR_5);
 FUNC_3(VAR_5);
}
