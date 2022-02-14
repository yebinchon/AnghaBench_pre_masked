
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mstring {char* base; } ;


 int FUNC_0 (struct mstring*) ;
 int FUNC_1 (struct mstring*,int ) ;

char *
FUNC_2(struct mstring *VAR_0)
{
    char *VAR_1 = 0;
    if (VAR_0)
    {
 FUNC_1(VAR_0, 0);
 VAR_1 = VAR_0->base;
 FUNC_0(VAR_0);
    }
    return VAR_1;
}
