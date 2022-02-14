
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {char* buf; size_t bufsize; size_t buflen; } ;
typedef TYPE_1__ conn_t ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;

int
FUNC_4(conn_t *VAR_3)
{
 char *VAR_4;
 size_t VAR_5;
 ssize_t VAR_6;
 char VAR_7;

 if (VAR_3->buf == ((void*)0)) {
  if ((VAR_3->buf = FUNC_2(VAR_1)) == ((void*)0)) {
   VAR_2 = VAR_0;
   return (-1);
  }
  VAR_3->bufsize = VAR_1;
 }

 VAR_3->buf[0] = '\0';
 VAR_3->buflen = 0;

 do {
  VAR_6 = FUNC_1(VAR_3, &VAR_7, 1);
  if (VAR_6 == -1)
   return (-1);
  if (VAR_6 == 0)
   break;
  VAR_3->buf[VAR_3->buflen++] = VAR_7;
  if (VAR_3->buflen == VAR_3->bufsize) {
   VAR_4 = VAR_3->buf;
   VAR_5 = VAR_3->bufsize * 2 + 1;
   if ((VAR_4 = FUNC_3(VAR_4, VAR_5)) == ((void*)0)) {
    VAR_2 = VAR_0;
    return (-1);
   }
   VAR_3->buf = VAR_4;
   VAR_3->bufsize = VAR_5;
  }
 } while (VAR_7 != '\n');

 VAR_3->buf[VAR_3->buflen] = '\0';
 FUNC_0("<<< %s", VAR_3->buf);
 return (0);
}
