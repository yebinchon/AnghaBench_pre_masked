
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int ae_symlink_type; struct archive* archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;

struct archive_entry *
FUNC_1(struct archive *VAR_1)
{
 struct archive_entry *VAR_2;

 VAR_2 = (struct archive_entry *)FUNC_0(1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_2->archive = VAR_1;
 VAR_2->ae_symlink_type = VAR_0;
 return (VAR_2);
}
