
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int voidp ;
struct svc_req {int dummy; } ;
typedef int rv ;
struct TYPE_4__ {int au_errno; int au_etype; } ;
typedef TYPE_1__ amq_sync_umnt ;


 int VAR_0 ;
 int FUNC_0 (int ,struct svc_req*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

amq_sync_umnt *
FUNC_2(voidp VAR_2, struct svc_req *VAR_3)
{
  static amq_sync_umnt VAR_4;

  FUNC_1(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.au_etype = VAR_0;
  VAR_4.au_errno = VAR_1;

  FUNC_0(VAR_2, VAR_3);

  return &VAR_4;
}
