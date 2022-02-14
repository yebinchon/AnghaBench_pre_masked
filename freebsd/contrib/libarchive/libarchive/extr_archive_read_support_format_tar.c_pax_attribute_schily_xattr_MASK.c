
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;


 int FUNC_0 (struct archive_entry*,char const*,char const*,size_t) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(struct archive_entry *VAR_0,
 const char *VAR_1, const char *VAR_2, size_t VAR_3)
{
 if (FUNC_2(VAR_1) < 14 || (FUNC_1(VAR_1, "SCHILY.xattr.", 13)) != 0)
  return 1;

 VAR_1 += 13;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 return 0;
}
