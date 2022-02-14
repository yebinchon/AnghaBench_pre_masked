
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_ctime; } ;
struct perf_session {int fd; } ;
typedef int FILE ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,struct stat*) ;
 int FUNC_3 (struct perf_session*,int *,int) ;

void FUNC_4(struct perf_session *VAR_0, FILE *VAR_1,
    bool VAR_2)
{
 struct stat VAR_3;
 int VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return;

 VAR_4 = FUNC_2(VAR_0->fd, &VAR_3);
 if (VAR_4 == -1)
  return;

 FUNC_1(VAR_1, "# ========\n");
 FUNC_1(VAR_1, "# captured on: %s", FUNC_0(&VAR_3.st_ctime));
 FUNC_3(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_1, "# ========\n#\n");
}
