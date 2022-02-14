
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {scalar_t__* chrootdir; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (char*,scalar_t__*,int ) ;

__attribute__((used)) static char *
FUNC_2(struct config_file *VAR_0, char *VAR_1)
{
    char *VAR_2;
    VAR_2 = VAR_1;
    if(VAR_0->chrootdir && VAR_0->chrootdir[0] && FUNC_1(VAR_2,
        VAR_0->chrootdir, FUNC_0(VAR_0->chrootdir)) == 0)
        VAR_2 += FUNC_0(VAR_0->chrootdir);
    return VAR_2;
}
