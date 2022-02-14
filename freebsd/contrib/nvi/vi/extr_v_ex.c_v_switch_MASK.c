
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int VICMD ;
struct TYPE_9__ {char* alt_name; } ;
typedef TYPE_1__ SCR ;
typedef int EXCMD ;
typedef int CHAR_T ;


 int FUNC_0 (TYPE_1__*,char*,scalar_t__,int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *,int *,size_t) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int *,int *) ;

int
FUNC_7(SCR *VAR_4, VICMD *VAR_5)
{
 EXCMD VAR_6;
 char *VAR_7;
 CHAR_T *VAR_8;
 size_t VAR_9;





 if ((VAR_7 = VAR_4->alt_name) == ((void*)0)) {
  FUNC_4(VAR_4, VAR_2, "180|No previous file to edit");
  return (1);
 }


 if (FUNC_3(VAR_4, 0, VAR_1))
  return (1);

 FUNC_2(VAR_4, &VAR_6, VAR_0, 0, VAR_3, VAR_3, 0);
 FUNC_0(VAR_4, VAR_7, FUNC_5(VAR_7) + 1, VAR_8, VAR_9);
 FUNC_1(VAR_4, &VAR_6, VAR_8, VAR_9);
 return (FUNC_6(VAR_4, VAR_5, &VAR_6));
}
