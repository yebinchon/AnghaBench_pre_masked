
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {int dummy; } ;


 int FUNC_0 (int,char*) ;
 struct archive_string* FUNC_1 (struct archive_string*,char const*,size_t) ;

struct archive_string *
FUNC_2(struct archive_string *VAR_0, const void *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 const char *VAR_4, *VAR_5;

 VAR_4 = (const char *)VAR_1;


 VAR_3 = 0;
 VAR_5 = VAR_4;
 while (VAR_3 < VAR_2 && *VAR_5) {
  VAR_5++;
  VAR_3++;
 }
 if ((VAR_0 = FUNC_1(VAR_0, VAR_4, VAR_3)) == ((void*)0))
  FUNC_0(1, "Out of memory");
 return (VAR_0);
}
