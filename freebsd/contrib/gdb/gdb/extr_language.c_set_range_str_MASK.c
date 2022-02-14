
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  char *VAR_4, *VAR_5 = "";

  if (VAR_2 == VAR_3)
    VAR_5 = "auto; currently ";

  switch (VAR_1)
    {
    case 129:
      VAR_4 = "on";
      break;
    case 130:
      VAR_4 = "off";
      break;
    case 128:
      VAR_4 = "warn";
      break;
    default:
      FUNC_1 ("Unrecognized range check setting.");
    }

  if (VAR_0)
    FUNC_2 (VAR_0);
  VAR_0 = FUNC_0 (VAR_5, VAR_4, ((void*)0));
}
