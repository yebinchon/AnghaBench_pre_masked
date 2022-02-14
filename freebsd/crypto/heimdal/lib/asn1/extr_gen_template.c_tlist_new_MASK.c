
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlist {int template; int name; } ;


 int FUNC_0 (int *) ;
 struct tlist* FUNC_1 (int,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static struct tlist *
FUNC_3(const char *VAR_0)
{
    struct tlist *VAR_1 = FUNC_1(1, sizeof(*VAR_1));
    VAR_1->name = FUNC_2(VAR_0);
    FUNC_0(&VAR_1->template);
    return VAR_1;
}
