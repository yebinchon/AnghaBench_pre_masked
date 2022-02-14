
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_dev; int st_ino; } ;
struct TYPE_2__ {int st_dev; int st_ino; } ;
struct mpage {char* dsec; char* arch; char* name; char* fsec; struct mpage* mpage; struct mpage* mlinks; struct mpage* next; void* form; TYPE_1__ inodev; int * file; void* fform; } ;
struct mlink {char* dsec; char* arch; char* name; char* fsec; struct mlink* mpage; struct mlink* mlinks; struct mlink* next; void* form; TYPE_1__ inodev; int * file; void* fform; } ;
struct inodev {int st_dev; int st_ino; } ;
typedef int inodev ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 struct mpage* FUNC_2 (int,int) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (struct inodev*,int ,int) ;
 int VAR_3 ;
 struct mpage* VAR_4 ;
 int VAR_5 ;
 struct mpage* FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,unsigned int,struct mpage*) ;
 unsigned int FUNC_7 (int *,char*,int,int ) ;
 unsigned int FUNC_8 (int *,int *) ;

__attribute__((used)) static void
FUNC_9(struct mlink *VAR_6, const struct stat *VAR_7)
{
 struct inodev VAR_8;
 struct mpage *VAR_9;
 unsigned int VAR_10;

 FUNC_0(((void*)0) != VAR_6->file);

 VAR_6->dsec = FUNC_3(VAR_6->dsec ? VAR_6->dsec : "");
 VAR_6->arch = FUNC_3(VAR_6->arch ? VAR_6->arch : "");
 VAR_6->name = FUNC_3(VAR_6->name ? VAR_6->name : "");
 VAR_6->fsec = FUNC_3(VAR_6->fsec ? VAR_6->fsec : "");

 if ('0' == *VAR_6->fsec) {
  FUNC_1(VAR_6->fsec);
  VAR_6->fsec = FUNC_3(VAR_6->dsec);
  VAR_6->fform = VAR_0;
 } else if ('1' <= *VAR_6->fsec && '9' >= *VAR_6->fsec)
  VAR_6->fform = VAR_2;
 else
  VAR_6->fform = VAR_1;

 VAR_10 = FUNC_8(&VAR_3, VAR_6->file);
 FUNC_0(((void*)0) == FUNC_5(&VAR_3, VAR_10));
 FUNC_6(&VAR_3, VAR_10, VAR_6);

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.st_ino = VAR_7->st_ino;
 VAR_8.st_dev = VAR_7->st_dev;
 VAR_10 = FUNC_7(&VAR_5, (char *)&VAR_8,
     sizeof(struct inodev), VAR_8.st_ino);
 VAR_9 = FUNC_5(&VAR_5, VAR_10);
 if (((void*)0) == VAR_9) {
  VAR_9 = FUNC_2(1, sizeof(struct mpage));
  VAR_9->inodev.st_ino = VAR_8.st_ino;
  VAR_9->inodev.st_dev = VAR_8.st_dev;
  VAR_9->form = VAR_1;
  VAR_9->next = VAR_4;
  VAR_4 = VAR_9;
  FUNC_6(&VAR_5, VAR_10, VAR_9);
 } else
  VAR_6->next = VAR_9->mlinks;
 VAR_9->mlinks = VAR_6;
 VAR_6->mpage = VAR_9;
}
