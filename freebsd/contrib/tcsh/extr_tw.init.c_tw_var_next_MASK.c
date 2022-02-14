
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct Strbuf*,struct Strbuf*,int*) ;
 int FUNC_1 (struct Strbuf*,struct Strbuf*,int*) ;
 scalar_t__ VAR_1 ;

int
FUNC_2(struct Strbuf *VAR_2, struct Strbuf *VAR_3, int *VAR_4)
{
    int VAR_5 = 0;

    if (VAR_1)
 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
    if (VAR_5 == 0 && VAR_0)
 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
    return VAR_5;
}
