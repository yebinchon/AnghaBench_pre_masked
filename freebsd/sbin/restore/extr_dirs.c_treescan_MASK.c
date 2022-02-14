
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotab {long t_seekpt; } ;
struct direct {char* d_name; int d_namlen; int d_ino; } ;
typedef int locname ;
typedef int ino_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*,...) ;
 struct inotab* FUNC_1 (int ) ;
 struct direct* FUNC_2 (int ) ;
 int FUNC_3 (int ,long,long) ;
 long FUNC_4 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 long FUNC_9 (char*,int ,int) ;
 long FUNC_10 (char*,int ,int) ;

void
FUNC_11(char *VAR_6, ino_t VAR_7, long (*VAR_8)(char *, ino_t, int))
{
 struct inotab *VAR_9;
 struct direct *VAR_10;
 int VAR_11;
 long VAR_12;
 char VAR_13[VAR_2];

 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 == ((void*)0)) {



  (void) (*VAR_8)(VAR_6, VAR_7, VAR_1);
  return;
 }



 if ((*VAR_8)(VAR_6, VAR_7, VAR_3) == VAR_0)
  return;




 (void) FUNC_7(VAR_13, VAR_6, sizeof(VAR_13));
 (void) FUNC_6(VAR_13, "/", sizeof(VAR_13));
 VAR_11 = FUNC_8(VAR_13);
 FUNC_3(VAR_4, VAR_9->t_seekpt, VAR_9->t_seekpt);
 VAR_10 = FUNC_2(VAR_4);
 if (VAR_10 != ((void*)0) && FUNC_5(VAR_10->d_name, ".") == 0)
  VAR_10 = FUNC_2(VAR_4);
 else
  FUNC_0(VAR_5, "Warning: `.' missing from directory %s\n",
   VAR_6);
 if (VAR_10 != ((void*)0) && FUNC_5(VAR_10->d_name, "..") == 0)
  VAR_10 = FUNC_2(VAR_4);
 else
  FUNC_0(VAR_5, "Warning: `..' missing from directory %s\n",
   VAR_6);
 VAR_12 = FUNC_4(VAR_4);



 while (VAR_10 != ((void*)0)) {
  VAR_13[VAR_11] = '\0';
  if (VAR_11 + VAR_10->d_namlen >= sizeof(VAR_13)) {
   FUNC_0(VAR_5, "%s%s: name exceeds %zu char\n",
       VAR_13, VAR_10->d_name, sizeof(VAR_13) - 1);
  } else {
   (void)FUNC_6(VAR_13, VAR_10->d_name, sizeof(VAR_13));
   FUNC_11(VAR_13, VAR_10->d_ino, VAR_8);
   FUNC_3(VAR_4, VAR_12, VAR_9->t_seekpt);
  }
  VAR_10 = FUNC_2(VAR_4);
  VAR_12 = FUNC_4(VAR_4);
 }
}
