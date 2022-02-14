
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldat {struct ldat* text; } ;


 int VAR_0 ;
 int FUNC_0 (struct ldat*) ;

__attribute__((used)) static int
FUNC_1(struct ldat *VAR_1, int VAR_2)
{
    while (--VAR_2 >= 0)
 FUNC_0(VAR_1[VAR_2].text);
    FUNC_0(VAR_1);
    return VAR_0;
}
