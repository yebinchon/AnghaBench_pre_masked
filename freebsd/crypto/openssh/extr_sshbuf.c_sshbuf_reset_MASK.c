
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int refcount; scalar_t__ alloc; int * d; int * cd; scalar_t__ size; scalar_t__ off; scalar_t__ readonly; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int * FUNC_1 (int *,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct sshbuf*) ;

void
FUNC_3(struct sshbuf *VAR_1)
{
 u_char *VAR_2;

 if (VAR_1->readonly || VAR_1->refcount > 1) {

  VAR_1->off = VAR_1->size;
  return;
 }
 (void) FUNC_2(VAR_1);
 VAR_1->off = VAR_1->size = 0;
 if (VAR_1->alloc != VAR_0) {
  if ((VAR_2 = FUNC_1(VAR_1->d, VAR_1->alloc, VAR_0,
      1)) != ((void*)0)) {
   VAR_1->cd = VAR_1->d = VAR_2;
   VAR_1->alloc = VAR_0;
  }
 }
 FUNC_0(VAR_1->d, VAR_0);
}
