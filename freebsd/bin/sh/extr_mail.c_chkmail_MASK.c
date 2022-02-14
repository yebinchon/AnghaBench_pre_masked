
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mtime; scalar_t__ st_size; } ;
struct stackmark {int dummy; } ;


 scalar_t__* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (char) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct stackmark*) ;
 int FUNC_6 (struct stackmark*) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char*,char) ;
 char* FUNC_10 (int ) ;

void
FUNC_11(int VAR_2)
{
 int VAR_3;
 char *VAR_4;
 char *VAR_5;
 char *VAR_6;
 struct stackmark VAR_7;
 struct stat VAR_8;

 if (VAR_2)
  VAR_1 = 10;
 if (VAR_1 == 0)
  return;
 FUNC_6(&VAR_7);
 VAR_4 = FUNC_10(FUNC_1()? FUNC_2() : FUNC_0());
 for (VAR_3 = 0 ; VAR_3 < VAR_1 ; VAR_3++) {
  VAR_5 = VAR_4;
  if (*VAR_5 == '\0')
   break;
  VAR_4 = FUNC_9(VAR_4, ':');
  if (*VAR_4 != '\0') {
   *VAR_4++ = '\0';
   if (VAR_5 == VAR_4 - 1)
    continue;
  }
  VAR_6 = FUNC_8(VAR_5, '%');
  if (VAR_6 != ((void*)0))
   *VAR_6++ = '\0';
  if (FUNC_7(VAR_5, &VAR_8) < 0)
   VAR_8.st_size = 0;
  if (VAR_8.st_size > VAR_0[VAR_3] && ! VAR_2) {
   FUNC_4(VAR_6? VAR_6 : "you have mail");
   FUNC_3('\n');
  }
  VAR_0[VAR_3] = VAR_8.st_size;

 }
 VAR_1 = VAR_3;
 FUNC_5(&VAR_7);
}
