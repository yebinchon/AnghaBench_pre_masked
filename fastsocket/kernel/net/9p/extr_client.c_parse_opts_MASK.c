
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct p9_client {int dotu; int msize; int trans_mod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (char*,int ,int *) ;
 char* FUNC_5 (char**,char*) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(char *VAR_5, struct p9_client *VAR_6)
{
 char *VAR_7;
 char *VAR_8;
 substring_t VAR_9[VAR_2];
 int VAR_10;
 int VAR_11 = 0;

 VAR_6->dotu = 1;
 VAR_6->msize = 8192;

 if (!VAR_5)
  return 0;

 VAR_7 = FUNC_2(VAR_5, VAR_1);
 if (!VAR_7) {
  FUNC_0(VAR_3,
    "failed to allocate copy of option string\n");
  return -VAR_0;
 }

 while ((VAR_8 = FUNC_5(&VAR_7, ",")) != ((void*)0)) {
  int VAR_12;
  if (!*VAR_8)
   continue;
  VAR_12 = FUNC_4(VAR_8, VAR_4, VAR_9);
  if (VAR_12 < 128) {
   int VAR_13 = FUNC_3(&VAR_9[0], &VAR_10);
   if (VAR_13 < 0) {
    FUNC_0(VAR_3,
     "integer field, but no integer?\n");
    VAR_11 = VAR_13;
    continue;
   }
  }
  switch (VAR_12) {
  case 129:
   VAR_6->msize = VAR_10;
   break;
  case 128:
   VAR_6->trans_mod = FUNC_6(&VAR_9[0]);
   break;
  case 130:
   VAR_6->dotu = 0;
   break;
  default:
   continue;
  }
 }

 FUNC_1(VAR_7);
 return VAR_11;
}
