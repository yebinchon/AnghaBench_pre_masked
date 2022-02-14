
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int flags; } ;
typedef size_t ssize_t ;


 unsigned char* FUNC_0 (size_t) ;
 int VAR_0 ;
 char* FUNC_1 (struct ucl_parser*,char const*,int,size_t*,int*) ;
 char* FUNC_2 (struct ucl_parser*,char const*,int,unsigned char**) ;

__attribute__((used)) static ssize_t
FUNC_3 (struct ucl_parser *VAR_1, unsigned char **VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 const char *VAR_5, *VAR_6 = VAR_3 + VAR_4;
 unsigned char *VAR_7;
 size_t VAR_8 = 0;
 bool VAR_9 = 0;

 if (VAR_1->flags & VAR_0) {
  *VAR_2 = ((void*)0);
  return VAR_4;
 }

 VAR_5 = VAR_3;
 while (VAR_5 != VAR_6) {
  if (*VAR_5 == '$') {
   VAR_5 = FUNC_1 (VAR_1, VAR_5 + 1, VAR_6 - VAR_5 - 1, &VAR_8, &VAR_9);
  }
  else {
   VAR_5 ++;
   VAR_8 ++;
  }
 }

 if (!VAR_9) {

  *VAR_2 = ((void*)0);
  return VAR_4;
 }

 *VAR_2 = FUNC_0 (VAR_8 + 1);
 if (*VAR_2 == ((void*)0)) {
  return VAR_4;
 }

 VAR_7 = *VAR_2;
 VAR_5 = VAR_3;
 while (VAR_5 != VAR_6) {
  if (*VAR_5 == '$') {
   VAR_5 = FUNC_2 (VAR_1, VAR_5, VAR_6 - VAR_5, &VAR_7);
  }
  else {
   *VAR_7++ = *VAR_5++;
  }
 }

 *VAR_7 = '\0';

 return VAR_8;
}
