
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int b_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buf*) ;

void
FUNC_1(struct buf *VAR_2)
{

 VAR_2->b_flags |= VAR_0 | VAR_1;
 (void) FUNC_0(VAR_2);
}
