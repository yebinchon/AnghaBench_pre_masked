
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ssh {int dummy; } ;
typedef int fd_set ;
struct TYPE_5__ {int efd; scalar_t__ extended_usage; } ;
typedef TYPE_1__ Channel ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ssh*,TYPE_1__*,int *,int *) ;
 int FUNC_1 (struct ssh*,TYPE_1__*,int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct ssh *VAR_3, Channel *VAR_4,
    fd_set *VAR_5, fd_set *VAR_6)
{
 if (VAR_4->efd == -1)
  return 1;



 if (VAR_4->extended_usage == VAR_2)
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 else if (VAR_4->extended_usage == VAR_1 ||
     VAR_4->extended_usage == VAR_0)
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);

 return 1;
}
