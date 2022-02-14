
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_param {scalar_t__ status; int socket; } ;
struct target_notify {scalar_t__ status; int socket; } ;
struct target_address {scalar_t__ status; int socket; } ;


 scalar_t__ VAR_0 ;
 struct target_param* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct target_param*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_5(void)
{
 struct target_address *VAR_7;
 struct target_param *VAR_8;
 struct target_notify *VAR_9;

 while ((VAR_7 = FUNC_0(&VAR_2)) != ((void*)0)) {
  FUNC_2(&VAR_2, VAR_1);
  if (VAR_7->status == VAR_0)
   FUNC_3(VAR_7->socket);
  FUNC_4(VAR_7);
 }
 FUNC_1(&VAR_2);

 while ((VAR_8 = FUNC_0(&VAR_4)) != ((void*)0)) {
  FUNC_2(&VAR_4, VAR_6);
  FUNC_4(VAR_8);
 }
 FUNC_1(&VAR_4);

 while ((VAR_9 = FUNC_0(&VAR_3)) != ((void*)0)) {
  FUNC_2(&VAR_3, VAR_5);
  FUNC_4(VAR_9);
 }
 FUNC_1(&VAR_3);
}
