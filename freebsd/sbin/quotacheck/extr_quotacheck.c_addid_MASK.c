
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct fileusage {int fu_id; int fu_name; struct fileusage* fu_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 struct fileusage* FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 struct fileusage*** VAR_3 ;
 struct fileusage* FUNC_3 (int,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_4 ;

struct fileusage *
FUNC_7(u_long VAR_5, int VAR_6, char *VAR_7, const char *VAR_8)
{
 struct fileusage *VAR_9, **VAR_10;
 int VAR_11;

 if ((VAR_9 = FUNC_3(VAR_5, VAR_6)) != ((void*)0))
  return (VAR_9);
 if (VAR_7)
  VAR_11 = FUNC_6(VAR_7);
 else
  VAR_11 = 0;
 if ((VAR_9 = FUNC_1(1, sizeof(*VAR_9) + VAR_11)) == ((void*)0))
  FUNC_2(1, "calloc failed");
 VAR_10 = &VAR_3[VAR_6][VAR_5 & (VAR_0 - 1)];
 VAR_9->fu_next = *VAR_10;
 *VAR_10 = VAR_9;
 VAR_9->fu_id = VAR_5;
 if (VAR_7)
  FUNC_0(VAR_7, VAR_9->fu_name, VAR_11 + 1);
 else {
  (void)FUNC_5(VAR_9->fu_name, "%lu", VAR_5);
  if (VAR_4) {
   if (VAR_2 && VAR_8 != ((void*)0))
    (void)FUNC_4("%s: ", VAR_8);
   FUNC_4("unknown %cid: %lu\n",
       VAR_6 == VAR_1 ? 'u' : 'g', VAR_5);
  }
 }
 return (VAR_9);
}
