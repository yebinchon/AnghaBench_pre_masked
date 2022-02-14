
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct prop_descriptor {int index; int mutex; TYPE_1__* pg; } ;
struct TYPE_2__ {int shift; int events; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(struct prop_descriptor *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;
 u64 VAR_5;
 unsigned long VAR_6;

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 FUNC_2(&VAR_1->mutex);

 VAR_3 = VAR_1->index ^ 1;
 VAR_4 = VAR_1->pg[VAR_1->index].shift - VAR_2;
 if (!VAR_4)
  goto out;

 VAR_1->pg[VAR_3].shift = VAR_2;

 FUNC_1(VAR_6);
 VAR_5 = FUNC_5(&VAR_1->pg[VAR_1->index].events);
 if (VAR_4 < 0)
  VAR_5 <<= -VAR_4;
 else
  VAR_5 >>= VAR_4;
 FUNC_4(&VAR_1->pg[VAR_3].events, VAR_5);




 FUNC_6();
 VAR_1->index = VAR_3;
 FUNC_0(VAR_6);

 FUNC_7();

out:
 FUNC_3(&VAR_1->mutex);
}
