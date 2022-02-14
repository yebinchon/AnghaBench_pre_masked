
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_args {scalar_t__ envc; int endp; int begin_envv; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int FUNC_0 (struct image_args*,char const*,int,scalar_t__*) ;

int
FUNC_1(struct image_args *VAR_0, const char *VAR_1,
    enum uio_seg VAR_2)
{

 if (VAR_0->envc == 0)
  VAR_0->begin_envv = VAR_0->endp;

 return (FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_0->envc));
}
