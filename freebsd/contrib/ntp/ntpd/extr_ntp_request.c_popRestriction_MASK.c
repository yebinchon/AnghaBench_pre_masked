
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int restrict_u ;
struct TYPE_5__ {scalar_t__ fcnt; struct TYPE_5__* link; int ** pres; } ;
typedef TYPE_1__ RestrictStackT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(
 RestrictStackT **VAR_2,
 const restrict_u **VAR_3
 )
{
 RestrictStackT *VAR_4;

 if (((void*)0) == (VAR_4 = *VAR_2) || VAR_4->fcnt >= FUNC_1(VAR_4))
  return VAR_0;

 *VAR_3 = VAR_4->pres[VAR_4->fcnt++];
 if (VAR_4->fcnt >= FUNC_1(VAR_4)) {

  *VAR_2 = VAR_4->link;
  FUNC_0(VAR_4);
 }
 return VAR_1;
}
