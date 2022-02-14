
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* format; int archive; } ;
struct archive {int dummy; } ;
typedef int la_int64_t ;
typedef int int64_t ;
struct TYPE_2__ {int (* seek_data ) (struct archive_read*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (struct archive_read*,int ,int) ;

la_int64_t
FUNC_3(struct archive *VAR_4, int64_t VAR_5, int VAR_6)
{
 struct archive_read *VAR_7 = (struct archive_read *)VAR_4;
 FUNC_0(VAR_4, VAR_2, VAR_3,
     "archive_seek_data_block");

 if (VAR_7->format->seek_data == ((void*)0)) {
  FUNC_1(&VAR_7->archive, VAR_0,
      "Internal error: "
      "No format_seek_data_block function registered");
  return (VAR_1);
 }

 return (VAR_7->format->seek_data)(VAR_7, VAR_5, VAR_6);
}
