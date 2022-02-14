
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptop {struct cryptodesc* crp_desc; } ;
struct cryptodesc {int crd_alg; struct cryptodesc* crd_next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct cryptop *VAR_1, struct cryptodesc **VAR_2,
    struct cryptodesc **VAR_3)
{
 struct cryptodesc *VAR_4, *VAR_5, *VAR_6;

 VAR_4 = VAR_1->crp_desc;
 VAR_5 = VAR_4->crd_next;


 if (VAR_5 && VAR_5->crd_next)
  return (VAR_0);

 if (FUNC_0(VAR_4->crd_alg)) {
  VAR_6 = VAR_5;
  VAR_5 = VAR_4;
  VAR_4 = VAR_6;
 }

 if (VAR_5 && !FUNC_0(VAR_5->crd_alg))
  return (VAR_0);

 *VAR_2 = VAR_4;
 *VAR_3 = VAR_5;

 return (0);
}
