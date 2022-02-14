
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* format; } ;
struct archive {int dummy; } ;
struct TYPE_2__ {int (* format_capabilties ) (struct archive_read*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct archive_read*) ;

int
FUNC_1(struct archive *VAR_1)
{
 struct archive_read *VAR_2 = (struct archive_read *)VAR_1;
 if (VAR_2 && VAR_2->format && VAR_2->format->format_capabilties) {
  return (VAR_2->format->format_capabilties)(VAR_2);
 }
 return VAR_0;
}
