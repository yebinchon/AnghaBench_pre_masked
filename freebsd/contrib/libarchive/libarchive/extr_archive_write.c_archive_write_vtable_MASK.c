
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_vtable {int archive_write_data; int archive_write_finish_entry; int archive_write_header; int archive_free; int archive_filter_count; int archive_filter_name; int archive_filter_code; int archive_filter_bytes; int archive_close; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static struct archive_vtable *
FUNC_0(void)
{
 static struct archive_vtable VAR_9;
 static int VAR_10 = 0;

 if (!VAR_10) {
  VAR_9.archive_close = VAR_3;
  VAR_9.archive_filter_bytes = VAR_0;
  VAR_9.archive_filter_code = VAR_1;
  VAR_9.archive_filter_name = VAR_2;
  VAR_9.archive_filter_count = VAR_5;
  VAR_9.archive_free = VAR_7;
  VAR_9.archive_write_header = VAR_8;
  VAR_9.archive_write_finish_entry = VAR_6;
  VAR_9.archive_write_data = VAR_4;
  VAR_10 = 1;
 }
 return (&VAR_9);
}
