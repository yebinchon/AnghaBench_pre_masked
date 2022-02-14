
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {int recvlen; char* recvbuf; char* url; char* protocol; int flags; scalar_t__* querystring; int method; } ;
typedef TYPE_1__ isc_httpd_t ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static isc_result_t
FUNC_8(isc_httpd_t *VAR_8, int VAR_9)
{
 char *VAR_10;
 char *VAR_11;
 int VAR_12;

 FUNC_1("request");

 VAR_8->recvlen += VAR_9;

 VAR_8->recvbuf[VAR_8->recvlen] = 0;





 VAR_10 = FUNC_7(VAR_8->recvbuf, "\r\n\r\n");
 VAR_12 = 1;
 if (VAR_10 == ((void*)0)) {
  VAR_10 = FUNC_7(VAR_8->recvbuf, "\n\n");
  VAR_12 = 2;
 }
 if (VAR_10 == ((void*)0))
  return (VAR_5);





 if (FUNC_6(VAR_8->recvbuf, "GET ", 4) == 0) {
  VAR_8->method = VAR_2;
  VAR_11 = VAR_8->recvbuf + 4;
 } else if (FUNC_6(VAR_8->recvbuf, "POST ", 5) == 0) {
  VAR_8->method = VAR_3;
  VAR_11 = VAR_8->recvbuf + 5;
 } else {
  return (VAR_6);
 }
 VAR_10 = VAR_11;
 while (FUNC_3(VAR_10) && FUNC_0(VAR_10) &&
        (*VAR_10 != '\n' && *VAR_10 != '\r' && *VAR_10 != '\0' && *VAR_10 != ' '))
  VAR_10++;
 if (!FUNC_3(VAR_10))
  return (VAR_5);
 if (!FUNC_0(VAR_10))
  return (VAR_4);
 *VAR_10 = 0;




 if ((FUNC_6(VAR_11, "http:/", 6) == 0)
     || (FUNC_6(VAR_11, "https:/", 7) == 0)) {

  while (*VAR_11 != '/' && *VAR_11 != 0)
   VAR_11++;
  if (*VAR_11 == 0)
   return (VAR_6);
  VAR_11++;

  while (*VAR_11 != '/' && *VAR_11 != 0)
   VAR_11++;
  if (*VAR_11 == 0)
   return (VAR_6);
  VAR_11++;

  while (*VAR_11 != '/' && *VAR_11 != 0)
   VAR_11++;
  if (*VAR_11 == 0) {
   VAR_11--;
   *VAR_11 = '/';
  }
 }

 VAR_8->url = VAR_11;
 VAR_11 = VAR_10 + VAR_12;
 VAR_10 = VAR_11;





 VAR_8->querystring = FUNC_4(VAR_8->url, '?');
 if (VAR_8->querystring != ((void*)0)) {
  *(VAR_8->querystring) = 0;
  VAR_8->querystring++;
 }





 while (FUNC_3(VAR_10) && FUNC_0(VAR_10) &&
        (*VAR_10 != '\n' && *VAR_10 != '\r' && *VAR_10 != '\0'))
  VAR_10++;
 if (!FUNC_3(VAR_10))
  return (VAR_5);
 if (!FUNC_0(VAR_10))
  return (VAR_4);
 *VAR_10 = 0;
 if ((FUNC_6(VAR_11, "HTTP/1.0", 8) != 0)
     && (FUNC_6(VAR_11, "HTTP/1.1", 8) != 0))
  return (VAR_6);
 VAR_8->protocol = VAR_11;
 VAR_11 = VAR_10 + 1;
 VAR_10 = VAR_11;

 if (FUNC_7(VAR_10, "Connection: close") != ((void*)0))
  VAR_8->flags |= VAR_0;

 if (FUNC_7(VAR_10, "Host: ") != ((void*)0))
  VAR_8->flags |= VAR_1;




 if (FUNC_5(VAR_8->protocol, "HTTP/1.1") == 0
     && ((VAR_8->flags & VAR_1) == 0))
  return (VAR_6);

 FUNC_2("request");

 return (VAR_7);
}
