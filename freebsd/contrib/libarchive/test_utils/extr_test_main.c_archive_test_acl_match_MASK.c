
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_test_acl_t {int type; int permset; int tag; int qual; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(struct archive_test_acl_t *VAR_4, int VAR_5, int VAR_6,
    int VAR_7, int VAR_8, const char *VAR_9)
{
 if (VAR_5 != VAR_4->type)
  return (0);
 if (VAR_6 != VAR_4->permset)
  return (0);
 if (VAR_7 != VAR_4->tag)
  return (0);
 if (VAR_7 == VAR_3)
  return (1);
 if (VAR_7 == VAR_1)
  return (1);
 if (VAR_7 == VAR_0)
  return (1);
 if (VAR_7 == VAR_2)
  return (1);
 if (VAR_8 != VAR_4->qual)
  return (0);
 if (VAR_9 == ((void*)0)) {
  if (VAR_4->name == ((void*)0) || VAR_4->name[0] == '\0')
   return (1);
  return (0);
 }
 if (VAR_4->name == ((void*)0)) {
  if (VAR_9[0] == '\0')
   return (1);
  return (0);
 }
 return (0 == FUNC_0(VAR_9, VAR_4->name));
}
