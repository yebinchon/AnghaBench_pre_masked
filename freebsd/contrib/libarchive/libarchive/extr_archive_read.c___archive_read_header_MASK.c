
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* filter; } ;
struct archive_entry {int dummy; } ;
struct TYPE_2__ {int (* read_header ) (TYPE_1__*,struct archive_entry*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct archive_entry*) ;

int
FUNC_1(struct archive_read *VAR_1, struct archive_entry *VAR_2)
{
 if (VAR_1->filter->read_header)
  return VAR_1->filter->read_header(VAR_1->filter, VAR_2);
 else
  return (VAR_0);
}
