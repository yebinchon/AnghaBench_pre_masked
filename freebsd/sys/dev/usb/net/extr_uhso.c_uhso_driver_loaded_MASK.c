
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int VAR_2 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(struct module *VAR_7, int VAR_8, void *VAR_9)
{
 switch (VAR_8) {
 case 129:

  VAR_3 = FUNC_1(VAR_6,
      VAR_5, ((void*)0), VAR_1);

  VAR_4 = FUNC_3(0, VAR_2, ((void*)0));
  break;
 case 128:
  FUNC_0(VAR_6, VAR_3);
  FUNC_2(VAR_4);
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
