
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_7__ {size_t len; int textq; } ;
struct TYPE_6__ {size_t len; int lb; } ;
typedef TYPE_1__ TEXT ;
typedef int SCR ;
typedef int CHAR_T ;
typedef TYPE_2__ CB ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int **,size_t*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (int *,int *,int ,size_t) ;

int
FUNC_4(
 SCR *VAR_3,
 recno_t VAR_4,
 size_t VAR_5,
 size_t VAR_6,
 CB *VAR_7)
{
 TEXT *VAR_8;
 size_t VAR_9;
 CHAR_T *VAR_10;


 if (FUNC_2(VAR_3, VAR_4, VAR_0, &VAR_10, &VAR_9))
  return (1);


 if ((VAR_8 = FUNC_3(VAR_3, ((void*)0), 0, VAR_9)) == ((void*)0))
  return (1);





 if (VAR_9 != 0) {
  if (VAR_6 == VAR_1)
   VAR_6 = VAR_9 - VAR_5;
  FUNC_0(VAR_8->lb, VAR_10 + VAR_5, VAR_6);
  VAR_8->len = VAR_6;
 }


 FUNC_1(VAR_7->textq, VAR_8, VAR_2);
 VAR_7->len += VAR_8->len;

 return (0);
}
