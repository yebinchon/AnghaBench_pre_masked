
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_args {scalar_t__ stringspace; scalar_t__ envc; int * endp; int begin_envv; int * begin_argv; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int *,int) ;

int
FUNC_2(struct image_args *VAR_1, size_t VAR_2, ssize_t VAR_3)
{
 ssize_t VAR_4;

 FUNC_0(VAR_1->endp != ((void*)0), ("endp not initialized"));
 FUNC_0(VAR_1->begin_argv != ((void*)0), ("begin_argp not initialized"));

 VAR_4 = VAR_3 - VAR_2;
 if (VAR_1->stringspace < VAR_4)
  return (VAR_0);
 FUNC_1(VAR_1->begin_argv + VAR_3, VAR_1->begin_argv + VAR_2,
     VAR_1->endp - VAR_1->begin_argv + VAR_2);
 if (VAR_1->envc > 0)
  VAR_1->begin_envv += VAR_4;
 VAR_1->endp += VAR_4;
 VAR_1->stringspace -= VAR_4;
 return (0);
}
