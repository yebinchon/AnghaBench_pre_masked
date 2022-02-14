
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int name; struct file_info* parent; } ;
struct archive_string {char const* s; } ;


 int FUNC_0 (struct archive_string*,char*) ;
 int FUNC_1 (struct archive_string*,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static const char *
FUNC_3(struct archive_string *VAR_0, struct file_info *VAR_1, int VAR_2)
{


 if (VAR_2 > 1000) {
  return ((void*)0);
 }
 if (VAR_1->parent != ((void*)0) && FUNC_2(&VAR_1->parent->name) > 0) {
  if (FUNC_3(VAR_0, VAR_1->parent, VAR_2 + 1) == ((void*)0)) {
   return ((void*)0);
  }
  FUNC_0(VAR_0, "/");
 }
 if (FUNC_2(&VAR_1->name) == 0)
  FUNC_0(VAR_0, ".");
 else
  FUNC_1(VAR_0, &VAR_1->name);
 return (VAR_0->s);
}
