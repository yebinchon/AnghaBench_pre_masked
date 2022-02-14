
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int member_0; char const* str; int len; int * member_1; } ;
typedef TYPE_1__ warc_string_t ;
typedef int _key ;


 char* FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char const*,char*,unsigned int) ;
 char* FUNC_3 (char const*,int,char const*,unsigned int) ;

__attribute__((used)) static warc_string_t
FUNC_4(const char *VAR_0, size_t VAR_1)
{
 static const char VAR_2[] = "\r\nWARC-Target-URI:";
 const char *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 warc_string_t VAR_7 = {0U, ((void*)0)};

 if ((VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2, sizeof(VAR_2) - 1U)) == ((void*)0)) {

  return VAR_7;
 }

 VAR_3 += sizeof(VAR_2) - 1U;
 if ((VAR_5 = FUNC_0(VAR_3, VAR_0 + VAR_1 - VAR_3)) == ((void*)0)) {

  return VAR_7;
 }

 while (VAR_3 < VAR_5 && (*VAR_3 == ' ' || *VAR_3 == '\t'))
  ++VAR_3;


 if ((VAR_4 = FUNC_3(VAR_3, VAR_5 - VAR_3, "://", 3U)) == ((void*)0)) {

  return VAR_7;
 }


 for (VAR_6 = VAR_3; VAR_6 < VAR_5; VAR_6++) {
  if (FUNC_1((unsigned char)*VAR_6))
   return VAR_7;
 }


 if (VAR_4 < (VAR_3 + 3U))
  return VAR_7;


 VAR_4 += 3U;


 if (FUNC_2(VAR_3, "file", 4U) == 0) {


 } else if (FUNC_2(VAR_3, "http", 4U) == 0 ||
     FUNC_2(VAR_3, "ftp", 3U) == 0) {

  while (VAR_4 < VAR_5 && *VAR_4++ != '/');
 } else {

  return VAR_7;
 }
 VAR_7.str = VAR_4;
 VAR_7.len = VAR_5 - VAR_4;
 return VAR_7;
}
