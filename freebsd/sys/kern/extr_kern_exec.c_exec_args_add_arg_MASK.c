
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_args {scalar_t__ envc; int argc; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct image_args*,char const*,int,int *) ;

int
FUNC_2(struct image_args *VAR_0, const char *VAR_1,
    enum uio_seg VAR_2)
{

 FUNC_0(VAR_0->envc == 0, ("appending args after env"));

 return (FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_0->argc));
}
