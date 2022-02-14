
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loadedfile {char* path; int used; scalar_t__ maplen; scalar_t__ len; int * buf; } ;


 int VAR_0 ;
 struct loadedfile* FUNC_0 (int) ;

__attribute__((used)) static struct loadedfile *
FUNC_1(const char *VAR_1)
{
 struct loadedfile *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 VAR_2->path = (VAR_1 == ((void*)0) ? "(stdin)" : VAR_1);
 VAR_2->buf = ((void*)0);
 VAR_2->len = 0;
 VAR_2->maplen = 0;
 VAR_2->used = VAR_0;
 return VAR_2;
}
