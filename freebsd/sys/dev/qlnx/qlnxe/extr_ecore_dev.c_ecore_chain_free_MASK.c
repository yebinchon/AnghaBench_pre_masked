
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_dev {int dummy; } ;
struct ecore_chain {int mode; } ;





 int FUNC_0 (struct ecore_dev*,struct ecore_chain*) ;
 int FUNC_1 (struct ecore_dev*,struct ecore_chain*) ;
 int FUNC_2 (struct ecore_dev*,struct ecore_chain*) ;

void FUNC_3(struct ecore_dev *VAR_0,
        struct ecore_chain *VAR_1)
{
 switch (VAR_1->mode) {
 case 130:
  FUNC_0(VAR_0, VAR_1);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1);
  break;
 }
}
