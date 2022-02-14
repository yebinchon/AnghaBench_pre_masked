
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sival_ptr; } ;
struct sigevent {int sigev_priority; int flags; TYPE_1__ sigev_value; scalar_t__ sigev_code; int sigev_signo; int sigev_notify; } ;
typedef int status ;
typedef int ptid_t ;
typedef struct sigevent procfs_status ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int,int ,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int,int ,struct sigevent*,int,int ) ;
 char* VAR_12 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* VAR_13 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,char*,char*,int) ;

__attribute__((used)) static ptid_t
FUNC_9 (ptid_t VAR_14)
{
  procfs_status VAR_15;
  struct sigevent VAR_16;
  char VAR_17[VAR_5];

  FUNC_8 (VAR_17, VAR_5 - 1, "%s/%d/as", VAR_13, FUNC_0 (VAR_14));
  VAR_11 = FUNC_6 (VAR_17, VAR_4);
  if (VAR_11 == -1)
    FUNC_3 ("Couldn't open proc file %s, error %d (%s)", VAR_17, VAR_12,
    FUNC_7 (VAR_12));
  if (FUNC_2 (VAR_11, VAR_2, &VAR_15, sizeof (VAR_15), 0) != VAR_3)
    FUNC_3 ("Couldn't stop process");


  VAR_16.sigev_notify = VAR_7;
  VAR_16.sigev_signo = VAR_8;
  VAR_16.sigev_code = 0;
  VAR_16.sigev_value.sival_ptr = ((void*)0);
  VAR_16.sigev_priority = -1;
  FUNC_2 (VAR_11, VAR_0, &VAR_16, sizeof (VAR_16), 0);

  if (FUNC_2 (VAR_11, VAR_1, &VAR_15, sizeof (VAR_15), 0) == VAR_3
      && VAR_15.flags & VAR_9)
    FUNC_1 (FUNC_5(), FUNC_0 (VAR_14), 0, VAR_6, 0, 0);
  VAR_10 = 1;
  FUNC_4 ();
  return VAR_14;
}
