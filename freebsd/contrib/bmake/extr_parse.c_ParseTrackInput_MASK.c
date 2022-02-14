
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int ) ;
 char* FUNC_1 (int ,int ,char**) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char const*,size_t) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_2)
{
    char *VAR_3;
    char *VAR_4;
    char *VAR_5 = ((void*)0);
    size_t VAR_6 = FUNC_5(VAR_2);

    VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_5);
    if (VAR_3) {
 VAR_4 = VAR_3 + FUNC_5(VAR_3) - VAR_6;

 for (; VAR_3 != ((void*)0); VAR_3 = FUNC_4(VAR_3, ' ')) {
     if (*VAR_3 == ' ')
  VAR_3++;
     if (VAR_3 >= VAR_4)
  break;
     if (FUNC_3(VAR_3, VAR_2, VAR_6) == 0
      && (VAR_3[VAR_6] == 0 || VAR_3[VAR_6] == ' '))
  goto cleanup;
 }
    }
    FUNC_0 (VAR_0, VAR_2, VAR_1);
 cleanup:
    if (VAR_5) {
 FUNC_2(VAR_5);
    }
}
