
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int FUNC_0 (struct Strbuf*,int) ;
 int FUNC_1 (int*,char const*,int ) ;

__attribute__((used)) static void
FUNC_2(struct Strbuf *VAR_1, const char *VAR_2, Char VAR_3)
{
    while (*VAR_2 != 0) {
 Char VAR_4;

 VAR_2 += FUNC_1(&VAR_4, VAR_2, VAR_0);
 FUNC_0(VAR_1, VAR_4 | VAR_3);
    }
}
