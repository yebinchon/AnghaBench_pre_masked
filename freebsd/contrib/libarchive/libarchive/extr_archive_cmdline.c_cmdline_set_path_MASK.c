
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_cmdline {char* path; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(struct archive_cmdline *VAR_2, const char *VAR_3)
{
 char *VAR_4;

 VAR_4 = FUNC_0(VAR_2->path, FUNC_2(VAR_3) + 1);
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 VAR_2->path = VAR_4;
 FUNC_1(VAR_2->path, VAR_3);
 return (VAR_1);
}
