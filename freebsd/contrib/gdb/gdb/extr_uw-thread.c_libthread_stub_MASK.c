
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct thread_map {int thr_state; int thr_lwpp; int thr_tid; } ;
struct thread_info {TYPE_1__* private; } ;
typedef scalar_t__ ptid_t ;
typedef int mapp ;
typedef enum thread_change { ____Placeholder_thread_change } thread_change ;
typedef int change ;
struct TYPE_12__ {int lwp_id; } ;
typedef TYPE_3__ __lwp_desc_t ;
struct TYPE_14__ {int (* to_xfer_memory ) (scalar_t__,char*,int,int ,int *,TYPE_5__*) ;} ;
struct TYPE_13__ {TYPE_2__* private; } ;
struct TYPE_11__ {int stable; int lwpid; scalar_t__ mapp; } ;
struct TYPE_10__ {int lwpid; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int,scalar_t__,scalar_t__) ;
 TYPE_5__ VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 () ;
 struct thread_info* FUNC_10 (int) ;
 TYPE_4__* FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (scalar_t__,TYPE_3__*) ;
 int FUNC_15 (scalar_t__,struct thread_map*) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (int ,scalar_t__) ;
 int FUNC_18 (scalar_t__,char*,int,int ,int *,TYPE_5__*) ;
 int FUNC_19 (scalar_t__,char*,int,int ,int *,TYPE_5__*) ;
 TYPE_4__* VAR_7 ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_21 (ptid_t VAR_9)
{
  CORE_ADDR VAR_10, VAR_11, VAR_12;
  enum thread_change VAR_13;
  struct thread_map VAR_14;
  __lwp_desc_t VAR_15;
  int VAR_16;
  ptid_t VAR_17 = VAR_5;
  struct thread_info *VAR_18;


  if (FUNC_16 (VAR_9) - VAR_0 != VAR_8)
    return;


  VAR_10 = FUNC_17 (VAR_2, VAR_9);
  if (!VAR_3.to_xfer_memory (VAR_10 + VAR_1, (char *)&VAR_11,
    sizeof (VAR_11), 0, ((void*)0), &VAR_3))
    goto err;
  if (!VAR_3.to_xfer_memory (VAR_10 + VAR_1 + sizeof (VAR_11), (char *)&VAR_13,
    sizeof (VAR_13), 0, ((void*)0), &VAR_3))
    goto err;



  VAR_12 = FUNC_9 ();


  switch (VAR_13) {
  case 134:
    if (!VAR_11)
      VAR_11 = VAR_12;


  case 131:
  case 130:
    if (!VAR_11)
      break;
    if (!FUNC_15 (VAR_11, &VAR_14))
      goto err;
    VAR_17 = FUNC_2 (FUNC_3 (VAR_9), VAR_14.thr_tid);

    switch (VAR_13) {
    case 131:
      if (!VAR_14.thr_lwpp)
 VAR_16 = 0;
      else if (!FUNC_14 ((CORE_ADDR)VAR_14.thr_lwpp, &VAR_15))
 goto err;
      else
 VAR_16 = VAR_15.lwp_id;
      FUNC_4 (VAR_14.thr_tid, VAR_16, VAR_11, VAR_17);
      break;

    case 130:
      FUNC_12 ("[Exited %s]\n", FUNC_20 (VAR_17));
      FUNC_8 (VAR_17);
      if (FUNC_13 (VAR_17, VAR_4))
 VAR_4 = VAR_9;
      break;

    case 134:
      if (VAR_7)
 goto err;
      if (!(VAR_7 = FUNC_11 (VAR_17)))
 goto err;
      VAR_7->private->stable = 0;
      break;

    default:
      break;
    }
    break;

  case 133:
  case 136:
    if (!VAR_7)
      goto err;

    if (VAR_13 == 133)
      {







 if (!FUNC_15 (VAR_7->private->mapp, &VAR_14))
   goto err;
 if (VAR_14.thr_lwpp)
   {
     if (!FUNC_14 ((CORE_ADDR)VAR_14.thr_lwpp, &VAR_15))
       goto err;
     if ((VAR_18 = FUNC_10 (VAR_15.lwp_id)))
       VAR_18->private->lwpid = 0;
     VAR_7->private->lwpid = VAR_15.lwp_id;
   }
      }

    VAR_7->private->stable = 1;
    VAR_7 = ((void*)0);
    break;

  case 135:
  case 129:
  case 128:
  case 132:
  err:
    FUNC_0(("unexpected condition in libthread_stub()"));
    break;
  }

  FUNC_1(("libthread_stub(%s): %s %s %s", FUNC_6 (VAR_6), FUNC_6 (VAR_17),
 FUNC_5 (VAR_13), VAR_17 ? FUNC_7 (VAR_14.thr_state) : ""));
}
