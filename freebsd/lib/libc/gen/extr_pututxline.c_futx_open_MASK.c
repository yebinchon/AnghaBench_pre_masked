
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct futx {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char const*,int,int) ;
 int VAR_5 ;
 int * FUNC_3 (int,char*) ;

__attribute__((used)) static FILE *
FUNC_4(const char *VAR_6)
{
 FILE *VAR_7;
 struct stat VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_6, VAR_2|VAR_4|VAR_3|VAR_1, 0644);
 if (VAR_9 < 0)
  return (((void*)0));


 if (FUNC_1(VAR_9, &VAR_8) != -1 && VAR_8.st_size % sizeof(struct futx) != 0) {
  FUNC_0(VAR_9);
  VAR_5 = VAR_0;
  return (((void*)0));
 }

 VAR_7 = FUNC_3(VAR_9, "r+");
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_9);
  return (((void*)0));
 }
 return (VAR_7);
}
