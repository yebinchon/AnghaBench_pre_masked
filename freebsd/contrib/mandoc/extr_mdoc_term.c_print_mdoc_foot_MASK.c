
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {size_t maxrmargin; int trailspace; int flags; TYPE_1__* tcol; } ;
struct roff_meta {int os; int date; } ;
struct TYPE_2__ {size_t offset; size_t rmargin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct termp*) ;
 int FUNC_1 (struct termp*,int ) ;
 size_t FUNC_2 (struct termp*,int) ;
 size_t FUNC_3 (struct termp*,int ) ;
 int FUNC_4 (struct termp*) ;
 int FUNC_5 (struct termp*,int ) ;

__attribute__((used)) static void
FUNC_6(struct termp *VAR_3, const struct roff_meta *VAR_4)
{
 size_t VAR_5;

 FUNC_1(VAR_3, VAR_0);
 FUNC_4(VAR_3);

 VAR_3->tcol->offset = 0;
 VAR_5 = FUNC_3(VAR_3, VAR_4->date);
 VAR_3->tcol->rmargin = VAR_3->maxrmargin > VAR_5 ?
     (VAR_3->maxrmargin + FUNC_2(VAR_3, 1) - VAR_5) / 2 : 0;
 VAR_3->trailspace = 1;
 VAR_3->flags |= VAR_2 | VAR_1;

 FUNC_5(VAR_3, VAR_4->os);
 FUNC_0(VAR_3);

 VAR_3->tcol->offset = VAR_3->tcol->rmargin;
 VAR_5 = FUNC_3(VAR_3, VAR_4->os);
 VAR_3->tcol->rmargin = VAR_3->maxrmargin > VAR_5 ? VAR_3->maxrmargin - VAR_5 : 0;
 VAR_3->flags |= VAR_2;

 FUNC_5(VAR_3, VAR_4->date);
 FUNC_0(VAR_3);

 VAR_3->tcol->offset = VAR_3->tcol->rmargin;
 VAR_3->tcol->rmargin = VAR_3->maxrmargin;
 VAR_3->trailspace = 0;
 VAR_3->flags &= ~VAR_1;
 VAR_3->flags |= VAR_2;

 FUNC_5(VAR_3, VAR_4->os);
 FUNC_0(VAR_3);

 VAR_3->tcol->offset = 0;
 VAR_3->tcol->rmargin = VAR_3->maxrmargin;
 VAR_3->flags = 0;
}
