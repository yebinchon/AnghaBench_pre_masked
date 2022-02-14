
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum nresult { ____Placeholder_nresult } nresult ;
typedef int SCR ;


 int VAR_0 ;




 int FUNC_0 () ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static void
FUNC_2(SCR *VAR_1, enum nresult VAR_2)
{
 switch (VAR_2) {
 case 131:
  break;
 case 130:
  FUNC_0();

 case 129:
  FUNC_1(VAR_1, VAR_0, "182|Resulting number too large");
  break;
 case 128:
  FUNC_1(VAR_1, VAR_0, "183|Resulting number too small");
  break;
 }
}
