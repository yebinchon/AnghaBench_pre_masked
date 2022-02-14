
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufqueue {int dummy; } ;
struct bufdomain {scalar_t__ bd_lim; struct bufqueue bd_dirtyq; struct bufqueue* bd_cleanq; struct bufqueue* bd_subq; } ;
struct buf {int b_flags; int b_qindex; } ;


 int FUNC_0 (struct bufqueue*) ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,char*) ;
 size_t FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct bufqueue*,struct buf*,int) ;
 int FUNC_6 (struct bufqueue*,struct buf*) ;
 struct bufdomain* FUNC_7 (struct buf*) ;
 struct bufqueue* FUNC_8 (struct buf*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_9(struct buf *VAR_5, int VAR_6)
{
 struct bufdomain *VAR_7;
 struct bufqueue *VAR_8;

 FUNC_3(VAR_6 == VAR_2 || VAR_6 == VAR_3,
     ("binsfree: Invalid qindex %d", VAR_6));
 FUNC_1(VAR_5);




 if (VAR_5->b_flags & VAR_0) {
  if (VAR_5->b_qindex == VAR_6) {
   VAR_5->b_flags |= VAR_1;
   VAR_5->b_flags &= ~VAR_0;
   FUNC_2(VAR_5);
   return;
  }
  VAR_8 = FUNC_8(VAR_5);
  FUNC_6(VAR_8, VAR_5);
  FUNC_0(VAR_8);
 }
 VAR_7 = FUNC_7(VAR_5);
 if (VAR_6 == VAR_2) {
  if (VAR_7->bd_lim != 0)
   VAR_8 = &VAR_7->bd_subq[FUNC_4(VAR_4)];
  else
   VAR_8 = VAR_7->bd_cleanq;
 } else
  VAR_8 = &VAR_7->bd_dirtyq;
 FUNC_5(VAR_8, VAR_5, 1);
}
