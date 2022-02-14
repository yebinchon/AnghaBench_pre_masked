
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_filter {int (* close ) (struct archive_write_filter*) ;struct archive_write_filter* next_filter; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_write_filter*) ;

int
FUNC_1(struct archive_write_filter *VAR_1)
{
 if (VAR_1->close != ((void*)0))
  return (VAR_1->close)(VAR_1);
 if (VAR_1->next_filter != ((void*)0))
  return (FUNC_1(VAR_1->next_filter));
 return (VAR_0);
}
