
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eloop_timeout {int user_data; int eloop_data; int list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct eloop_timeout*) ;
 int VAR_1 ;
 int FUNC_2 (struct eloop_timeout*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct eloop_timeout *VAR_2)
{
 FUNC_0(&VAR_2->list);
 FUNC_2(VAR_2, VAR_0, VAR_2->eloop_data);
 FUNC_2(VAR_2, VAR_1, VAR_2->user_data);
 FUNC_1(VAR_2);
}
