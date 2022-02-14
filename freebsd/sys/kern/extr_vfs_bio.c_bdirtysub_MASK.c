
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufdomain {int bd_lodirtybuffers; int bd_hidirtybuffers; int bd_numdirtybuffers; } ;
struct buf {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct bufdomain*) ;
 int FUNC_2 () ;
 struct bufdomain* FUNC_3 (struct buf*) ;

__attribute__((used)) static void
FUNC_4(struct buf *VAR_0)
{
 struct bufdomain *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 VAR_2 = FUNC_0(&VAR_1->bd_numdirtybuffers, -1);
 if (VAR_2 == (VAR_1->bd_lodirtybuffers + VAR_1->bd_hidirtybuffers) / 2)
  FUNC_2();
 if (VAR_2 == VAR_1->bd_lodirtybuffers || VAR_2 == VAR_1->bd_hidirtybuffers)
  FUNC_1(VAR_1);
}
