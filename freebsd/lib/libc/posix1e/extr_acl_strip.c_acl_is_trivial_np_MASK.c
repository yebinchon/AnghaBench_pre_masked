
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* acl_t ;
struct TYPE_10__ {int acl_cnt; } ;
struct TYPE_11__ {TYPE_1__ ats_acl; } ;




 int VAR_0 ;
 int FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (TYPE_2__* const,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__* const,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;

int
FUNC_4(const acl_t VAR_2, int *VAR_3)
{
 acl_t VAR_4;
 int VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (-1);
 }

 switch (FUNC_0(VAR_2)) {
 case 128:
  if (VAR_2->ats_acl.acl_cnt == 3)
   *VAR_3 = 1;
  else
   *VAR_3 = 0;

  return (0);

 case 129:




  if (VAR_2->ats_acl.acl_cnt > 6) {
   *VAR_3 = 0;
   return (0);
  }





  VAR_4 = FUNC_2(VAR_2, 0);
  if (VAR_4 == ((void*)0))
   return (-1);

  VAR_5 = FUNC_1(VAR_2, VAR_4);
  FUNC_3(VAR_4);

  if (VAR_5 == 0) {
   *VAR_3 = 1;
   return (0);
  }




  VAR_4 = FUNC_2(VAR_2, 1);
  if (VAR_4 == ((void*)0))
   return (-1);

  VAR_5 = FUNC_1(VAR_2, VAR_4);
  FUNC_3(VAR_4);

  if (VAR_5)
   *VAR_3 = 0;
  else
   *VAR_3 = 1;

  return (0);

 default:
  VAR_1 = VAR_0;
  return (-1);
 }
}
