
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loadedfile {size_t len; char* buf; scalar_t__ used; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static char *
FUNC_0(void *VAR_1, size_t *VAR_2)
{
 struct loadedfile *VAR_3 = VAR_1;

 if (VAR_3->used) {
  return ((void*)0);
 }
 VAR_3->used = VAR_0;
 *VAR_2 = VAR_3->len;
 return VAR_3->buf;
}
