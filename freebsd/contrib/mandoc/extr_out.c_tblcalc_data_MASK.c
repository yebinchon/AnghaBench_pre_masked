
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tbl_opts {int dummy; } ;
struct tbl_dat {TYPE_1__* layout; } ;
struct rofftbl {size_t (* len ) (int,int ) ;int arg; } ;
struct roffcol {size_t width; } ;
struct TYPE_2__ {int pos; } ;
 int FUNC_0 () ;
 size_t FUNC_1 (int,int ) ;
 size_t FUNC_2 (struct rofftbl*,struct roffcol*,struct tbl_dat const*,size_t) ;
 size_t FUNC_3 (struct rofftbl*,struct roffcol*,struct tbl_opts const*,struct tbl_dat const*) ;

__attribute__((used)) static size_t
FUNC_4(struct rofftbl *VAR_0, struct roffcol *VAR_1,
    const struct tbl_opts *VAR_2, const struct tbl_dat *VAR_3, size_t VAR_4)
{
 size_t VAR_5;



 switch (VAR_3->layout->pos) {
 case 132:
 case 134:
  VAR_5 = (*VAR_0->len)(1, VAR_0->arg);
  if (VAR_1 != ((void*)0) && VAR_1->width < VAR_5)
   VAR_1->width = VAR_5;
  return VAR_5;
 case 130:
 case 135:
 case 131:
 case 128:
  return FUNC_2(VAR_0, VAR_1, VAR_3, VAR_4);
 case 129:
  return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 case 133:
  return 0;
 default:
  FUNC_0();
 }
}
