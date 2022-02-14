
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {size_t alloc; size_t size; size_t max_size; int readonly; int refcount; int * d; void const* cd; int * parent; } ;


 size_t VAR_0 ;
 struct sshbuf* FUNC_0 (int,int) ;

struct sshbuf *
FUNC_1(const void *VAR_1, size_t VAR_2)
{
 struct sshbuf *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 > VAR_0 ||
     (VAR_3 = FUNC_0(sizeof(*VAR_3), 1)) == ((void*)0))
  return ((void*)0);
 VAR_3->alloc = VAR_3->size = VAR_3->max_size = VAR_2;
 VAR_3->readonly = 1;
 VAR_3->refcount = 1;
 VAR_3->parent = ((void*)0);
 VAR_3->cd = VAR_1;
 VAR_3->d = ((void*)0);
 return VAR_3;
}
