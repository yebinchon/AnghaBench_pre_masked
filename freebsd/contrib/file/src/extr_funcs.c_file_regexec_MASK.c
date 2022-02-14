
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int regmatch_t ;
struct TYPE_3__ {scalar_t__ rc; int rx; } ;
typedef TYPE_1__ file_regex_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *,char const*,size_t,int *,int) ;

int
FUNC_3(file_regex_t *VAR_0, const char *VAR_1, size_t VAR_2,
    regmatch_t* VAR_3, int VAR_4)
{
 FUNC_0(VAR_0->rc == 0);

 FUNC_1(VAR_3, 0, VAR_2 * sizeof(*VAR_3));
 return FUNC_2(&VAR_0->rx, VAR_1, VAR_2, VAR_3, VAR_4);
}
