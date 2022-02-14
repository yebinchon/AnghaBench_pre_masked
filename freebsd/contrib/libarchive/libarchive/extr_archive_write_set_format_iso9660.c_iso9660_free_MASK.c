
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int id; int boot_filename; int catalog_filename; } ;
struct TYPE_7__ {int max_depth; struct iso9660* pathtbl; int rootent; } ;
struct TYPE_6__ {scalar_t__ joliet; } ;
struct TYPE_5__ {int max_depth; struct iso9660* pathtbl; int rootent; } ;
struct iso9660 {scalar_t__ temp_fd; int mbs; int utf16be; TYPE_4__ el_torito; int bibliographic_file_identifier; int abstract_file_identifier; int copyright_file_identifier; int application_identifier; int data_preparer_identifier; int publisher_identifier; int volume_identifier; int cur_dirstr; TYPE_3__ joliet; struct iso9660* sorted; TYPE_2__ opt; TYPE_1__ primary; } ;
struct archive_write {struct iso9660* format_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct iso9660*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iso9660*) ;
 int FUNC_5 (struct iso9660*) ;
 int FUNC_6 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_7(struct archive_write *VAR_0)
{
 struct iso9660 *VAR_1;
 int VAR_2, VAR_3;

 VAR_1 = VAR_0->format_data;


 if (VAR_1->temp_fd >= 0)
  FUNC_1(VAR_1->temp_fd);


 VAR_3 = FUNC_6(VAR_0);


 FUNC_3(VAR_1->primary.rootent);
 for (VAR_2 = 0; VAR_2 < VAR_1->primary.max_depth; VAR_2++)
  FUNC_2(VAR_1->primary.pathtbl[VAR_2].sorted);
 FUNC_2(VAR_1->primary.pathtbl);

 if (VAR_1->opt.joliet) {
  FUNC_3(VAR_1->joliet.rootent);
  for (VAR_2 = 0; VAR_2 < VAR_1->joliet.max_depth; VAR_2++)
   FUNC_2(VAR_1->joliet.pathtbl[VAR_2].sorted);
  FUNC_2(VAR_1->joliet.pathtbl);
 }


 FUNC_4(VAR_1);
 FUNC_5(VAR_1);

 FUNC_0(&(VAR_1->cur_dirstr));
 FUNC_0(&(VAR_1->volume_identifier));
 FUNC_0(&(VAR_1->publisher_identifier));
 FUNC_0(&(VAR_1->data_preparer_identifier));
 FUNC_0(&(VAR_1->application_identifier));
 FUNC_0(&(VAR_1->copyright_file_identifier));
 FUNC_0(&(VAR_1->abstract_file_identifier));
 FUNC_0(&(VAR_1->bibliographic_file_identifier));
 FUNC_0(&(VAR_1->el_torito.catalog_filename));
 FUNC_0(&(VAR_1->el_torito.boot_filename));
 FUNC_0(&(VAR_1->el_torito.id));
 FUNC_0(&(VAR_1->utf16be));
 FUNC_0(&(VAR_1->mbs));

 FUNC_2(VAR_1);
 VAR_0->format_data = ((void*)0);

 return (VAR_3);
}
