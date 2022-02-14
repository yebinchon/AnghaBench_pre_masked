
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct buf {int b_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtx*) ;
 struct mtx* FUNC_1 (int ,struct buf*) ;
 int FUNC_2 (struct mtx*) ;
 int VAR_1 ;
 int FUNC_3 (struct buf*) ;

void
FUNC_4(struct buf *VAR_2)
{
 struct mtx *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_3);
 VAR_2->b_flags |= VAR_0;
 FUNC_3(VAR_2);
 FUNC_2(VAR_3);
}
