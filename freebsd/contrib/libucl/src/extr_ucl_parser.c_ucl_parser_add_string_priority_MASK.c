
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_parser {int err; } ;


 size_t FUNC_0 (char const*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ucl_parser*,unsigned char const*,size_t,unsigned int) ;

bool
FUNC_3 (struct ucl_parser *VAR_0, const char *VAR_1,
  size_t VAR_2, unsigned VAR_3)
{
 if (VAR_1 == ((void*)0)) {
  FUNC_1 (&VAR_0->err, "invalid string added");
  return 0;
 }
 if (VAR_2 == 0) {
  VAR_2 = FUNC_0 (VAR_1);
 }

 return FUNC_2 (VAR_0,
   (const unsigned char *)VAR_1, VAR_2, VAR_3);
}
