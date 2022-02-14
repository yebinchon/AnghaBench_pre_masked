
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_handle_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int *) ;

int
FUNC_4(pam_handle_t *VAR_9,
 int VAR_10)
{
 int VAR_11;

 FUNC_0();
 if (VAR_10 & ~(VAR_5|VAR_2))
  FUNC_1(VAR_1);
 VAR_11 = FUNC_2(VAR_9, VAR_6,
     VAR_10 | VAR_4);
 if (VAR_11 == VAR_7)
  VAR_11 = FUNC_2(VAR_9, VAR_6,
      VAR_10 | VAR_8);
 FUNC_3(VAR_9, VAR_3, ((void*)0));
 FUNC_3(VAR_9, VAR_0, ((void*)0));
 FUNC_1(VAR_11);
}
