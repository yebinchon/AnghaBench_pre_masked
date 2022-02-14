
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int s; scalar_t__ len; } ;
typedef int Char ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,scalar_t__) ;

void
FUNC_2(const struct Strbuf *VAR_1)
{
    Char *VAR_2;

    VAR_2 = FUNC_1(&VAR_0, VAR_1->len + 1);
    FUNC_0(VAR_2, VAR_1->s);
}
