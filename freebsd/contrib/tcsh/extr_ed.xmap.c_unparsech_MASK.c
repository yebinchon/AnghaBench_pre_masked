
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int dummy; } ;
typedef int Char ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct Strbuf*,int) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct Strbuf *VAR_2, Char VAR_3)
{
    if (VAR_3 == 0) {
 FUNC_4(VAR_2, '^');
 FUNC_4(VAR_2, '@');
    }
    else if (FUNC_1(VAR_3)) {
 FUNC_4(VAR_2, '^');
 if (VAR_3 == FUNC_0('\177'))
     FUNC_4(VAR_2, '?');
 else



     FUNC_4(VAR_2, VAR_1[VAR_0[VAR_3]|0100]);

    }
    else if (VAR_3 == '^') {
 FUNC_4(VAR_2, '\\');
 FUNC_4(VAR_2, '^');
    } else if (VAR_3 == '\\') {
 FUNC_4(VAR_2, '\\');
 FUNC_4(VAR_2, '\\');
    } else if (VAR_3 == ' ' || (FUNC_2(VAR_3) && !FUNC_3(VAR_3))) {
 FUNC_4(VAR_2, VAR_3);
    }
    else {
 FUNC_4(VAR_2, '\\');
 FUNC_4(VAR_2, ((VAR_3 >> 6) & 7) + '0');
 FUNC_4(VAR_2, ((VAR_3 >> 3) & 7) + '0');
 FUNC_4(VAR_2, (VAR_3 & 7) + '0');
    }
}
