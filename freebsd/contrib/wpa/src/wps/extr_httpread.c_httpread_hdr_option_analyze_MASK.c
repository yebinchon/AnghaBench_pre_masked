
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpread {scalar_t__ content_length; scalar_t__ max_bytes; int got_content_length; int chunked; scalar_t__ in_chunk_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(
 struct httpread *VAR_1,
 char *VAR_2
 )
{
 if (FUNC_3(VAR_2, "CONTENT-LENGTH:")) {
  while (FUNC_2(*VAR_2))
   VAR_2++;
  while (*VAR_2 == ' ' || *VAR_2 == '\t')
   VAR_2++;
  if (!FUNC_1(*VAR_2))
   return -1;
  VAR_1->content_length = FUNC_0(VAR_2);
  if (VAR_1->content_length < 0 || VAR_1->content_length > VAR_1->max_bytes) {
   FUNC_4(VAR_0,
       "httpread: Unacceptable Content-Length %d",
       VAR_1->content_length);
   return -1;
  }
  VAR_1->got_content_length = 1;
  return 0;
 }
 if (FUNC_3(VAR_2, "TRANSFER_ENCODING:") ||
     FUNC_3(VAR_2, "TRANSFER-ENCODING:")) {
  while (FUNC_2(*VAR_2))
   VAR_2++;
  while (*VAR_2 == ' ' || *VAR_2 == '\t')
   VAR_2++;



  if (FUNC_3(VAR_2, "CHUNKED")) {
   VAR_1->chunked = 1;
   VAR_1->in_chunk_data = 0;

  }
  return 0;
 }

 return 0;
}
