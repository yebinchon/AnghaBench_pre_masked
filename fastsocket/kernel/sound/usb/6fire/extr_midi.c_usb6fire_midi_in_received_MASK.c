
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct midi_runtime {int in_lock; scalar_t__ in; } ;


 int FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(
  struct midi_runtime *VAR_0, u8 *VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->in_lock, VAR_3);
 if (VAR_0->in)
  FUNC_0(VAR_0->in, VAR_1, VAR_2);
 FUNC_2(&VAR_0->in_lock, VAR_3);
}
