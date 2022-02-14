
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union savefpu {int sv_xmm; } ;
struct thread {int dummy; } ;
struct fpacc87 {int dummy; } ;
struct env87 {int dummy; } ;


 int FUNC_0 (union savefpu*,void*,int) ;
 scalar_t__ VAR_0 ;
 struct thread* VAR_1 ;
 union savefpu* FUNC_1 (struct thread*) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (struct thread*) ;

void
FUNC_4(void *VAR_2)
{
 struct thread *VAR_3;
 union savefpu *VAR_4;

 VAR_3 = VAR_1;
 FUNC_3(VAR_3);
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_0)
  FUNC_2(&VAR_4->sv_xmm, VAR_2);
 else
  FUNC_0(VAR_4, VAR_2, sizeof(struct env87) +
      sizeof(struct fpacc87[8]));
}
