
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct magic_set {int dummy; } ;
struct TYPE_3__ {int pat; int rx; } ;
typedef TYPE_1__ file_regex_t ;
typedef int errmsg ;


 int FUNC_0 (struct magic_set*,char*,int,int ,char*) ;
 int FUNC_1 (int,int *,char*,int) ;

void
FUNC_2(file_regex_t *VAR_0, int VAR_1, struct magic_set *VAR_2)
{
 char VAR_3[512];

 (void)FUNC_1(VAR_1, &VAR_0->rx, VAR_3, sizeof(VAR_3));
 FUNC_0(VAR_2, "regex error %d for `%s', (%s)", VAR_1, VAR_0->pat,
     VAR_3);
}
