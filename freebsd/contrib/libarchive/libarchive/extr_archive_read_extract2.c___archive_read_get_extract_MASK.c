
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_extract {int dummy; } ;
struct archive_read {struct archive_read_extract* extract; int cleanup_archive_extract; int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (int,int) ;

struct archive_read_extract *
FUNC_2(struct archive_read *VAR_2)
{
 if (VAR_2->extract == ((void*)0)) {
  VAR_2->extract = (struct archive_read_extract *)FUNC_1(1, sizeof(*VAR_2->extract));
  if (VAR_2->extract == ((void*)0)) {
   FUNC_0(&VAR_2->archive, VAR_0, "Can't extract");
   return (((void*)0));
  }
  VAR_2->cleanup_archive_extract = VAR_1;
 }
 return (VAR_2->extract);
}
