
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int refcount; struct sshbuf* parent; } ;


 int FUNC_0 (struct sshbuf*) ;

int
FUNC_1(struct sshbuf *VAR_0, struct sshbuf *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0)) != 0 ||
     (VAR_2 = FUNC_0(VAR_1)) != 0)
  return VAR_2;
 VAR_0->parent = VAR_1;
 VAR_0->parent->refcount++;
 return 0;
}
