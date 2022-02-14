
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpio {int eof; scalar_t__ chunked; char* buf; int buflen; size_t chunksize; int conn; scalar_t__ bufpos; void* error; } ;
typedef int ssize_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct httpio*,size_t) ;
 int FUNC_2 (struct httpio*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct httpio *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;
 char VAR_5;

 if (VAR_2->error)
  return (-1);
 if (VAR_2->eof)
  return (0);


 if (VAR_2->chunked == 0) {
  if (FUNC_1(VAR_2, VAR_3) == -1)
   return (-1);
  if ((VAR_4 = FUNC_0(VAR_2->conn, VAR_2->buf, VAR_3)) == -1) {
   VAR_2->error = VAR_1;
   return (-1);
  }
  VAR_2->buflen = VAR_4;
  VAR_2->bufpos = 0;
  return (VAR_2->buflen);
 }


 if (VAR_2->chunksize == 0) {
  switch (FUNC_2(VAR_2)) {
  case -1:
   VAR_2->error = VAR_0;
   return (-1);
  case 0:
   VAR_2->eof = 1;
   return (0);
  }
 }


 if (VAR_3 > VAR_2->chunksize)
  VAR_3 = VAR_2->chunksize;
 if (FUNC_1(VAR_2, VAR_3) == -1)
  return (-1);
 if ((VAR_4 = FUNC_0(VAR_2->conn, VAR_2->buf, VAR_3)) == -1) {
  VAR_2->error = VAR_1;
  return (-1);
 }
 VAR_2->bufpos = 0;
 VAR_2->buflen = VAR_4;
 VAR_2->chunksize -= VAR_4;

 if (VAR_2->chunksize == 0) {
  if (FUNC_0(VAR_2->conn, &VAR_5, 1) != 1 || VAR_5 != '\r' ||
      FUNC_0(VAR_2->conn, &VAR_5, 1) != 1 || VAR_5 != '\n')
   return (-1);
 }

 return (VAR_2->buflen);
}
