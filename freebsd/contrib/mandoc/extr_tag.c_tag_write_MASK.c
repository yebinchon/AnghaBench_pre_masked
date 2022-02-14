
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tag_entry {scalar_t__ prio; size_t nlines; char* s; struct tag_entry* lines; } ;
struct TYPE_2__ {int tfd; char* ofn; char* tfn; int * tagname; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 int FUNC_3 (int *,char*,char*,char*,struct tag_entry) ;
 int FUNC_4 (struct tag_entry*) ;
 int FUNC_5 (int ,int ,int ,char*,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 struct tag_entry* FUNC_8 (int *,unsigned int*) ;
 struct tag_entry* FUNC_9 (int *,unsigned int*) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int ) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_12 (char*) ;

void
FUNC_13(void)
{
 FILE *VAR_5;
 struct tag_entry *VAR_6;
 size_t VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 if (VAR_4.tfd <= 0)
  return;
 if (VAR_4.tagname != ((void*)0) && FUNC_7(&VAR_3,
            FUNC_10(&VAR_3, VAR_4.tagname)) == ((void*)0)) {
  FUNC_5(VAR_1, 0, 0, "%s", VAR_4.tagname);
  VAR_4.tagname = ((void*)0);
 }
 if ((VAR_5 = FUNC_2(VAR_4.tfd, "w")) == ((void*)0))
  FUNC_5(VAR_0, 0, 0, "%s", FUNC_11(VAR_2));
 VAR_9 = 1;
 VAR_6 = FUNC_8(&VAR_3, &VAR_8);
 while (VAR_6 != ((void*)0)) {
  if (VAR_5 != ((void*)0) && VAR_6->prio >= 0) {
   for (VAR_7 = 0; VAR_7 < VAR_6->nlines; VAR_7++) {
    FUNC_3(VAR_5, "%s %s %zu\n",
        VAR_6->s, VAR_4.ofn, VAR_6->lines[VAR_7]);
    VAR_9 = 0;
   }
  }
  FUNC_4(VAR_6->lines);
  FUNC_4(VAR_6);
  VAR_6 = FUNC_9(&VAR_3, &VAR_8);
 }
 FUNC_6(&VAR_3);
 if (VAR_5 != ((void*)0))
  FUNC_1(VAR_5);
 else
  FUNC_0(VAR_4.tfd);
 VAR_4.tfd = -1;
 if (VAR_9) {
  FUNC_12(VAR_4.tfn);
  *VAR_4.tfn = '\0';
 }
}
