
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufdomain {long bd_bufspacethresh; int bd_bufspace; } ;
struct buf {int b_flags; int b_bufsize; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 long FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 struct bufdomain* FUNC_3 (struct buf*) ;
 int FUNC_4 (struct bufdomain*) ;

__attribute__((used)) static void
FUNC_5(struct buf *VAR_1, int VAR_2)
{
 struct bufdomain *VAR_3;
 long VAR_4;
 int VAR_5;

 FUNC_0((VAR_1->b_flags & VAR_0) == 0,
     ("bufspace_adjust: malloc buf %p", VAR_1));
 VAR_3 = FUNC_3(VAR_1);
 VAR_5 = VAR_2 - VAR_1->b_bufsize;
 if (VAR_5 < 0) {
  FUNC_2(&VAR_3->bd_bufspace, -VAR_5);
 } else if (VAR_5 > 0) {
  VAR_4 = FUNC_1(&VAR_3->bd_bufspace, VAR_5);

  if (VAR_4 < VAR_3->bd_bufspacethresh &&
      VAR_4 + VAR_5 >= VAR_3->bd_bufspacethresh)
   FUNC_4(VAR_3);
 }
 VAR_1->b_bufsize = VAR_2;
}
