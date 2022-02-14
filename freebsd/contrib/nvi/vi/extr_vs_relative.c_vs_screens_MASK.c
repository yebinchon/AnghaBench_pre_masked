
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_8__ {scalar_t__ ss_lno; size_t ss_screens; } ;
struct TYPE_7__ {size_t cols; } ;
typedef TYPE_1__ SCR ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*,int *,scalar_t__,size_t*,int *) ;

size_t
FUNC_3(SCR *VAR_1, recno_t VAR_2, size_t *VAR_3)
{
 size_t VAR_4, VAR_5;


 if (FUNC_0(VAR_1, VAR_0))
  return (1);







 if (VAR_3 == ((void*)0)) {
  if (FUNC_1(VAR_1)->ss_lno == VAR_2)
   return (FUNC_1(VAR_1)->ss_screens);
 } else if (*VAR_3 == 0)
  return (1);


 VAR_4 = FUNC_2(VAR_1, ((void*)0), VAR_2, VAR_3, ((void*)0));

 VAR_5 = (VAR_4 / VAR_1->cols + (VAR_4 % VAR_1->cols ? 1 : 0));
 if (VAR_5 == 0)
  VAR_5 = 1;


 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_1)->ss_lno = VAR_2;
  FUNC_1(VAR_1)->ss_screens = VAR_5;
 }
 return (VAR_5);
}
