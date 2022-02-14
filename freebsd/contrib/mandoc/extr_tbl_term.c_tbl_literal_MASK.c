
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cols; } ;
struct termp {TYPE_2__ tbl; } ;
struct tbl_dat {int hspans; TYPE_3__* layout; int string; } ;
struct roffcol {size_t width; } ;
struct TYPE_6__ {int col; int pos; } ;
struct TYPE_4__ {scalar_t__ width; } ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (struct termp*,int ,size_t) ;
 int FUNC_2 (struct termp*,struct tbl_dat const*) ;
 size_t FUNC_3 (struct termp*,int) ;
 size_t FUNC_4 (struct termp*,int ) ;

__attribute__((used)) static void
FUNC_5(struct termp *VAR_1, const struct tbl_dat *VAR_2,
  const struct roffcol *VAR_3)
{
 size_t VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(VAR_2->string);
 VAR_4 = FUNC_4(VAR_1, VAR_2->string);
 VAR_7 = VAR_3->width;
 VAR_8 = VAR_2->layout->col;
 VAR_9 = VAR_2->hspans;
 while (VAR_9--)
  VAR_7 += VAR_1->tbl.cols[++VAR_8].width + 3;

 VAR_6 = VAR_7 > VAR_4 ? VAR_7 - VAR_4 : 0;
 VAR_5 = 0;

 switch (VAR_2->layout->pos) {
 case 129:
  VAR_5 = FUNC_3(VAR_1, 1);
  VAR_6 = VAR_6 > VAR_5 ? VAR_6 - VAR_5 : 0;
  break;
 case 130:
  if (2 > VAR_6)
   break;
  VAR_5 = VAR_6 / 2;
  VAR_6 -= VAR_5;
  break;
 case 128:
  VAR_5 = VAR_6;
  VAR_6 = 0;
  break;
 default:
  break;
 }

 FUNC_1(VAR_1, VAR_0, VAR_5);
 FUNC_2(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_0, VAR_6);
}
