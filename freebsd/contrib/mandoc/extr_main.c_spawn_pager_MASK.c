
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_1; int member_0; } ;
struct tag_files {char* tfn; char* tagname; char* ofn; int tfd; int ofd; int pager_pid; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,int ,int ,char*,char*,...) ;
 int FUNC_10 () ;
 char* FUNC_11 (char const*) ;
 int FUNC_12 (struct timespec const*,int *) ;
 int FUNC_13 (char*,int *) ;
 int FUNC_14 (int ,int ) ;
 char* FUNC_15 (char*,char) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (int ) ;
 size_t FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;

__attribute__((used)) static pid_t
FUNC_21(struct tag_files *VAR_7)
{
 const struct timespec VAR_8 = { 0, 100000000 };

 char *VAR_9[16];
 const char *VAR_10;
 char *VAR_11;



 int VAR_12, VAR_13;
 pid_t VAR_14;

 VAR_10 = FUNC_7("MANPAGER");
 if (VAR_10 == ((void*)0) || *VAR_10 == '\0')
  VAR_10 = FUNC_7("PAGER");
 if (VAR_10 == ((void*)0) || *VAR_10 == '\0')
  VAR_10 = "less -s";
 VAR_11 = FUNC_11(VAR_10);






 VAR_12 = 0;
 while (VAR_12 + 5 < 16) {
  VAR_9[VAR_12++] = VAR_11;
  VAR_11 = FUNC_15(VAR_11, ' ');
  if (VAR_11 == ((void*)0))
   break;
  *VAR_11++ = '\0';
  while (*VAR_11 == ' ')
   VAR_11++;
  if (*VAR_11 == '\0')
   break;
 }



 VAR_13 = 1;
 if (VAR_13)
  VAR_9[VAR_12++] = VAR_7->ofn;
 VAR_9[VAR_12] = ((void*)0);

 switch (VAR_14 = FUNC_6()) {
 case -1:
  FUNC_9(VAR_2, 0, 0, "%s", FUNC_17(VAR_6));
  FUNC_5(FUNC_10());
 case 0:
  break;
 default:
  (void)FUNC_14(VAR_14, 0);
  (void)FUNC_20(VAR_7->ofd, VAR_14);







  VAR_7->pager_pid = VAR_14;
  return VAR_14;
 }



 if (FUNC_3(VAR_7->ofd, VAR_5) == -1) {
  FUNC_9(VAR_0, 0, 0, "%s", FUNC_17(VAR_6));
  FUNC_0(FUNC_10());
 }
 FUNC_2(VAR_7->ofd);
 FUNC_1(VAR_7->tfd == -1);



 while (FUNC_19(VAR_5) != FUNC_8())
  FUNC_12(&VAR_8, ((void*)0));

 FUNC_4(VAR_9[0], VAR_9);
 FUNC_9(VAR_1, 0, 0, "%s: %s", VAR_9[0], FUNC_17(VAR_6));
 FUNC_0(FUNC_10());
}
