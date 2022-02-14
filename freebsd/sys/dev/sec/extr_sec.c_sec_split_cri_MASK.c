
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptoini {int cri_alg; struct cryptoini* cri_next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct cryptoini *VAR_1, struct cryptoini **VAR_2,
    struct cryptoini **VAR_3)
{
 struct cryptoini *VAR_4, *VAR_5;

 VAR_4 = VAR_1;
 VAR_5 = VAR_1->cri_next;


 if (VAR_5 && VAR_5->cri_next)
  return (VAR_0);

 if (FUNC_0(VAR_4->cri_alg)) {
  VAR_1 = VAR_5;
  VAR_5 = VAR_4;
  VAR_4 = VAR_1;
 }

 if (VAR_5 && !FUNC_0(VAR_5->cri_alg))
  return (VAR_0);

 *VAR_2 = VAR_4;
 *VAR_3 = VAR_5;

 return (0);
}
