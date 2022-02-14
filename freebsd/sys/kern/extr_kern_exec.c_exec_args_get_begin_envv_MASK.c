
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_args {char* endp; scalar_t__ envc; char* begin_envv; } ;


 int FUNC_0 (int ,char*) ;

char *
FUNC_1(struct image_args *VAR_0)
{

 FUNC_0(VAR_0->endp != ((void*)0), ("endp not initialized"));

 if (VAR_0->envc > 0)
  return (VAR_0->begin_envv);
 return (VAR_0->endp);
}
