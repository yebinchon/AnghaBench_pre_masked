
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct suffix_code_t {char* member_0; char* member_1; } ;


 char const* FUNC_0 (struct suffix_code_t const*,char const*) ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_0)
{

 static const struct suffix_code_t VAR_1[] = {
  { ".7z", "7zip" },
  { ".ar", "arbsd" },
  { ".cpio", "cpio" },
  { ".iso", "iso9960" },
  { ".mtree", "mtree" },
  { ".shar", "shar" },
  { ".tar", "paxr" },
  { ".warc", "warc" },
  { ".xar", "xar" },
  { ".zip", "zip" },
  { ((void*)0), ((void*)0) }
 };

 return FUNC_0(VAR_1, VAR_0);
}
