
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {int flags; int trailspace; int maxrmargin; int mdocstyle; TYPE_1__* tcol; } ;
struct roff_meta {char* vol; int msec; int title; } ;
struct TYPE_2__ {size_t offset; size_t rmargin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,char*,int ,int ) ;
 int FUNC_3 (struct termp*) ;
 size_t FUNC_4 (struct termp*,int) ;
 size_t FUNC_5 (struct termp*,char const*) ;
 int FUNC_6 (struct termp*) ;
 int FUNC_7 (struct termp*,char const*) ;

__attribute__((used)) static void
FUNC_8(struct termp *VAR_2, const struct roff_meta *VAR_3)
{
 const char *VAR_4;
 char *VAR_5;
 size_t VAR_6, VAR_7;

 FUNC_0(VAR_3->title);
 FUNC_0(VAR_3->msec);

 VAR_4 = ((void*)0) == VAR_3->vol ? "" : VAR_3->vol;
 VAR_6 = FUNC_5(VAR_2, VAR_4);



 FUNC_2(&VAR_5, "%s(%s)", VAR_3->title, VAR_3->msec);
 VAR_7 = FUNC_5(VAR_2, VAR_5);

 VAR_2->flags |= VAR_0 | VAR_1;
 VAR_2->trailspace = 1;
 VAR_2->tcol->offset = 0;
 VAR_2->tcol->rmargin = 2 * (VAR_7+1) + VAR_6 < VAR_2->maxrmargin ?
     (VAR_2->maxrmargin - VAR_6 + FUNC_4(VAR_2, 1)) / 2 :
     VAR_6 < VAR_2->maxrmargin ? VAR_2->maxrmargin - VAR_6 : 0;

 FUNC_7(VAR_2, VAR_5);
 FUNC_3(VAR_2);



 VAR_2->flags |= VAR_1;
 VAR_2->tcol->offset = VAR_2->tcol->rmargin;
 VAR_2->tcol->rmargin = VAR_2->tcol->offset + VAR_6 + VAR_7 <
     VAR_2->maxrmargin ? VAR_2->maxrmargin - VAR_7 : VAR_2->maxrmargin;

 FUNC_7(VAR_2, VAR_4);
 FUNC_3(VAR_2);



 VAR_2->flags &= ~VAR_0;
 VAR_2->trailspace = 0;
 if (VAR_2->tcol->rmargin + VAR_7 <= VAR_2->maxrmargin) {
  VAR_2->flags |= VAR_1;
  VAR_2->tcol->offset = VAR_2->tcol->rmargin;
  VAR_2->tcol->rmargin = VAR_2->maxrmargin;
  FUNC_7(VAR_2, VAR_5);
  FUNC_3(VAR_2);
 }

 VAR_2->flags &= ~VAR_1;
 VAR_2->tcol->offset = 0;
 VAR_2->tcol->rmargin = VAR_2->maxrmargin;







 FUNC_6(VAR_2);
 if ( ! VAR_2->mdocstyle) {
  FUNC_6(VAR_2);
  FUNC_6(VAR_2);
 }
 FUNC_1(VAR_5);
}
