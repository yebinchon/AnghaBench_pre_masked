
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int maxlen; struct svc_dg_data* buf; } ;
struct svc_dg_data {int su_iosz; TYPE_1__ su_srcaddr; int su_xdrs; } ;
struct TYPE_12__ {int maxlen; struct svc_dg_data* buf; } ;
struct TYPE_11__ {int maxlen; struct svc_dg_data* buf; } ;
struct TYPE_13__ {int xp_fd; int xp_tp; TYPE_3__ xp_ltaddr; TYPE_2__ xp_rtaddr; } ;
typedef TYPE_4__ SVCXPRT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct svc_dg_data*,int) ;
 struct svc_dg_data* FUNC_4 (TYPE_4__*) ;
 struct svc_dg_data* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_8(SVCXPRT *VAR_0)
{
 struct svc_dg_data *VAR_1 = FUNC_5(VAR_0);

 FUNC_7(VAR_0);
 if (VAR_0->xp_fd != -1)
  (void)FUNC_1(VAR_0->xp_fd);
 FUNC_0(&(VAR_1->su_xdrs));
 (void) FUNC_3(FUNC_4(VAR_0), VAR_1->su_iosz);
 if (VAR_1->su_srcaddr.buf)
  (void) FUNC_3(VAR_1->su_srcaddr.buf, VAR_1->su_srcaddr.maxlen);
 (void) FUNC_3(VAR_1, sizeof (*VAR_1));
 if (VAR_0->xp_rtaddr.buf)
  (void) FUNC_3(VAR_0->xp_rtaddr.buf, VAR_0->xp_rtaddr.maxlen);
 if (VAR_0->xp_ltaddr.buf)
  (void) FUNC_3(VAR_0->xp_ltaddr.buf, VAR_0->xp_ltaddr.maxlen);
 FUNC_2(VAR_0->xp_tp);
 FUNC_6(VAR_0);
}
