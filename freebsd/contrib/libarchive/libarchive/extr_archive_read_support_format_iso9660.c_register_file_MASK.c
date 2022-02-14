
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso9660 {struct file_info* use_files; } ;
struct file_info {struct file_info* use_next; } ;



__attribute__((used)) static void
FUNC_0(struct iso9660 *VAR_0, struct file_info *VAR_1)
{

 VAR_1->use_next = VAR_0->use_files;
 VAR_0->use_files = VAR_1;
}
