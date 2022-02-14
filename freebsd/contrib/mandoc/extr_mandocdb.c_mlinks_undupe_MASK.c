
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpage {scalar_t__ form; struct mlink* mlinks; } ;
struct mlink {scalar_t__ dform; struct mlink* next; int file; int dsec; } ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct mlink*) ;
 int VAR_3 ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,int ,int) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char*,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_10(struct mpage *VAR_6)
{
 char VAR_7[VAR_2];
 struct mlink **VAR_8;
 struct mlink *VAR_9;
 char *VAR_10;

 VAR_6->form = VAR_0;
 VAR_8 = &VAR_6->mlinks;
 while (((void*)0) != (VAR_9 = *VAR_8)) {
  if (VAR_0 != VAR_9->dform) {
   VAR_6->form = VAR_1;
   goto nextlink;
  }
  (void)FUNC_7(VAR_7, VAR_9->file, sizeof(VAR_7));
  VAR_10 = FUNC_9(VAR_7, "cat");
  FUNC_0(((void*)0) != VAR_10);
  FUNC_1(VAR_10, "man", 3);
  if (((void*)0) != (VAR_10 = FUNC_8(VAR_7, '.')))
   *++VAR_10 = '\0';
  (void)FUNC_6(VAR_7, VAR_9->dsec, sizeof(VAR_7));
  if (((void*)0) == FUNC_3(&VAR_3,
      FUNC_4(&VAR_3, VAR_7)))
   goto nextlink;
  if (VAR_5)
   FUNC_5(VAR_9->file, "Man source exists: %s", VAR_7);
  if (VAR_4)
   goto nextlink;
  *VAR_8 = VAR_9->next;
  FUNC_2(VAR_9);
  continue;
nextlink:
  VAR_8 = &(*VAR_8)->next;
 }
}
