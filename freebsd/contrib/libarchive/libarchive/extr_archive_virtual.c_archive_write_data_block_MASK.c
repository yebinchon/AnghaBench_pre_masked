
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive {TYPE_1__* vtable; int state; } ;
typedef int la_ssize_t ;
typedef int la_int64_t ;
struct TYPE_2__ {int (* archive_write_data_block ) (struct archive*,void const*,size_t,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,int ,char*) ;
 int FUNC_1 (struct archive*,void const*,size_t,int ) ;

la_ssize_t
FUNC_2(struct archive *VAR_3, const void *VAR_4, size_t VAR_5,
    la_int64_t VAR_6)
{
 if (VAR_3->vtable->archive_write_data_block == ((void*)0)) {
  FUNC_0(VAR_3, VAR_0,
      "archive_write_data_block not supported");
  VAR_3->state = VAR_2;
  return (VAR_1);
 }
 return ((VAR_3->vtable->archive_write_data_block)(VAR_3, VAR_4, VAR_5, VAR_6));
}
