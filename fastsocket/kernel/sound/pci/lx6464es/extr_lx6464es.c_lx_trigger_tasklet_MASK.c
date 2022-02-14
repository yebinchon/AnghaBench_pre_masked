
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lx6464es {int lock; int playback_stream; int capture_stream; } ;


 int FUNC_0 (struct lx6464es*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct lx6464es *VAR_1 = (struct lx6464es *)VAR_0;
 unsigned long VAR_2;

 FUNC_1("->lx_trigger_tasklet\n");

 FUNC_2(&VAR_1->lock, VAR_2);
 FUNC_0(VAR_1, &VAR_1->capture_stream);
 FUNC_0(VAR_1, &VAR_1->playback_stream);
 FUNC_3(&VAR_1->lock, VAR_2);
}
