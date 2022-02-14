
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {long b_runningbufspace; } ;


 int FUNC_0 (int,char*) ;
 long FUNC_1 (int *,long) ;
 long VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;

void
FUNC_3(struct buf *VAR_2)
{
 long VAR_3, VAR_4;

 VAR_4 = VAR_2->b_runningbufspace;
 if (VAR_4 == 0)
  return;
 VAR_3 = FUNC_1(&VAR_1, -VAR_4);
 FUNC_0(VAR_3 >= VAR_4, ("runningbufspace underflow %ld %ld",
     VAR_3, VAR_4));
 VAR_2->b_runningbufspace = 0;




 if (VAR_3 < VAR_0)
  return;
 if (VAR_3 - VAR_4 > VAR_0)
  return;
 FUNC_2();
}
