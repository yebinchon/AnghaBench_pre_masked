
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct job {scalar_t__ nprocs; scalar_t__ state; int remembered; scalar_t__ changed; int used; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct job* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct job*) ;
 scalar_t__ VAR_4 ;
 struct job* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct job*,int) ;

void
FUNC_4(int VAR_7, int VAR_8)
{
 int VAR_9;
 struct job *VAR_10;

 FUNC_0(("showjobs(%d) called\n", VAR_7));
 FUNC_1();
 for (VAR_9 = 1, VAR_10 = VAR_5 ; VAR_9 <= VAR_6 ; VAR_9++, VAR_10++) {
  if (! VAR_10->used)
   continue;
  if (VAR_10->nprocs == 0) {
   FUNC_2(VAR_10);
   continue;
  }
  if (VAR_7 && ! VAR_10->changed)
   continue;
  FUNC_3(VAR_10, VAR_8);
  if (VAR_8 == VAR_1 || VAR_8 == VAR_2) {
   VAR_10->changed = 0;



   if (VAR_10->state == VAR_0 && !VAR_10->remembered &&
     (VAR_4 || VAR_10 != VAR_3)) {
    FUNC_2(VAR_10);
   }
  }
 }
}
