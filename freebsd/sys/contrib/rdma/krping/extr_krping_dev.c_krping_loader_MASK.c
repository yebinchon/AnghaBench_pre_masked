
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ,int ,int,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct module *VAR_5, int VAR_6, void *VAR_7)
{
 int VAR_8 = 0;

 switch (VAR_6) {
 case 129:
  VAR_4 = FUNC_1(&VAR_3, 0, VAR_2, VAR_1,
     0600, "krping");
  FUNC_2("Krping device loaded.\n");
  break;
 case 128:
  FUNC_0(VAR_4);
  FUNC_2("Krping device unloaded.\n");
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }

 return (VAR_8);
}
