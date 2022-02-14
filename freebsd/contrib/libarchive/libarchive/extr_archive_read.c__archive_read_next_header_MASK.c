
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {struct archive_entry* entry; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int FUNC_0 (struct archive*,struct archive_entry*) ;

__attribute__((used)) static int
FUNC_1(struct archive *VAR_0, struct archive_entry **VAR_1)
{
 int VAR_2;
 struct archive_read *VAR_3 = (struct archive_read *)VAR_0;
 *VAR_1 = ((void*)0);
 VAR_2 = FUNC_0(VAR_0, VAR_3->entry);
 *VAR_1 = VAR_3->entry;
 return VAR_2;
}
