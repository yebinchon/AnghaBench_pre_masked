
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ess_chinfo {int run; int buffer; } ;
typedef int kobj_t ;



 int FUNC_0 (int) ;


 int FUNC_1 (struct ess_chinfo*) ;
 int FUNC_2 (struct ess_chinfo*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct ess_chinfo *VAR_3 = VAR_1;

 if (!FUNC_0(VAR_2))
  return 0;

 switch (VAR_2) {
 case 129:
  VAR_3->run = 1;
  FUNC_3(VAR_3->buffer, VAR_2);
  FUNC_1(VAR_3);
  break;

 case 128:
 case 130:
 default:
  FUNC_2(VAR_3);
  break;
 }
 return 0;
}
