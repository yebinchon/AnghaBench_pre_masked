
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpread {char* hdr; int hdr_type; int version; int reply_code; char* uri; scalar_t__ chunked; scalar_t__ got_content_length; int max_bytes; } ;
 int VAR_0 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct httpread*,char*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 char* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(struct httpread *VAR_1)
{
 char *VAR_2 = VAR_1->hdr;
 int VAR_3 = 1;


 VAR_1->hdr_type = VAR_0;
 if (!FUNC_4(*VAR_2))
  goto bad;
 if (FUNC_7(VAR_2, "HTTP/", 5) == 0) {
  VAR_1->hdr_type = 131;
  VAR_3 = 0;
  VAR_2 += 5;
  if (VAR_2[0] == '1' && VAR_2[1] == '.' &&
      FUNC_3(VAR_2[2]) && VAR_2[2] != '0')
   VAR_1->version = 1;
  while (FUNC_4(*VAR_2))
   VAR_2++;
  while (*VAR_2 == ' ' || *VAR_2 == '\t')
   VAR_2++;
  if (!FUNC_3(*VAR_2))
   goto bad;
  VAR_1->reply_code = FUNC_0(VAR_2);
 } else if (FUNC_9(VAR_2, "GET"))
  VAR_1->hdr_type = 138;
 else if (FUNC_9(VAR_2, "HEAD"))
  VAR_1->hdr_type = 137;
 else if (FUNC_9(VAR_2, "POST"))
  VAR_1->hdr_type = 133;
 else if (FUNC_9(VAR_2, "PUT"))
  VAR_1->hdr_type = 132;
 else if (FUNC_9(VAR_2, "DELETE"))
  VAR_1->hdr_type = 139;
 else if (FUNC_9(VAR_2, "TRACE"))
  VAR_1->hdr_type = 129;
 else if (FUNC_9(VAR_2, "CONNECT"))
  VAR_1->hdr_type = 140;
 else if (FUNC_9(VAR_2, "NOTIFY"))
  VAR_1->hdr_type = 134;
 else if (FUNC_9(VAR_2, "M-SEARCH"))
  VAR_1->hdr_type = 135;
 else if (FUNC_9(VAR_2, "M-POST"))
  VAR_1->hdr_type = 136;
 else if (FUNC_9(VAR_2, "SUBSCRIBE"))
  VAR_1->hdr_type = 130;
 else if (FUNC_9(VAR_2, "UNSUBSCRIBE"))
  VAR_1->hdr_type = 128;
 else {
 }

 if (VAR_3) {
  char *VAR_4;
  char *VAR_5;

  while (FUNC_4(*VAR_2))
   VAR_2++;
  while (*VAR_2 == ' ' || *VAR_2 == '\t')
   VAR_2++;





  VAR_4 = VAR_2;
  while (FUNC_4(*VAR_2))
   VAR_2++;
  VAR_1->uri = FUNC_6((VAR_2 - VAR_4) + 1);
  if (VAR_1->uri == ((void*)0))
   goto bad;
  VAR_5 = VAR_1->uri;
  while (VAR_4 < VAR_2) {
   int VAR_6 = *VAR_4;
   if (VAR_6 == '%' &&
       FUNC_5(VAR_4[1]) && FUNC_5(VAR_4[2])) {
    *VAR_5++ = FUNC_1(VAR_4 + 1);
    VAR_4 += 3;
   } else {
    *VAR_5++ = VAR_6;
    VAR_4++;
   }
  }
  *VAR_5 = 0;
  while (*VAR_2 == ' ' || *VAR_2 == '\t')
   VAR_2++;

  if (0 == FUNC_8(VAR_2, "HTTP/", 5)) {
   VAR_2 += 5;
   if (VAR_2[0] == '1' && VAR_2[1] == '.' &&
       FUNC_3(VAR_2[2]) && VAR_2[2] != '0')
    VAR_1->version = 1;
  }
 }

 while (*VAR_2)
  if (*VAR_2++ == '\n')
   break;




 for (;;) {

  if (VAR_2[0] == '\n' ||
      (VAR_2[0] == '\r' && VAR_2[1] == '\n'))
   break;
  if (!FUNC_4(*VAR_2))
   goto bad;
  if (FUNC_2(VAR_1, VAR_2))
   goto bad;

  while (*VAR_2)
   if (*VAR_2++ == '\n')
    break;
 }


 if (VAR_1->chunked)
  VAR_1->got_content_length = 0;





 switch (VAR_1->hdr_type) {
 case 131:




  if (VAR_1->reply_code != 200)
   VAR_1->max_bytes = 0;
  break;
 case 138:
 case 137:



  if (VAR_1->chunked == 0 && VAR_1->got_content_length == 0)
   VAR_1->max_bytes = 0;
  break;
 case 133:
 case 132:
 case 139:
 case 129:
 case 140:
 case 134:
 case 135:
 case 136:
 case 130:
 case 128:
 default:
  break;
 }

 return 0;

bad:

 return -1;
}
