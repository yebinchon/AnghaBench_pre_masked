
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot {int u; int v; int perpage; int pages; scalar_t__ ptr; } ;
struct devstat {int dummy; } ;


 int VAR_0 ;

struct devstat *
FUNC_0(void *VAR_1)
{
 struct devstat *VAR_2;
 struct snapshot *VAR_3;

 VAR_3 = VAR_1;
 VAR_2 = (struct devstat *)
     (VAR_3->ptr + VAR_3->u * VAR_0 + VAR_3->v * sizeof *VAR_2);
 if (++VAR_3->v >= VAR_3->perpage) {
  if (++VAR_3->u >= VAR_3->pages)
   return (((void*)0));
  else
   VAR_3->v = 0;
 }
 return (VAR_2);
}
