
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;


 int FUNC_0 (struct archive_entry*,char*,void*,size_t) ;
 void* FUNC_1 (char const*,int,size_t*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(struct archive_entry *VAR_0,
 const char *VAR_1, const char *VAR_2)
{
 char *VAR_3;
 void *VAR_4;
 size_t VAR_5;

 if (FUNC_4(VAR_1) < 18 || (FUNC_3(VAR_1, "LIBARCHIVE.xattr.", 17)) != 0)
  return 3;

 VAR_1 += 17;


 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3 == ((void*)0))
  return 2;


 VAR_4 = FUNC_1(VAR_2, FUNC_4(VAR_2), &VAR_5);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_3);
  return 1;
 }

 FUNC_0(VAR_0, VAR_3,
  VAR_4, VAR_5);

 FUNC_2(VAR_3);
 FUNC_2(VAR_4);
 return 0;
}
