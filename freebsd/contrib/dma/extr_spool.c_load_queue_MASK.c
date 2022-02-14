
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct queue {int queue; } ;
struct qitem {char* mailfn; } ;
struct dirent {char* d_name; } ;
struct TYPE_2__ {int spooldir; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char**,char*,int ,char*) ;
 int FUNC_3 (struct queue*,int) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (int ,char*) ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int ) ;
 struct dirent* FUNC_8 (int *) ;
 struct qitem* FUNC_9 (struct queue*,char*) ;
 scalar_t__ FUNC_10 (char*,struct stat*) ;
 int FUNC_11 (int ,char*,char*,char*) ;

int
FUNC_12(struct queue *VAR_5)
{
 struct stat VAR_6;
 struct qitem *VAR_7;
 DIR *VAR_8;
 struct dirent *VAR_9;
 char *VAR_10;
 char *VAR_11;

 FUNC_3(VAR_5, sizeof(*VAR_5));
 FUNC_0(&VAR_5->queue);

 VAR_8 = FUNC_7(VAR_3.spooldir);
 if (VAR_8 == ((void*)0))
  FUNC_5(VAR_1, "reading queue");

 while ((VAR_9 = FUNC_8(VAR_8)) != ((void*)0)) {
  VAR_10 = ((void*)0);
  VAR_11 = ((void*)0);


  if (VAR_9->d_name[0] != 'Q')
   continue;
  if (FUNC_2(&VAR_10, "%d/Q%s", VAR_3.spooldir, VAR_9->d_name + 1) < 0)
   goto fail;
  if (FUNC_2(&VAR_11, "%d/M%s", VAR_3.spooldir, VAR_9->d_name + 1) < 0)
   goto fail;






  if (FUNC_10(VAR_10, &VAR_6) != 0)
   goto skip_item;
  if (!FUNC_1(VAR_6.st_mode)) {
   VAR_4 = VAR_0;
   goto skip_item;
  }

  if (FUNC_10(VAR_11, &VAR_6) != 0)
   goto skip_item;

  VAR_7 = FUNC_9(VAR_5, VAR_10);
  if (VAR_7 == ((void*)0))
   goto skip_item;

  VAR_7->mailfn = VAR_11;
  continue;

skip_item:
  FUNC_11(VAR_2, "could not pick up queue file: `%s'/`%s': %m", VAR_10, VAR_11);
  if (VAR_10 != ((void*)0))
   FUNC_6(VAR_10);
  if (VAR_11 != ((void*)0))
   FUNC_6(VAR_11);
 }
 FUNC_4(VAR_8);
 return (0);

fail:
 return (-1);
}
