
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct p9_fd_opts {int port; int rfd; int wfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (char*,int ,int *) ;
 char* FUNC_5 (char**,char*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(char *VAR_7, struct p9_fd_opts *VAR_8)
{
 char *VAR_9;
 substring_t VAR_10[VAR_2];
 int VAR_11;
 char *VAR_12;
 int VAR_13;

 VAR_8->port = VAR_5;
 VAR_8->rfd = ~0;
 VAR_8->wfd = ~0;

 if (!VAR_7)
  return 0;

 VAR_12 = FUNC_2(VAR_7, VAR_1);
 if (!VAR_12) {
  FUNC_0(VAR_4,
    "failed to allocate copy of option string\n");
  return -VAR_0;
 }

 while ((VAR_9 = FUNC_5(&VAR_12, ",")) != ((void*)0)) {
  int VAR_14;
  int VAR_15;
  if (!*VAR_9)
   continue;
  VAR_14 = FUNC_4(VAR_9, VAR_6, VAR_10);
  if (VAR_14 != VAR_3) {
   VAR_15 = FUNC_3(&VAR_10[0], &VAR_11);
   if (VAR_15 < 0) {
    FUNC_0(VAR_4,
    "integer field, but no integer?\n");
    VAR_13 = VAR_15;
    continue;
   }
  }
  switch (VAR_14) {
  case 130:
   VAR_8->port = VAR_11;
   break;
  case 129:
   VAR_8->rfd = VAR_11;
   break;
  case 128:
   VAR_8->wfd = VAR_11;
   break;
  default:
   continue;
  }
 }
 FUNC_1(VAR_12);
 return 0;
}
