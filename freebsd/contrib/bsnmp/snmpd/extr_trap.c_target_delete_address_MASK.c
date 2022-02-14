
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_address {scalar_t__ status; int socket; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct target_address*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct target_address*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(struct target_address *VAR_4)
{
 FUNC_0(&VAR_3, VAR_4, VAR_2, VAR_1);
 if (VAR_4->status == VAR_0)
  FUNC_1(VAR_4->socket);
 FUNC_2(VAR_4);

 return (0);
}
