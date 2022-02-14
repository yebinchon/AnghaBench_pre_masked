
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ voidp ;
struct svc_req {int dummy; } ;
typedef int ssize_t ;
typedef int rv ;
typedef int buf ;
struct TYPE_7__ {int au_etype; } ;
typedef TYPE_1__ amq_sync_umnt ;
struct TYPE_8__ {scalar_t__* am_fd; } ;
typedef TYPE_2__ am_node ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (scalar_t__,TYPE_1__*,int) ;

amq_sync_umnt *
FUNC_3(voidp VAR_1, struct svc_req *VAR_2)
{
  static amq_sync_umnt VAR_3;
  amq_sync_umnt VAR_4;
  ssize_t VAR_5;

  am_node *VAR_6 = FUNC_0(*(char **) VAR_1);

  FUNC_1(&VAR_3, 0, sizeof(VAR_3));
  VAR_3.au_etype = VAR_0;
  if (VAR_6 && VAR_6->am_fd[0] >= 0) {
    VAR_5 = FUNC_2(VAR_6->am_fd[0], &VAR_4, sizeof(VAR_4));
    if (VAR_5 == sizeof(VAR_4))
      VAR_3 = VAR_4;
  }
  return &VAR_3;
}
