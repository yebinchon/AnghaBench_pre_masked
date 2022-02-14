
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {struct seq_softc* b; } ;
struct seq_softc {int unit; TYPE_2__ in_q; TYPE_2__ out_q; struct seq_softc* midi_flags; struct seq_softc* midis; TYPE_1__* musicdev; TYPE_1__* seqdev; int * mapper; int mapper_cookie; int th_cv; int in_cv; int out_cv; int reset_cv; int empty_cv; int state_cv; int seq_lock; scalar_t__ flags; } ;
typedef int kobj_t ;
struct TYPE_3__ {struct seq_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (TYPE_2__,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct seq_softc*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,struct seq_softc*,int *,int ,int ,char*,int) ;
 void* FUNC_8 (int *,int ,int ,int ,int,char*,int) ;
 void* FUNC_9 (int,int ,int) ;
 int * FUNC_10 (struct seq_softc*,int*,int *) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_12 ;
 int FUNC_14 (char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct seq_softc** VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_15(void)
{
 struct seq_softc *VAR_18;
 int VAR_19;
 u_char *VAR_20;


 VAR_19 = VAR_1;
 VAR_18 = FUNC_9(sizeof(*VAR_18), VAR_4, VAR_5 | VAR_7);
 if (VAR_18 == ((void*)0)) {
  FUNC_2(1, FUNC_14("seq_addunit: softc allocation failed.\n"));
  goto err;
 }
 FUNC_6((kobj_t)VAR_18, &VAR_17);

 VAR_20 = FUNC_9(sizeof(*VAR_20) * VAR_2 * 1024, VAR_6, VAR_5 | VAR_7);
 if (VAR_20 == ((void*)0))
  goto err;
 FUNC_1(VAR_18->in_q, VAR_20, VAR_2 * 1024);
 VAR_20 = FUNC_9(sizeof(*VAR_20) * VAR_2 * 1024, VAR_6, VAR_5 | VAR_7);
 if (VAR_20 == ((void*)0))
  goto err;
 FUNC_1(VAR_18->out_q, VAR_20, VAR_2 * 1024);
 VAR_19 = VAR_0;

 VAR_18->midis = FUNC_9(sizeof(kobj_t) * 32, VAR_6, VAR_5 | VAR_7);
 VAR_18->midi_flags = FUNC_9(sizeof(*VAR_18->midi_flags) * 32, VAR_6,
     VAR_5 | VAR_7);

 if (VAR_18->midis == ((void*)0) || VAR_18->midi_flags == ((void*)0))
  goto err;

 VAR_18->flags = 0;

 FUNC_11(&VAR_18->seq_lock, "seqflq", ((void*)0), 0);
 FUNC_3(&VAR_18->state_cv, "seqstate");
 FUNC_3(&VAR_18->empty_cv, "seqempty");
 FUNC_3(&VAR_18->reset_cv, "seqtimer");
 FUNC_3(&VAR_18->out_cv, "seqqout");
 FUNC_3(&VAR_18->in_cv, "seqqin");
 FUNC_3(&VAR_18->th_cv, "seqstart");





 VAR_18->mapper = FUNC_10(VAR_18, &VAR_18->unit, &VAR_18->mapper_cookie);
 if (VAR_18->mapper == ((void*)0))
  goto err;

 VAR_18->seqdev = FUNC_8(&VAR_13,
     FUNC_0(VAR_18->unit, VAR_10, 0), VAR_11,
     VAR_3, 0666, "sequencer%d", VAR_18->unit);

 VAR_18->musicdev = FUNC_8(&VAR_13,
     FUNC_0(VAR_18->unit, VAR_9, 0), VAR_11,
     VAR_3, 0666, "music%d", VAR_18->unit);

 if (VAR_18->seqdev == ((void*)0) || VAR_18->musicdev == ((void*)0))
  goto err;




 VAR_19 =
     FUNC_7
     (VAR_14, VAR_18, ((void*)0), VAR_8, 0,
     "sequencer %02d", VAR_18->unit);

 if (VAR_19)
  goto err;

 VAR_18->seqdev->si_drv1 = VAR_18->musicdev->si_drv1 = VAR_18;

 FUNC_2(2, FUNC_14("sequencer %d created scp %p\n", VAR_18->unit, VAR_18));

 VAR_19 = 0;

 FUNC_12(&VAR_15);
 VAR_16[VAR_12++] = VAR_18;
 FUNC_13(&VAR_15);

 goto ok;

err:
 if (VAR_18 != ((void*)0)) {
  if (VAR_18->seqdev != ((void*)0))
   FUNC_4(VAR_18->seqdev);
  if (VAR_18->musicdev != ((void*)0))
   FUNC_4(VAR_18->musicdev);



  if (VAR_18->midis != ((void*)0))
   FUNC_5(VAR_18->midis, VAR_6);
  if (VAR_18->midi_flags != ((void*)0))
   FUNC_5(VAR_18->midi_flags, VAR_6);
  if (VAR_18->out_q.b)
   FUNC_5(VAR_18->out_q.b, VAR_6);
  if (VAR_18->in_q.b)
   FUNC_5(VAR_18->in_q.b, VAR_6);
  FUNC_5(VAR_18, VAR_4);
 }
ok:
 return VAR_19;
}
