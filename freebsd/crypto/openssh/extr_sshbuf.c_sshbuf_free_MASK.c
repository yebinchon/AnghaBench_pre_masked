
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {scalar_t__ refcount; int alloc; struct sshbuf* d; int readonly; struct sshbuf* parent; } ;


 int FUNC_0 (struct sshbuf*,int) ;
 int FUNC_1 (struct sshbuf*) ;
 scalar_t__ FUNC_2 (struct sshbuf*) ;

void
FUNC_3(struct sshbuf *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;






 if (FUNC_2(VAR_0) != 0)
  return;




 FUNC_3(VAR_0->parent);
 VAR_0->parent = ((void*)0);





 VAR_0->refcount--;
 if (VAR_0->refcount > 0)
  return;
 if (!VAR_0->readonly) {
  FUNC_0(VAR_0->d, VAR_0->alloc);
  FUNC_1(VAR_0->d);
 }
 FUNC_0(VAR_0, sizeof(*VAR_0));
 FUNC_1(VAR_0);
}
