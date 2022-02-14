
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,char*) ;

void
FUNC_5 (tree VAR_4, int VAR_5)
{
  if (VAR_5 == VAR_1)
    ;
  else if (VAR_5 == VAR_2)
    {
      FUNC_3 ("\t.private_extern ", VAR_3);
      FUNC_2 (VAR_3,
       (FUNC_1 (FUNC_0 (VAR_4))));
      FUNC_3 ("\n", VAR_3);
    }
  else
    FUNC_4 (VAR_0, "internal and protected visibility attributes "
      "not supported in this configuration; ignored");
}
