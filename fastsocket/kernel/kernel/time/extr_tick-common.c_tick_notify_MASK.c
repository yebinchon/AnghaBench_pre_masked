
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (unsigned long,void*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 () ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct notifier_block *VAR_1, unsigned long VAR_2,
          void *VAR_3)
{
 switch (VAR_2) {

 case 137:
  return FUNC_2(VAR_3);

 case 132:
 case 133:
 case 134:
  FUNC_0(VAR_2, VAR_3);
  break;

 case 136:
 case 135:
  FUNC_1(VAR_2);
  break;

 case 130:
  FUNC_3(VAR_3);
  break;

 case 131:
  FUNC_7(VAR_3);
  FUNC_6(VAR_3);
  FUNC_5(VAR_3);
  break;

 case 128:
  FUNC_8();
  FUNC_9();
  break;

 case 129:
  FUNC_4();
  break;

 default:
  break;
 }

 return VAR_0;
}
