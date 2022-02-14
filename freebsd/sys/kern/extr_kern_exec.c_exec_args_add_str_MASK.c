
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_args {size_t stringspace; int * endp; int * begin_argv; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (char const*,int *,size_t,size_t*) ;
 int FUNC_2 (char const*,int *,size_t,size_t*) ;

__attribute__((used)) static int
FUNC_3(struct image_args *VAR_3, const char *VAR_4,
    enum uio_seg VAR_5, int *VAR_6)
{
 int VAR_7;
 size_t VAR_8;

 FUNC_0(VAR_3->endp != ((void*)0), ("endp not initialized"));
 FUNC_0(VAR_3->begin_argv != ((void*)0), ("begin_argp not initialized"));

 VAR_7 = (VAR_5 == VAR_2) ?
     FUNC_2(VAR_4, VAR_3->endp, VAR_3->stringspace, &VAR_8) :
     FUNC_1(VAR_4, VAR_3->endp, VAR_3->stringspace, &VAR_8);
 if (VAR_7 != 0)
  return (VAR_7 == VAR_1 ? VAR_0 : VAR_7);
 VAR_3->stringspace -= VAR_8;
 VAR_3->endp += VAR_8;
 (*VAR_6)++;

 return (0);
}
