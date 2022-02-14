
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char const*,char const* const,int ) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, ssize_t VAR_1)
{
 static const char * const VAR_2[] = {
  "content", "contents", "cksum", ((void*)0)
 };
 static const char * const VAR_3[] = {
  "device", "flags", ((void*)0)
 };
 static const char * const VAR_4[] = {
  "gid", "gname", ((void*)0)
 };
 static const char * const VAR_5[] = {
  "ignore", "inode", "link", ((void*)0)
 };
 static const char * const VAR_6[] = {
  "md5", "md5digest", "mode", ((void*)0)
 };
 static const char * const VAR_7[] = {
  "nlink", "nochange", "optional", ((void*)0)
 };
 static const char * const VAR_8[] = {
  "resdevice", "rmd160", "rmd160digest", ((void*)0)
 };
 static const char * const VAR_9[] = {
  "sha1", "sha1digest",
  "sha256", "sha256digest",
  "sha384", "sha384digest",
  "sha512", "sha512digest",
  "size", ((void*)0)
 };
 static const char * const VAR_10[] = {
  "tags", "time", "type", ((void*)0)
 };
 static const char * const VAR_11[] = {
  "uid", "uname", ((void*)0)
 };
 const char * const *VAR_12;
 int VAR_13;

 switch (*VAR_0) {
 case 'c': VAR_12 = VAR_2; break;
 case 'd': case 'f': VAR_12 = VAR_3; break;
 case 'g': VAR_12 = VAR_4; break;
 case 'i': case 'l': VAR_12 = VAR_5; break;
 case 'm': VAR_12 = VAR_6; break;
 case 'n': case 'o': VAR_12 = VAR_7; break;
 case 'r': VAR_12 = VAR_8; break;
 case 's': VAR_12 = VAR_9; break;
 case 't': VAR_12 = VAR_10; break;
 case 'u': VAR_12 = VAR_11; break;
 default: return (0);
 }

 for (VAR_13 = 0; VAR_12[VAR_13] != ((void*)0); VAR_13++) {
  int VAR_14 = FUNC_0(VAR_0, VAR_12[VAR_13], VAR_1);
  if (VAR_14 > 0)
   return (VAR_14);
 }
 return (0);
}
