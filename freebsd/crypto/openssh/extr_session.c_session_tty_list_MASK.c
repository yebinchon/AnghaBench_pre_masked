
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ttyfd; char* tty; scalar_t__ used; } ;
typedef TYPE_1__ Session ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static char *
FUNC_4(void)
{
 static char VAR_2[1024];
 int VAR_3;
 char *VAR_4;

 VAR_2[0] = '\0';
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  Session *VAR_5 = &VAR_0[VAR_3];
  if (VAR_5->used && VAR_5->ttyfd != -1) {

   if (FUNC_2(VAR_5->tty, "/dev/", 5) != 0) {
    VAR_4 = FUNC_3(VAR_5->tty, '/');
    VAR_4 = (VAR_4 == ((void*)0)) ? VAR_5->tty : VAR_4 + 1;
   } else
    VAR_4 = VAR_5->tty + 5;

   if (VAR_2[0] != '\0')
    FUNC_0(VAR_2, ",", sizeof VAR_2);
   FUNC_0(VAR_2, VAR_4, sizeof VAR_2);
  }
 }
 if (VAR_2[0] == '\0')
  FUNC_1(VAR_2, "notty", sizeof VAR_2);
 return VAR_2;
}
