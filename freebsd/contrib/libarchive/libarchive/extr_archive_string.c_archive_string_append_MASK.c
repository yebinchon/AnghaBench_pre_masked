
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {size_t length; scalar_t__* s; } ;


 int * FUNC_0 (struct archive_string*,size_t) ;
 int FUNC_1 (scalar_t__*,char const*,size_t) ;

__attribute__((used)) static struct archive_string *
FUNC_2(struct archive_string *VAR_0, const char *VAR_1, size_t VAR_2)
{
 if (FUNC_0(VAR_0, VAR_0->length + VAR_2 + 1) == ((void*)0))
  return (((void*)0));
 if (VAR_2)
  FUNC_1(VAR_0->s + VAR_0->length, VAR_1, VAR_2);
 VAR_0->length += VAR_2;
 VAR_0->s[VAR_0->length] = 0;
 return (VAR_0);
}
