
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct svc_req {int dummy; } ;
typedef int res ;
struct TYPE_3__ {int rr_status; } ;
typedef TYPE_1__ nfsreadres ;
typedef int nfsreadargs ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ) ;

nfsreadres *
FUNC_2(nfsreadargs *VAR_1, struct svc_req *VAR_2)
{
  static nfsreadres VAR_3;

  FUNC_0((char *) &VAR_3, 0, sizeof(VAR_3));
  VAR_3.rr_status = FUNC_1(VAR_0);

  return &VAR_3;
}
