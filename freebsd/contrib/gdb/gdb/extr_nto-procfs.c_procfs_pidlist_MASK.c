
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dirent {char* d_name; } ;
struct TYPE_5__ {scalar_t__ num_threads; char* path; int tid; } ;
typedef TYPE_1__ procfs_status ;
typedef TYPE_1__ procfs_info ;
typedef TYPE_1__ procfs_debuginfo ;
typedef scalar_t__ pid_t ;
typedef int buf ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int ,TYPE_1__*,int,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,char*,int ,...) ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_5 (char*,int ) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,scalar_t__,scalar_t__) ;
 struct dirent* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int,char*,char*,char*) ;
 int FUNC_12 (char*,char*) ;

void
FUNC_13 (char *VAR_8, int VAR_9)
{
  DIR *VAR_10 = ((void*)0);
  struct dirent *VAR_11 = ((void*)0);
  int VAR_12 = -1;
  char VAR_13[512];
  procfs_info *VAR_14 = ((void*)0);
  procfs_debuginfo *VAR_15 = ((void*)0);
  procfs_status *VAR_16 = ((void*)0);
  pid_t VAR_17 = 0;
  pid_t VAR_18;
  char VAR_19[512];

  VAR_10 = FUNC_6 (VAR_7);
  if (VAR_10 == ((void*)0))
    {
      FUNC_4 (VAR_6, "failed to opendir \"%s\" - %d (%s)",
       VAR_7, VAR_5, FUNC_10 (VAR_5));
      return;
    }


  FUNC_9 (VAR_10);

  do
    {

      do
 {
   VAR_11 = FUNC_8 (VAR_10);
   if (VAR_11 == ((void*)0))
     {
       FUNC_2 (VAR_10);
       return;
     }
   FUNC_11 (VAR_13, 511, "%s/%s/as", VAR_7, VAR_11->d_name);
   VAR_18 = FUNC_0 (VAR_11->d_name);
 }
      while (VAR_18 == 0);


      VAR_12 = FUNC_5 (VAR_13, VAR_4);
      if (VAR_12 == -1)
 {
   FUNC_4 (VAR_6, "failed to open %s - %d (%s)\n",
    VAR_13, VAR_5, FUNC_10 (VAR_5));
   FUNC_2 (VAR_10);
   return;
 }

      VAR_14 = (procfs_info *) VAR_13;
      if (FUNC_3 (VAR_12, VAR_0, VAR_14, sizeof (VAR_13), 0) != VAR_3)
 {
   FUNC_4 (VAR_6,
    "devctl DCMD_PROC_INFO failed - %d (%s)\n", VAR_5,
    FUNC_10 (VAR_5));
   break;
 }
      VAR_17 = VAR_14->num_threads;

      VAR_15 = (procfs_debuginfo *) VAR_13;
      if (FUNC_3 (VAR_12, VAR_1, VAR_15, sizeof (VAR_13), 0) != VAR_3)
 FUNC_12 (VAR_19, "unavailable");
      else
 FUNC_12 (VAR_19, VAR_15->path);


      VAR_16 = (procfs_status *) VAR_13;
      for (VAR_16->tid = 1; VAR_16->tid <= VAR_17; VAR_16->tid++)
 {
   if (FUNC_3 (VAR_12, VAR_2, VAR_16, sizeof (VAR_13), 0) != VAR_3
       && VAR_16->tid != 0)
     break;
   if (VAR_16->tid != 0)
     FUNC_7 ("%s - %d/%d\n", VAR_19, VAR_18, VAR_16->tid);
 }
      FUNC_1 (VAR_12);
    }
  while (VAR_11 != ((void*)0));

  FUNC_1 (VAR_12);
  FUNC_2 (VAR_10);
  return;
}
