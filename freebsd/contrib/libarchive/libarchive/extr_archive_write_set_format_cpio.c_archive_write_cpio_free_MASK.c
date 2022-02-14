
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpio {struct cpio* ino_list; } ;
struct archive_write {int * format_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpio*) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_1)
{
 struct cpio *VAR_2;

 VAR_2 = (struct cpio *)VAR_1->format_data;
 FUNC_0(VAR_2->ino_list);
 FUNC_0(VAR_2);
 VAR_1->format_data = ((void*)0);
 return (VAR_0);
}
