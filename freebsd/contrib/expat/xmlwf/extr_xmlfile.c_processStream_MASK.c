
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XML_Parser ;
typedef int XML_Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int const*,int const*) ;
 int FUNC_5 (int,char*,int ) ;
 int FUNC_6 (int ,int const*) ;
 int VAR_4 ;
 int FUNC_7 (int const*,int) ;
 int FUNC_8 (int const*) ;

__attribute__((used)) static int
FUNC_9(const XML_Char *VAR_5, XML_Parser VAR_6)
{

  int VAR_7 = 0;

  if (VAR_5 != ((void*)0)) {
    VAR_7 = FUNC_7(VAR_5, VAR_0|VAR_1);
    if (VAR_7 < 0) {
      FUNC_8(VAR_5);
      return 0;
    }
  }
  for (;;) {
    int VAR_8;
    char *VAR_9 = (char *)FUNC_1(VAR_6, VAR_2);
    if (!VAR_9) {
      if (VAR_5 != ((void*)0))
        FUNC_3(VAR_7);
      FUNC_4(VAR_4, FUNC_0("%s: out of memory\n"),
               VAR_5 != ((void*)0) ? VAR_5 : FUNC_0("xmlwf"));
      return 0;
    }
    VAR_8 = FUNC_5(VAR_7, VAR_9, VAR_2);
    if (VAR_8 < 0) {
      FUNC_8(VAR_5 != ((void*)0) ? VAR_5 : FUNC_0("STDIN"));
      if (VAR_5 != ((void*)0))
        FUNC_3(VAR_7);
      return 0;
    }
    if (FUNC_2(VAR_6, VAR_8, VAR_8 == 0) == VAR_3) {
        FUNC_6(VAR_6, VAR_5 != ((void*)0) ? VAR_5 : FUNC_0("STDIN"));
      if (VAR_5 != ((void*)0))
        FUNC_3(VAR_7);
      return 0;
    }
    if (VAR_8 == 0) {
      if (VAR_5 != ((void*)0))
        FUNC_3(VAR_7);
      break;;
    }
  }
  return 1;
}
