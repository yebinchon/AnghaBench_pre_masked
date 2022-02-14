
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int hq; int dq; } ;
struct TYPE_15__ {TYPE_2__* gp; } ;
typedef TYPE_1__ SCR ;
typedef TYPE_2__ GS ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_1__*,int *,scalar_t__,char*,size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int *,char*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__**,char*) ;

int
FUNC_8(SCR *VAR_2, SCR **VAR_3, CHAR_T *VAR_4, int VAR_5)
{
 GS *VAR_6;
 SCR *VAR_7;
 char *VAR_8;
 size_t VAR_9;

 VAR_6 = VAR_2->gp;

 if (VAR_4)
     FUNC_0(VAR_2, VAR_4, FUNC_1(VAR_4) + 1, VAR_8, VAR_9);
 else
     VAR_8 = ((void*)0);
 if (VAR_5)

  VAR_7 = FUNC_5(VAR_2, VAR_8);
 else

  if (FUNC_7(VAR_2, &VAR_7, VAR_8))
   return (1);

 if ((*VAR_3 = VAR_7) == ((void*)0)) {
  FUNC_4(VAR_2, VAR_0, VAR_4,
      VAR_4 == ((void*)0) ?
      "223|There are no background screens" :
      "224|There's no background screen editing a file named %s");
  return (1);
 }

 if (VAR_5) {

  FUNC_3(VAR_6->hq, VAR_7, VAR_1);


  if (FUNC_6(VAR_2, VAR_7, 0)) {
   FUNC_2(VAR_6->hq, VAR_7, VAR_1);
   return (1);
  }
 } else {

  FUNC_3(VAR_6->dq, VAR_2, VAR_1);
  FUNC_2(VAR_6->hq, VAR_2, VAR_1);
 }
 return (0);
}
