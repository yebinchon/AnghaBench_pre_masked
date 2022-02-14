
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buf {int b_flags; int b_vflags; scalar_t__ b_rcred; scalar_t__ b_wcred; int b_dep; } ;
struct TYPE_2__ {int bd_freebuffers; } ;


 int FUNC_0 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct buf*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,struct buf*) ;

__attribute__((used)) static void
FUNC_10(struct buf *VAR_4)
{

 if (VAR_4->b_flags & VAR_1)
  FUNC_3(VAR_4);
 if (VAR_4->b_vflags & VAR_0)
  FUNC_8("losing buffer 1");
 if (VAR_4->b_rcred != VAR_2) {
  FUNC_7(VAR_4->b_rcred);
  VAR_4->b_rcred = VAR_2;
 }
 if (VAR_4->b_wcred != VAR_2) {
  FUNC_7(VAR_4->b_wcred);
  VAR_4->b_wcred = VAR_2;
 }
 if (!FUNC_1(&VAR_4->b_dep))
  FUNC_4(VAR_4);
 FUNC_6(VAR_4);
 FUNC_2(&FUNC_5(VAR_4)->bd_freebuffers, 1);
 FUNC_0(VAR_4);
 FUNC_9(VAR_3, VAR_4);
}
