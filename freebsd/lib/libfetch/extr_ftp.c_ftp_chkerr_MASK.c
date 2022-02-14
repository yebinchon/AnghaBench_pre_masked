
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; int buflen; int err; } ;
typedef TYPE_1__ conn_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned char) ;

__attribute__((used)) static int
FUNC_6(conn_t *VAR_1)
{
 if (FUNC_0(VAR_1) == -1) {
  FUNC_1();
  return (-1);
 }
 if (FUNC_3(VAR_1->buf)) {
  while (VAR_1->buflen && !FUNC_4(VAR_1->buf)) {
   if (FUNC_0(VAR_1) == -1) {
    FUNC_1();
    return (-1);
   }
  }
 }

 while (VAR_1->buflen &&
     FUNC_5((unsigned char)VAR_1->buf[VAR_1->buflen - 1]))
  VAR_1->buflen--;
 VAR_1->buf[VAR_1->buflen] = '\0';

 if (!FUNC_4(VAR_1->buf)) {
  FUNC_2(VAR_0);
  return (-1);
 }

 VAR_1->err = (VAR_1->buf[0] - '0') * 100
     + (VAR_1->buf[1] - '0') * 10
     + (VAR_1->buf[2] - '0');

 return (VAR_1->err);
}
