
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucred ;
struct xucred {scalar_t__ cr_version; scalar_t__ cr_uid; } ;
struct port_input {int priv; int fd; } ;
typedef int socklen_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,struct xucred*,int*) ;

__attribute__((used)) static void
FUNC_1(struct port_input *VAR_2)
{
 struct xucred VAR_3;
 socklen_t VAR_4;


 VAR_4 = sizeof(VAR_3);

 if (FUNC_0(VAR_2->fd, 0, VAR_0, &VAR_3, &VAR_4) == 0 &&
     VAR_4 >= sizeof(VAR_3) && VAR_3.cr_version == VAR_1)
  VAR_2->priv = (VAR_3.cr_uid == 0);
 else
  VAR_2->priv = 0;
}
