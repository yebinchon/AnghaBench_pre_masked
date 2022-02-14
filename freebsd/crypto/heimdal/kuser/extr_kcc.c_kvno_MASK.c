
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvno_options {int enctype_string; int cache_string; } ;
struct kgetcred_options {int enctype_string; int cache_string; } ;
typedef int k ;


 int FUNC_0 (struct kgetcred_options*,int,char**) ;
 int FUNC_1 (struct kgetcred_options*,int ,int) ;

int
FUNC_2(struct kvno_options *VAR_0, int VAR_1, char **VAR_2)
{
    struct kgetcred_options VAR_3;
    FUNC_1(&VAR_3, 0, sizeof(VAR_3));

    VAR_3.cache_string = VAR_0->cache_string;
    VAR_3.enctype_string = VAR_0->enctype_string;

    return FUNC_0(&VAR_3, VAR_1, VAR_2);
}
