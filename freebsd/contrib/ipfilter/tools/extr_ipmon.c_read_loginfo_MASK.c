
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int logtype; scalar_t__ size; int fd; scalar_t__ regular; } ;
typedef TYPE_1__ logsource_t ;
typedef int iplog_t ;
typedef int fd_set ;
struct TYPE_7__ {int * log; int * cfile; int * bfile; int * blog; int * file; TYPE_1__* logsrc; scalar_t__ maxfd; int fdmr; } ;
typedef TYPE_2__ config_t ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*,char*,int) ;
 int FUNC_10 (int ,int*,char*,int) ;
 int FUNC_11 (scalar_t__,int *,int *,int *,int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static int FUNC_14(config_t *VAR_9)
{
 iplog_t VAR_10[VAR_0/sizeof(iplog_t)+1];
 int VAR_11, VAR_12, VAR_13, VAR_14;
 logsource_t *VAR_15;
 fd_set VAR_16;

 VAR_16 = VAR_9->fdmr;

 VAR_11 = FUNC_11(VAR_9->maxfd + 1, &VAR_16, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_11 == 0)
  return 1;
 if (VAR_11 == -1) {
  if (VAR_7 == VAR_1)
   return 1;
  return -1;
 }

 for (VAR_14 = 0, VAR_13 = 0; VAR_14 < 3; VAR_14++) {
  VAR_15 = &VAR_9->logsrc[VAR_14];

  if ((VAR_15->logtype == -1) || !FUNC_0(VAR_15->fd, &VAR_16))
   continue;

  VAR_12 = 0;
  if (VAR_15->regular) {
   VAR_12 = (FUNC_8(VAR_15->fd, 0, VAR_5) < VAR_15->size);
   if (!VAR_12 && !(VAR_8 & VAR_3))
    return 0;
  }

  VAR_11 = 0;
  VAR_12 = FUNC_10(VAR_15->fd, &VAR_11, (char *)VAR_10, sizeof(VAR_10));
  if (VAR_6) {
   if (VAR_9->file != ((void*)0)) {
    if (VAR_9->log != ((void*)0)) {
     FUNC_1(VAR_9->log);
     VAR_9->log = ((void*)0);
    }
    VAR_9->log = FUNC_3(VAR_9->file, "a");
   }

   if (VAR_9->bfile != ((void*)0)) {
    if (VAR_9->blog != ((void*)0)) {
     FUNC_1(VAR_9->blog);
     VAR_9->blog = ((void*)0);
    }
    VAR_9->blog = FUNC_3(VAR_9->bfile, "a");
   }

   FUNC_5();
   if (VAR_9->cfile != ((void*)0))
    FUNC_7(VAR_9->cfile);
   VAR_6 = 0;
  }

  switch (VAR_12)
  {
  case -1 :
   if (VAR_8 & VAR_2)
    FUNC_13(VAR_4, "read: %m\n");
   else {
    FUNC_6(VAR_15->fd, "read");
   }
   return 0;
  case 1 :
   if (VAR_8 & VAR_2)
    FUNC_13(VAR_4, "aborting logging\n");
   else if (VAR_9->log != ((void*)0))
    FUNC_4(VAR_9->log, "aborting logging\n");
   return 0;
  case 2 :
   break;
  case 0 :
   VAR_13 += VAR_12;
   if (VAR_11 > 0) {
    FUNC_9(VAR_9, VAR_15, (char *)VAR_10, VAR_11);
    if (!(VAR_8 & VAR_2))
     FUNC_2(VAR_9->log);
   }
   break;
  }
 }

 if (!VAR_13 && (VAR_8 & VAR_3))
  FUNC_12(1);

 return 1;
}
