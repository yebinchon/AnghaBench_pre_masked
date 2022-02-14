
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_vtable {int archive_read_next_header2; int archive_read_next_header; int archive_read_data_block; int archive_close; int archive_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct archive_vtable *
FUNC_0(void)
{
 static struct archive_vtable VAR_5;
 static int VAR_6 = 0;

 if (!VAR_6) {
  VAR_5.archive_free = VAR_2;
  VAR_5.archive_close = VAR_0;
  VAR_5.archive_read_data_block = VAR_1;
  VAR_5.archive_read_next_header = VAR_3;
  VAR_5.archive_read_next_header2 = VAR_4;
  VAR_6 = 1;
 }
 return (&VAR_5);
}
