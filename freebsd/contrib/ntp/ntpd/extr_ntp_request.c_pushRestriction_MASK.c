
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int restrict_u ;
struct TYPE_5__ {size_t fcnt; int const** pres; struct TYPE_5__* link; } ;
typedef TYPE_1__ RestrictStackT ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(
 RestrictStackT **VAR_1,
 const restrict_u *VAR_2
 )
{
 RestrictStackT *VAR_3;

 if (((void*)0) == (VAR_3 = *VAR_1) || 0 == VAR_3->fcnt) {

  VAR_3 = FUNC_0(sizeof(*VAR_3));
  VAR_3->link = *VAR_1;
  VAR_3->fcnt = FUNC_1(VAR_3);
  *VAR_1 = VAR_3;
 }
 VAR_3->pres[--VAR_3->fcnt] = VAR_2;
 return VAR_0;
}
