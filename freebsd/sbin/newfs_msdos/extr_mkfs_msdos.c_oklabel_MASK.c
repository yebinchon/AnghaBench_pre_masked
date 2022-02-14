
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
    int VAR_1, VAR_2;

    for (VAR_2 = 0; VAR_2 <= 11; VAR_2++) {
 VAR_1 = (u_char)*VAR_0++;
 if (VAR_1 < ' ' + !VAR_2 || FUNC_0("\"*+,./:;<=>?[\\]|", VAR_1))
     break;
    }
    return VAR_2 && !VAR_1;
}
