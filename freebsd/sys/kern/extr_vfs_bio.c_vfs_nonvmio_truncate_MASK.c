
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int b_flags; int b_kvabase; int b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buf*,int ) ;
 int FUNC_1 (struct buf*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct buf*,int) ;

__attribute__((used)) static void
FUNC_4(struct buf *VAR_2, int VAR_3)
{

 if (VAR_2->b_flags & VAR_0) {



  if (VAR_3 == 0) {
   FUNC_0(VAR_2, 0);
   FUNC_2(VAR_2->b_data, VAR_1);
   VAR_2->b_data = VAR_2->b_kvabase;
   VAR_2->b_flags &= ~VAR_0;
  }
  return;
 }
 FUNC_3(VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_3);
}
