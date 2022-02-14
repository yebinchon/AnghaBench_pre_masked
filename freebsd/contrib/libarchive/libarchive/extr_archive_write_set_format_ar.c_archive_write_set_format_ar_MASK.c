
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {char* format_name; int format_finish_entry; int (* format_free ) (struct archive_write*) ;int format_close; int format_write_data; int format_write_header; struct ar_w* format_data; int archive; } ;
struct ar_w {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct archive_write*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_4(struct archive_write *VAR_7)
{
 struct ar_w *VAR_8;


 if (VAR_7->format_free != ((void*)0))
  (VAR_7->format_free)(VAR_7);

 VAR_8 = (struct ar_w *)FUNC_2(1, sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_0(&VAR_7->archive, VAR_2, "Can't allocate ar data");
  return (VAR_0);
 }
 VAR_7->format_data = VAR_8;

 VAR_7->format_name = "ar";
 VAR_7->format_write_header = VAR_6;
 VAR_7->format_write_data = VAR_4;
 VAR_7->format_close = VAR_3;
 VAR_7->format_free = FUNC_1;
 VAR_7->format_finish_entry = VAR_5;
 return (VAR_1);
}
