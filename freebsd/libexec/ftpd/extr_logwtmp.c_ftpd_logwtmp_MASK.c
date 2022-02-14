
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut ;
struct utmpx {int ut_line; int ut_id; int ut_tv; int ut_pid; int ut_type; int ut_host; int ut_user; } ;
struct sockaddr {int sa_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct utmpx*,int ,int) ;
 int FUNC_3 (struct utmpx*) ;
 int FUNC_4 (int ,int,struct sockaddr*,int ) ;
 int FUNC_5 (int ,char*,int) ;

void
FUNC_6(char *VAR_2, char *VAR_3, struct sockaddr *VAR_4)
{
 struct utmpx VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 if (VAR_3 != ((void*)0)) {

  VAR_5.ut_type = VAR_1;
  (void)FUNC_5(VAR_5.ut_user, VAR_3, sizeof(VAR_5.ut_user));
  if (VAR_4 != ((void*)0))
   FUNC_4(VAR_5.ut_host, sizeof(VAR_5.ut_host),
       VAR_4, VAR_4->sa_len);
 } else {

  VAR_5.ut_type = VAR_0;
 }

 VAR_5.ut_pid = FUNC_0();
 FUNC_1(&VAR_5.ut_tv, ((void*)0));
 (void)FUNC_5(VAR_5.ut_id, VAR_2, sizeof(VAR_5.ut_id));
 (void)FUNC_5(VAR_5.ut_line, "ftpd", sizeof(VAR_5.ut_line));

 FUNC_3(&VAR_5);
}
