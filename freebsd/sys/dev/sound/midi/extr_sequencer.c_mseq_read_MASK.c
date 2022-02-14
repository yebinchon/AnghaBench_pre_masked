
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uio {int uio_resid; } ;
struct seq_softc {int unit; int fflags; int seq_lock; int in_q; int in_cv; } ;
struct cdev {struct seq_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int VAR_4 ;
 int FUNC_4 (int,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,...) ;
 int FUNC_9 (int *,int,struct uio*) ;

int
FUNC_10(struct cdev *VAR_6, struct uio *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 struct seq_softc *VAR_11 = VAR_6->si_drv1;


 u_char VAR_12[32];

 if (VAR_11 == ((void*)0))
  return VAR_1;

 FUNC_4(7, FUNC_8("mseq_read: unit %d, resid %zd.\n",
     VAR_11->unit, VAR_7->uio_resid));

 FUNC_6(&VAR_11->seq_lock);
 if ((VAR_11->fflags & VAR_3) == 0) {
  FUNC_4(2, FUNC_8("mseq_read: unit %d is not for reading.\n",
      VAR_11->unit));
  VAR_9 = VAR_0;
  goto err1;
 }
 while (VAR_7->uio_resid > 0) {
  while (FUNC_1(VAR_11->in_q)) {
   VAR_9 = VAR_2;




   if (VAR_11->fflags & VAR_4)
    goto err1;
   if (VAR_8 & VAR_4)
    goto err1;

   VAR_9 = FUNC_5(&VAR_11->in_cv, &VAR_11->seq_lock);
   if (VAR_9 != 0)
    goto err1;
  }

  VAR_10 = FUNC_3(FUNC_2(VAR_11->in_q), VAR_7->uio_resid);
  VAR_10 = FUNC_3(VAR_10, 32);

  FUNC_4(8, FUNC_8("midiread: uiomove cc=%d\n", VAR_10));
  FUNC_0(VAR_11->in_q, VAR_12, VAR_10);
  FUNC_7(&VAR_11->seq_lock);
  VAR_9 = FUNC_9(VAR_12, VAR_10, VAR_7);
  FUNC_6(&VAR_11->seq_lock);
  if (VAR_9)
   goto err1;
 }

 VAR_9 = 0;
err1:
 FUNC_7(&VAR_11->seq_lock);
 FUNC_4(6, FUNC_8("mseq_read: ret %d, resid %zd.\n",
     VAR_9, VAR_7->uio_resid));

 return VAR_9;
}
