
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct Buf* FUNC_1 (struct Buf*,char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char const*) ;

struct Buf *FUNC_7 (struct Buf *VAR_1, const char* VAR_2, int VAR_3)
{
    char *VAR_4, *VAR_5;
    const char *VAR_6;

    VAR_5 = FUNC_2 (FUNC_6 ("#line \"\"\n") +
                    2 * FUNC_6 (VAR_2) +
                    VAR_0 +
                    1);
    if (!VAR_5)
      FUNC_4 (FUNC_0("Allocation of buffer for line directive failed"));
    for (VAR_4 = VAR_5 + FUNC_5 (VAR_5, "#line %d \"", VAR_3), VAR_6 = VAR_2; *VAR_6; *VAR_4++ = *VAR_6++)
      if (*VAR_6 == '\\')
        *VAR_4++ = '\\';
    *VAR_4++ = '"';
    *VAR_4++ = '\n';
    *VAR_4 = '\0';
    VAR_1 = FUNC_1 (VAR_1, VAR_5);
    FUNC_3 (VAR_5);
    return VAR_1;
}
