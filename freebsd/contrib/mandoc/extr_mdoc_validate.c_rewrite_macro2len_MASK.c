
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff_man {int mdocmac; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (char**,char*,size_t) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(struct roff_man *VAR_1, char **VAR_2)
{
 size_t VAR_3;
 enum roff_tok VAR_4;

 if (*VAR_2 == ((void*)0))
  return;
 else if ( ! FUNC_4(*VAR_2, "Ds"))
  VAR_3 = 6;
 else if ((VAR_4 = FUNC_3(VAR_1->mdocmac, *VAR_2, 0)) == VAR_0)
  return;
 else
  VAR_3 = FUNC_1(VAR_4);

 FUNC_0(*VAR_2);
 FUNC_2(VAR_2, "%zun", VAR_3);
}
