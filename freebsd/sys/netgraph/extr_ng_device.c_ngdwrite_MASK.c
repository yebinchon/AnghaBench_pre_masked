
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {scalar_t__ uio_resid; } ;
struct mbuf {int dummy; } ;
struct cdev {int si_drv1; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_2__ {int hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,struct mbuf*) ;
 struct mbuf* FUNC_1 (struct uio*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct cdev *VAR_6, struct uio *VAR_7, int VAR_8)
{
 priv_p VAR_9 = (priv_p )VAR_6->si_drv1;
 struct mbuf *VAR_10;
 int VAR_11 = 0;

 VAR_0;

 if (VAR_7->uio_resid == 0)
  return (0);

 if (VAR_7->uio_resid < 0 || VAR_7->uio_resid > VAR_3)
  return (VAR_1);

 if ((VAR_10 = FUNC_1(VAR_7, VAR_4, 0, 0, VAR_5)) == ((void*)0))
  return (VAR_2);

 FUNC_0(VAR_11, VAR_9->hook, VAR_10);

 return (VAR_11);
}
