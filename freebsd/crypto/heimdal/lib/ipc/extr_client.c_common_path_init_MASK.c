
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_ctx {int fd; int path; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*,char const*) ;
 struct path_ctx* FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1,
   const char *VAR_2,
   void **VAR_3)
{
    struct path_ctx *VAR_4;

    VAR_4 = FUNC_1(sizeof(*VAR_4));
    if (VAR_4 == ((void*)0))
 return VAR_0;
    VAR_4->fd = -1;

    FUNC_0(&VAR_4->path, "/var/run/.heim_%s-%s", VAR_1, VAR_2);

    *VAR_3 = VAR_4;

    return 0;
}
