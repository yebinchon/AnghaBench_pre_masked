
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char const*,unsigned char const*) ;
 int FUNC_1 (unsigned char const**,unsigned char const*,size_t*,size_t) ;
 int FUNC_2 (unsigned char const**,unsigned char const*) ;
 unsigned char* FUNC_3 (unsigned char const*,unsigned char const*) ;

__attribute__((used)) static int
FUNC_4(const unsigned char **VAR_0, const unsigned char *VAR_1,
 size_t *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4 = *VAR_0;
 FUNC_0("Parse object: ", VAR_4, *VAR_0);
 while (VAR_4 < VAR_1) {
  VAR_4 = FUNC_3(VAR_4, VAR_1);
  if (VAR_4 == VAR_1)
   goto out;
  if (*VAR_4++ != '"') {
   FUNC_0("not string", VAR_4, *VAR_0);
   goto out;
  }
  FUNC_0("next field", VAR_4, *VAR_0);
  if (!FUNC_2(&VAR_4, VAR_1)) {
   FUNC_0("not string", VAR_4, *VAR_0);
   goto out;
  }
  VAR_4 = FUNC_3(VAR_4, VAR_1);
  if (VAR_4 == VAR_1)
   goto out;
  if (*VAR_4++ != ':') {
   FUNC_0("not colon", VAR_4, *VAR_0);
   goto out;
  }
  if (!FUNC_1(&VAR_4, VAR_1, VAR_2, VAR_3 + 1)) {
   FUNC_0("not json", VAR_4, *VAR_0);
   goto out;
  }
  if (VAR_4 == VAR_1)
   goto out;
  switch (*VAR_4++) {
  case ',':
   continue;
  case '}':
   *VAR_0 = VAR_4;
   FUNC_0("Good object: ", VAR_4, *VAR_0);
   return 1;
  default:
   *VAR_0 = VAR_4 - 1;
   FUNC_0("not more", VAR_4, *VAR_0);
   goto out;
  }
 }
out:
 FUNC_0("Bad object: ", VAR_4, *VAR_0);
 *VAR_0 = VAR_4;
 return 0;
}
