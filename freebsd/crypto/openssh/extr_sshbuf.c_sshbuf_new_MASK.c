
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int alloc; int refcount; int * d; int * cd; int * parent; scalar_t__ readonly; int max_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct sshbuf*) ;

struct sshbuf *
FUNC_2(void)
{
 struct sshbuf *VAR_2;

 if ((VAR_2 = FUNC_0(sizeof(*VAR_2), 1)) == ((void*)0))
  return ((void*)0);
 VAR_2->alloc = VAR_0;
 VAR_2->max_size = VAR_1;
 VAR_2->readonly = 0;
 VAR_2->refcount = 1;
 VAR_2->parent = ((void*)0);
 if ((VAR_2->cd = VAR_2->d = FUNC_0(1, VAR_2->alloc)) == ((void*)0)) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 return VAR_2;
}
