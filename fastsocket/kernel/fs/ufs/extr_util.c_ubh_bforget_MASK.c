
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_buffer_head {unsigned int count; scalar_t__* bh; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1 (struct ufs_buffer_head * VAR_0)
{
 unsigned VAR_1;
 if (!VAR_0)
  return;
 for ( VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++ ) if ( VAR_0->bh[VAR_1] )
  FUNC_0 (VAR_0->bh[VAR_1]);
}
