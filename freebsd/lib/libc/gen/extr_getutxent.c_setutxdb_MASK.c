
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct futx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int ,struct stat*) ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int *,int ,int ) ;
 int VAR_8 ;
 int * VAR_9 ;

int
FUNC_6(int VAR_10, const char *VAR_11)
{
 struct stat VAR_12;

 switch (VAR_10) {
 case 130:
  if (VAR_11 == ((void*)0))
   VAR_11 = VAR_4;
  break;
 case 129:
  if (VAR_11 == ((void*)0))
   VAR_11 = VAR_5;
  break;
 case 128:
  if (VAR_11 == ((void*)0))
   VAR_11 = VAR_6;
  break;
 default:
  VAR_7 = VAR_2;
  return (-1);
 }

 if (VAR_9 != ((void*)0))
  FUNC_1(VAR_9);
 VAR_9 = FUNC_3(VAR_11, "re");
 if (VAR_9 == ((void*)0))
  return (-1);

 if (VAR_10 != 128) {

  if (FUNC_0(FUNC_2(VAR_9), &VAR_12) != -1 &&
      VAR_12.st_size % sizeof(struct futx) != 0) {
   FUNC_1(VAR_9);
   VAR_9 = ((void*)0);
   VAR_7 = VAR_1;
   return (-1);
  }

  (void)FUNC_5(VAR_9, ((void*)0), VAR_3,
      FUNC_4(VAR_0, sizeof(struct futx)));
 }

 VAR_8 = VAR_10;
 return (0);
}
