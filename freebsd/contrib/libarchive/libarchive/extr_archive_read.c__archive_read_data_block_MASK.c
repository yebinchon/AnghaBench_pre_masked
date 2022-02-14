
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* format; int archive; } ;
struct archive {int dummy; } ;
typedef int int64_t ;
struct TYPE_2__ {int (* read_data ) (struct archive_read*,void const**,size_t*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (struct archive_read*,void const**,size_t*,int *) ;

__attribute__((used)) static int
FUNC_3(struct archive *VAR_4,
    const void **VAR_5, size_t *VAR_6, int64_t *VAR_7)
{
 struct archive_read *VAR_8 = (struct archive_read *)VAR_4;
 FUNC_0(VAR_4, VAR_2, VAR_3,
     "archive_read_data_block");

 if (VAR_8->format->read_data == ((void*)0)) {
  FUNC_1(&VAR_8->archive, VAR_0,
      "Internal error: "
      "No format->read_data function registered");
  return (VAR_1);
 }

 return (VAR_8->format->read_data)(VAR_8, VAR_5, VAR_6, VAR_7);
}
