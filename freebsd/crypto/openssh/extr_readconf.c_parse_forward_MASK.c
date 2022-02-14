
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct fwdarg {char* listen_path; char* arg; scalar_t__ listen_port; char* listen_host; char* connect_host; char* connect_path; scalar_t__ connect_port; int ispath; } ;
struct Forward {char* listen_path; char* arg; scalar_t__ listen_port; char* listen_host; char* connect_host; char* connect_path; scalar_t__ connect_port; int ispath; } ;
typedef int fwdargs ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct fwdarg*,int ,int) ;
 scalar_t__ FUNC_4 (char**,struct fwdarg*) ;
 scalar_t__ FUNC_5 (char*) ;
 void* FUNC_6 (char const*) ;

int
FUNC_7(struct Forward *VAR_3, const char *VAR_4, int VAR_5, int VAR_6)
{
 struct fwdarg VAR_7[4];
 char *VAR_8, *VAR_9;
 int VAR_10;

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 FUNC_3(VAR_7, 0, sizeof(VAR_7));

 VAR_9 = VAR_8 = FUNC_6(VAR_4);


 while (FUNC_2((u_char)*VAR_9))
  VAR_9++;

 for (VAR_10 = 0; VAR_10 < 4; ++VAR_10) {
  if (FUNC_4(&VAR_9, &VAR_7[VAR_10]) != 0)
   break;
 }


 if (VAR_9 != ((void*)0) && *VAR_9 != '\0') {
  VAR_10 = 0;
 }

 switch (VAR_10) {
 case 1:
  if (VAR_7[0].ispath) {
   VAR_3->listen_path = FUNC_6(VAR_7[0].arg);
   VAR_3->listen_port = VAR_2;
  } else {
   VAR_3->listen_host = ((void*)0);
   VAR_3->listen_port = FUNC_0(VAR_7[0].arg);
  }
  VAR_3->connect_host = FUNC_6("socks");
  break;

 case 2:
  if (VAR_7[0].ispath && VAR_7[1].ispath) {
   VAR_3->listen_path = FUNC_6(VAR_7[0].arg);
   VAR_3->listen_port = VAR_2;
   VAR_3->connect_path = FUNC_6(VAR_7[1].arg);
   VAR_3->connect_port = VAR_2;
  } else if (VAR_7[1].ispath) {
   VAR_3->listen_host = ((void*)0);
   VAR_3->listen_port = FUNC_0(VAR_7[0].arg);
   VAR_3->connect_path = FUNC_6(VAR_7[1].arg);
   VAR_3->connect_port = VAR_2;
  } else {
   VAR_3->listen_host = FUNC_6(VAR_7[0].arg);
   VAR_3->listen_port = FUNC_0(VAR_7[1].arg);
   VAR_3->connect_host = FUNC_6("socks");
  }
  break;

 case 3:
  if (VAR_7[0].ispath) {
   VAR_3->listen_path = FUNC_6(VAR_7[0].arg);
   VAR_3->listen_port = VAR_2;
   VAR_3->connect_host = FUNC_6(VAR_7[1].arg);
   VAR_3->connect_port = FUNC_0(VAR_7[2].arg);
  } else if (VAR_7[2].ispath) {
   VAR_3->listen_host = FUNC_6(VAR_7[0].arg);
   VAR_3->listen_port = FUNC_0(VAR_7[1].arg);
   VAR_3->connect_path = FUNC_6(VAR_7[2].arg);
   VAR_3->connect_port = VAR_2;
  } else {
   VAR_3->listen_host = ((void*)0);
   VAR_3->listen_port = FUNC_0(VAR_7[0].arg);
   VAR_3->connect_host = FUNC_6(VAR_7[1].arg);
   VAR_3->connect_port = FUNC_0(VAR_7[2].arg);
  }
  break;

 case 4:
  VAR_3->listen_host = FUNC_6(VAR_7[0].arg);
  VAR_3->listen_port = FUNC_0(VAR_7[1].arg);
  VAR_3->connect_host = FUNC_6(VAR_7[2].arg);
  VAR_3->connect_port = FUNC_0(VAR_7[3].arg);
  break;
 default:
  VAR_10 = 0;
 }

 FUNC_1(VAR_8);

 if (VAR_5) {
  if (!(VAR_10 == 1 || VAR_10 == 2))
   goto fail_free;
 } else {
  if (!(VAR_10 == 3 || VAR_10 == 4)) {
   if (VAR_3->connect_path == ((void*)0) &&
       VAR_3->listen_path == ((void*)0))
    goto fail_free;
  }
  if (VAR_3->connect_port <= 0 && VAR_3->connect_path == ((void*)0))
   goto fail_free;
 }

 if ((VAR_3->listen_port < 0 && VAR_3->listen_path == ((void*)0)) ||
     (!VAR_6 && VAR_3->listen_port == 0))
  goto fail_free;
 if (VAR_3->connect_host != ((void*)0) &&
     FUNC_5(VAR_3->connect_host) >= VAR_0)
  goto fail_free;

 if (VAR_3->connect_path != ((void*)0) &&
     FUNC_5(VAR_3->connect_path) >= VAR_1)
  goto fail_free;
 if (VAR_3->listen_host != ((void*)0) &&
     FUNC_5(VAR_3->listen_host) >= VAR_0)
  goto fail_free;
 if (VAR_3->listen_path != ((void*)0) &&
     FUNC_5(VAR_3->listen_path) >= VAR_1)
  goto fail_free;

 return (VAR_10);

 fail_free:
 FUNC_1(VAR_3->connect_host);
 VAR_3->connect_host = ((void*)0);
 FUNC_1(VAR_3->connect_path);
 VAR_3->connect_path = ((void*)0);
 FUNC_1(VAR_3->listen_host);
 VAR_3->listen_host = ((void*)0);
 FUNC_1(VAR_3->listen_path);
 VAR_3->listen_path = ((void*)0);
 return (0);
}
