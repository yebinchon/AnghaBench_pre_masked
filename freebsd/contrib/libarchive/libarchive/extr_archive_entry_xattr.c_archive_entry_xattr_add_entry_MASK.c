
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {struct ae_xattr* xattr_head; } ;
struct ae_xattr {size_t size; struct ae_xattr* next; int * value; int * name; } ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int * FUNC_3 (char const*) ;

void
FUNC_4(struct archive_entry *VAR_0,
 const char *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct ae_xattr *VAR_4;

 if ((VAR_4 = (struct ae_xattr *)FUNC_1(sizeof(struct ae_xattr))) == ((void*)0))
  FUNC_0(1, "Out of memory");

 if ((VAR_4->name = FUNC_3(VAR_1)) == ((void*)0))
  FUNC_0(1, "Out of memory");

 if ((VAR_4->value = FUNC_1(VAR_3)) != ((void*)0)) {
  FUNC_2(VAR_4->value, VAR_2, VAR_3);
  VAR_4->size = VAR_3;
 } else
  VAR_4->size = 0;

 VAR_4->next = VAR_0->xattr_head;
 VAR_0->xattr_head = VAR_4;
}
