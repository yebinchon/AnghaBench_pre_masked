
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uintmax_t ;
struct archive_string {int dummy; } ;


 int FUNC_0 (struct archive_string*,char const) ;

__attribute__((used)) static void
FUNC_1(struct archive_string *VAR_0, uintmax_t VAR_1, unsigned VAR_2)
{
 static const char VAR_3[] = "0123456789abcdef";
 if (VAR_1 >= VAR_2)
  FUNC_1(VAR_0, VAR_1/VAR_2, VAR_2);
 FUNC_0(VAR_0, VAR_3[VAR_1 % VAR_2]);
}
