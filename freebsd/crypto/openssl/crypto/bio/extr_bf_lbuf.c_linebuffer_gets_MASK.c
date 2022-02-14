
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * next_bio; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    if (VAR_0->next_bio == ((void*)0))
        return 0;
    return FUNC_0(VAR_0->next_bio, VAR_1, VAR_2);
}
