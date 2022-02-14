
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usm_user {int dummy; } ;


 struct usm_user* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct usm_user*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_4(void)
{
 struct usm_user *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1)) != ((void*)0)) {
  FUNC_2(&VAR_1, VAR_0);
  FUNC_3(VAR_2);
 }

 FUNC_1(&VAR_1);
}
