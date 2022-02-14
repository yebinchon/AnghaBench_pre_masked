
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int dummy; } ;
struct tbl_opts {int dummy; } ;
struct tbl_dat {int pos; } ;
struct tbl_cell {int pos; } ;
struct roffcol {int width; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct termp*,int,int ) ;
 int FUNC_2 (struct termp*,struct tbl_dat const*,struct roffcol const*) ;
 int FUNC_3 (struct termp*,struct tbl_opts const*,struct tbl_dat const*,struct roffcol const*) ;

__attribute__((used)) static void
FUNC_4(struct termp *VAR_1, const struct tbl_opts *VAR_2,
    const struct tbl_cell *VAR_3, const struct tbl_dat *VAR_4,
    const struct roffcol *VAR_5)
{
 switch (VAR_3->pos) {
 case 138:
  FUNC_1(VAR_1, VAR_0, VAR_5->width);
  return;
 case 140:
  FUNC_1(VAR_1, VAR_0 * 2, VAR_5->width);
  return;
 default:
  break;
 }

 if (VAR_4 == ((void*)0))
  return;

 switch (VAR_4->pos) {
 case 128:
  return;
 case 131:
 case 129:
  FUNC_1(VAR_1, VAR_0, VAR_5->width);
  return;
 case 130:
 case 132:
  FUNC_1(VAR_1, VAR_0 * 2, VAR_5->width);
  return;
 default:
  break;
 }

 switch (VAR_3->pos) {
 case 136:
 case 141:
 case 137:
 case 134:
  FUNC_2(VAR_1, VAR_4, VAR_5);
  break;
 case 135:
  FUNC_3(VAR_1, VAR_2, VAR_4, VAR_5);
  break;
 case 139:
 case 133:
  break;
 default:
  FUNC_0();
 }
}
