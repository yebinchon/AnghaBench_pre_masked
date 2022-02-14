
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {int flags; int trailspace; size_t maxrmargin; TYPE_1__* tcol; int mdocstyle; } ;
struct roff_meta {char* title; char* msec; char* date; char* os; scalar_t__ hasbody; } ;
struct TYPE_2__ {size_t offset; size_t rmargin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char*,char*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct termp*) ;
 int FUNC_5 (struct termp*,int ) ;
 size_t FUNC_6 (struct termp*,int) ;
 size_t FUNC_7 (struct termp*,char*) ;
 int FUNC_8 (struct termp*) ;
 int FUNC_9 (struct termp*,char*) ;

__attribute__((used)) static void
FUNC_10(struct termp *VAR_3, const struct roff_meta *VAR_4)
{
 char *VAR_5;
 size_t VAR_6, VAR_7;

 FUNC_0(VAR_4->title);
 FUNC_0(VAR_4->msec);
 FUNC_0(VAR_4->date);

 FUNC_5(VAR_3, VAR_0);

 if (VAR_4->hasbody)
  FUNC_8(VAR_3);







 if ( ! VAR_3->mdocstyle) {
  if (VAR_4->hasbody) {
   FUNC_8(VAR_3);
   FUNC_8(VAR_3);
  }
  FUNC_2(&VAR_5, "%s(%s)",
      VAR_4->title, VAR_4->msec);
 } else if (VAR_4->os != ((void*)0)) {
  VAR_5 = FUNC_3(VAR_4->os);
 } else {
  VAR_5 = FUNC_3("");
 }
 VAR_6 = FUNC_7(VAR_3, VAR_4->date);



 VAR_3->flags |= VAR_2 | VAR_1;
 VAR_3->trailspace = 1;
 VAR_3->tcol->offset = 0;
 VAR_3->tcol->rmargin = VAR_3->maxrmargin > VAR_6 ?
     (VAR_3->maxrmargin + FUNC_6(VAR_3, 1) - VAR_6) / 2 : 0;

 if (VAR_4->os)
  FUNC_9(VAR_3, VAR_4->os);
 FUNC_4(VAR_3);



 VAR_3->tcol->offset = VAR_3->tcol->rmargin;
 VAR_7 = FUNC_7(VAR_3, VAR_5);
 VAR_3->tcol->rmargin = VAR_3->maxrmargin > VAR_7 ?
     VAR_3->maxrmargin - VAR_7 : 0;
 VAR_3->flags |= VAR_2;

 FUNC_9(VAR_3, VAR_4->date);
 FUNC_4(VAR_3);



 VAR_3->flags &= ~VAR_1;
 VAR_3->flags |= VAR_2;
 VAR_3->trailspace = 0;
 VAR_3->tcol->offset = VAR_3->tcol->rmargin;
 VAR_3->tcol->rmargin = VAR_3->maxrmargin;

 FUNC_9(VAR_3, VAR_5);
 FUNC_4(VAR_3);
        VAR_3->tcol->offset = 0;
        VAR_3->flags = 0;

 FUNC_1(VAR_5);
}
