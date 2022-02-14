
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_ctx {scalar_t__ fd; struct path_ctx* path; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct path_ctx*) ;

int
FUNC_2(void *VAR_0)
{
    struct path_ctx *VAR_1 = VAR_0;
    if (VAR_1->fd >= 0)
 FUNC_0(VAR_1->fd);
    FUNC_1(VAR_1->path);
    FUNC_1(VAR_1);
    return 0;
}
