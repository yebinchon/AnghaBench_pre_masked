
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int queue; } ;
struct qitem {char* sender; char* queueid; char* queuefn; } ;
typedef int line ;
typedef int itmqueue ;
typedef int FILE ;


 int VAR_0 ;
 struct qitem* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct qitem*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct queue*,char*,int ) ;
 int FUNC_4 (struct queue*,int) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,int,int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char) ;
 int VAR_4 ;
 char* FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,char*,...) ;

__attribute__((used)) static struct qitem *
FUNC_16(struct queue *VAR_5, char *VAR_6)
{
 char VAR_7[1000];
 struct queue VAR_8;
 FILE *VAR_9 = ((void*)0);
 char *VAR_10;
 char *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 struct qitem *VAR_14 = ((void*)0);

 FUNC_4(&VAR_8, sizeof(VAR_8));
 FUNC_1(&VAR_8.queue);

 VAR_9 = FUNC_8(VAR_6, "r");
 if (VAR_9 == ((void*)0))
  goto out;

 while (!FUNC_6(VAR_9)) {
  if (FUNC_7(VAR_7, sizeof(VAR_7), VAR_9) == ((void*)0) || VAR_7[0] == 0)
   break;
  VAR_7[FUNC_14(VAR_7) - 1] = 0;

  VAR_10 = FUNC_11(VAR_7, ':');
  if (VAR_10 == ((void*)0))
   goto malformed;
  *VAR_10 = 0;

  VAR_10++;
  while (FUNC_10(*VAR_10))
   VAR_10++;

  VAR_10 = FUNC_13(VAR_10);
  if (VAR_10 == ((void*)0))
   goto malformed;

  if (FUNC_12(VAR_7, "ID") == 0) {
   VAR_11 = VAR_10;
  } else if (FUNC_12(VAR_7, "Sender") == 0) {
   VAR_12 = VAR_10;
  } else if (FUNC_12(VAR_7, "Recipient") == 0) {
   VAR_13 = VAR_10;
  } else {
   FUNC_15(VAR_1, "ignoring unknown queue info `%s' in `%s'",
          VAR_7, VAR_6);
   FUNC_9(VAR_10);
  }
 }

 if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0) || VAR_13 == ((void*)0) ||
     *VAR_11 == 0 || *VAR_13 == 0) {
malformed:
  VAR_3 = VAR_0;
  FUNC_15(VAR_2, "malformed queue file `%s'", VAR_6);
  goto out;
 }

 if (FUNC_3(&VAR_8, VAR_13, 0) != 0)
  goto out;

 VAR_14 = FUNC_0(&VAR_8.queue);
 VAR_14->sender = VAR_12; VAR_12 = ((void*)0);
 VAR_14->queueid = VAR_11; VAR_11 = ((void*)0);
 VAR_14->queuefn = VAR_6; VAR_6 = ((void*)0);
 FUNC_2(&VAR_5->queue, VAR_14, VAR_4);

out:
 if (VAR_12 != ((void*)0))
  FUNC_9(VAR_12);
 if (VAR_11 != ((void*)0))
  FUNC_9(VAR_11);
 if (VAR_13 != ((void*)0))
  FUNC_9(VAR_13);
 if (VAR_9 != ((void*)0))
  FUNC_5(VAR_9);

 return (VAR_14);
}
