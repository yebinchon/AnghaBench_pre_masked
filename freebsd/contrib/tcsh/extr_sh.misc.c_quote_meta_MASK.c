
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {char const* s; scalar_t__ len; } ;
typedef char Char ;


 int FUNC_0 (struct Strbuf*,char) ;
 int FUNC_1 (struct Strbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (char const,int) ;

const Char *
FUNC_3(struct Strbuf *VAR_6, const Char *VAR_7)
{
    VAR_6->len = 0;
    while (*VAR_7 != '\0') {
 if (FUNC_2(*VAR_7, VAR_3 | VAR_0 | VAR_5 | VAR_4 | VAR_1 | VAR_2))
     FUNC_0(VAR_6, '\\');
 FUNC_0(VAR_6, *VAR_7++);
    }
    FUNC_1(VAR_6);
    return VAR_6->s;
}
