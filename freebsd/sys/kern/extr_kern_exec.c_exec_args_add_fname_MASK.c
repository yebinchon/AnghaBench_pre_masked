
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_args {size_t stringspace; int * endp; int * begin_argv; int * buf; int * fname; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,int *,int ,size_t*) ;
 int FUNC_2 (char const*,int *,int ,size_t*) ;
 size_t VAR_5 ;

int
FUNC_3(struct image_args *VAR_6, const char *VAR_7,
    enum uio_seg VAR_8)
{
 int VAR_9;
 size_t VAR_10;

 FUNC_0(VAR_6->fname == ((void*)0), ("fname already appended"));
 FUNC_0(VAR_6->endp == ((void*)0), ("already appending to args"));

 if (VAR_7 != ((void*)0)) {
  VAR_6->fname = VAR_6->buf;
  VAR_9 = VAR_8 == VAR_4 ?
      FUNC_2(VAR_7, VAR_6->fname, VAR_3, &VAR_10) :
      FUNC_1(VAR_7, VAR_6->fname, VAR_3, &VAR_10);
  if (VAR_9 != 0)
   return (VAR_9 == VAR_2 ? VAR_1 : VAR_9);
 } else
  VAR_10 = 0;


 VAR_6->endp = VAR_6->buf + VAR_10;

 VAR_6->begin_argv = VAR_6->endp;
 FUNC_0(VAR_5 - VAR_10 >= VAR_0,
     ("too little space remaining for arguments %zu < %zu",
     VAR_5 - VAR_10, (size_t)VAR_0));
 VAR_6->stringspace = VAR_0;

 return (0);
}
