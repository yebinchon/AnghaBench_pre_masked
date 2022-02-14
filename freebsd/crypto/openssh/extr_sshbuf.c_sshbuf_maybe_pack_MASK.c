
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int off; int refcount; int size; scalar_t__ d; scalar_t__ readonly; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(struct sshbuf *VAR_1, int VAR_2)
{
 FUNC_0(("force %d", VAR_2));
 FUNC_1("pre-pack");
 if (VAR_1->off == 0 || VAR_1->readonly || VAR_1->refcount > 1)
  return;
 if (VAR_2 ||
     (VAR_1->off >= VAR_0 && VAR_1->off >= VAR_1->size / 2)) {
  FUNC_2(VAR_1->d, VAR_1->d + VAR_1->off, VAR_1->size - VAR_1->off);
  VAR_1->size -= VAR_1->off;
  VAR_1->off = 0;
  FUNC_1("packed");
 }
}
