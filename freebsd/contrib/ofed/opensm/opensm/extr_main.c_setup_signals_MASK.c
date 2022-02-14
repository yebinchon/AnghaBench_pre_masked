
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *,int *) ;
 int VAR_9 ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3()
{
 struct sigaction VAR_10;

 FUNC_2(&VAR_10.sa_mask);
 VAR_10.sa_handler = VAR_6;
 VAR_10.sa_flags = 0;
 FUNC_1(VAR_2, &VAR_10, ((void*)0));
 FUNC_1(VAR_3, &VAR_10, ((void*)0));
 VAR_10.sa_handler = VAR_7;
 FUNC_1(VAR_1, &VAR_10, ((void*)0));
 FUNC_1(VAR_0, &VAR_10, ((void*)0));

 VAR_10.sa_handler = VAR_8;
 FUNC_1(VAR_4, &VAR_10, ((void*)0));

 FUNC_0(VAR_5, &VAR_9, ((void*)0));
}
