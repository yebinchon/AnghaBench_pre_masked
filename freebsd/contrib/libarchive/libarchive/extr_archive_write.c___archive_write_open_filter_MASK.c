
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_filter {int (* open ) (struct archive_write_filter*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct archive_write_filter*) ;

int
FUNC_1(struct archive_write_filter *VAR_1)
{
 if (VAR_1->open == ((void*)0))
  return (VAR_0);
 return (VAR_1->open)(VAR_1);
}
