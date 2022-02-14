
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
struct TYPE_10__ {scalar_t__ c_nlines; } ;
struct TYPE_9__ {int tiq; TYPE_3__* ep; } ;
struct TYPE_8__ {scalar_t__ lno; } ;
typedef TYPE_1__ TEXT ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ EXF ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int ,int *,int *) ;
 int FUNC_4 (TYPE_2__*,int *,int ) ;

int
FUNC_5(
 SCR *VAR_4,
 recno_t VAR_5)
{
 EXF *VAR_6;


 if ((VAR_6 = VAR_4->ep) == ((void*)0)) {
  FUNC_4(VAR_4, ((void*)0), VAR_0);
  return (1);
 }

 if (VAR_5 == VAR_1)
  return (0);





 if (VAR_6->c_nlines != VAR_1)
  return (VAR_5 <= (FUNC_0(VAR_4, VAR_2) ?
      VAR_6->c_nlines + (((TEXT *)FUNC_2(VAR_4->tiq, VAR_3))->lno -
      ((TEXT *)FUNC_1(VAR_4->tiq))->lno) : VAR_6->c_nlines));


 return (!FUNC_3(VAR_4, VAR_5, 0, ((void*)0), ((void*)0)));
}
