
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ess_info {int dummy; } ;
struct ess_chinfo {int hwch; int dir; int buffer; struct ess_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int ) ;

 int FUNC_1 (int) ;


 int FUNC_2 (struct ess_info*,int ,int ,int ,int ) ;
 int FUNC_3 (struct ess_info*,int ,int) ;
 int FUNC_4 (struct ess_info*) ;
 int FUNC_5 (struct ess_chinfo*) ;
 int FUNC_6 (struct ess_chinfo*) ;
 int FUNC_7 (struct ess_info*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct ess_chinfo *VAR_3 = VAR_1;
 struct ess_info *VAR_4 = VAR_3->parent;

 if (!FUNC_1(VAR_2))
  return 0;

 FUNC_0(FUNC_8("esschan_trigger: %d\n",VAR_2));

 FUNC_4(VAR_4);
 switch (VAR_2) {
 case 129:
  FUNC_2(VAR_4, VAR_3->hwch, FUNC_9(VAR_3->buffer), FUNC_10(VAR_3->buffer), VAR_3->dir);
  FUNC_3(VAR_4, VAR_3->hwch, 1);
  FUNC_5(VAR_3);
  break;

 case 128:
 case 130:
 default:
  FUNC_6(VAR_3);
  break;
 }
 FUNC_7(VAR_4);
 return 0;
}
