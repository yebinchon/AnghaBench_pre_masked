
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ feature; int value; int name; } ;
typedef TYPE_1__ XML_Feature ;
typedef char XML_Char ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ,int ,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(XML_Char *VAR_2)
{
  XML_Char *VAR_3 = VAR_2;
  XML_Char VAR_4;
  const XML_Feature *VAR_5 = FUNC_2();
  while ((VAR_4 = *VAR_3) != 0) {
    if (VAR_4 == '/'



        )
      VAR_2 = VAR_3 + 1;
    ++VAR_3;
  }
  FUNC_3(VAR_1, FUNC_0("%s using %s\n"), VAR_2, FUNC_1());
  if (VAR_5 != ((void*)0) && VAR_5[0].feature != VAR_0) {
    int VAR_6 = 1;
    FUNC_3(VAR_1, FUNC_0("%s"), VAR_5[0].name);
    if (VAR_5[0].value)
      FUNC_3(VAR_1, FUNC_0("=%ld"), VAR_5[0].value);
    while (VAR_5[VAR_6].feature != VAR_0) {
      FUNC_3(VAR_1, FUNC_0(", %s"), VAR_5[VAR_6].name);
      if (VAR_5[VAR_6].value)
        FUNC_3(VAR_1, FUNC_0("=%ld"), VAR_5[VAR_6].value);
      ++VAR_6;
    }
    FUNC_3(VAR_1, FUNC_0("\n"));
  }
}
