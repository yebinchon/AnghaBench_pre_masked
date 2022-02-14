
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ magic; int error_string; } ;
struct archive_write_disk {TYPE_1__ archive; int stream; scalar_t__ stream_valid; struct archive_write_disk* uncompressed_buffer; struct archive_write_disk* compressed_buffer; struct archive_write_disk* resource_fork; struct archive_write_disk* decmpfs_header_p; int path_safe; int _name_data; int entry; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct archive*,int ,int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_7 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct archive_write_disk*) ;

__attribute__((used)) static int
FUNC_10(struct archive *VAR_6)
{
 struct archive_write_disk *VAR_7;
 int VAR_8;
 if (VAR_6 == ((void*)0))
  return (VAR_2);
 FUNC_2(VAR_6, VAR_5,
     VAR_3 | VAR_4, "archive_write_disk_free");
 VAR_7 = (struct archive_write_disk *)VAR_6;
 VAR_8 = FUNC_1(&VAR_7->archive);
 FUNC_6(&VAR_7->archive, ((void*)0), ((void*)0), ((void*)0));
 FUNC_7(&VAR_7->archive, ((void*)0), ((void*)0), ((void*)0));
 FUNC_3(VAR_7->entry);
 FUNC_5(&VAR_7->_name_data);
 FUNC_5(&VAR_7->archive.error_string);
 FUNC_5(&VAR_7->path_safe);
 VAR_7->archive.magic = 0;
 FUNC_0(&VAR_7->archive);
 FUNC_9(VAR_7->decmpfs_header_p);
 FUNC_9(VAR_7->resource_fork);
 FUNC_9(VAR_7->compressed_buffer);
 FUNC_9(VAR_7->uncompressed_buffer);
 FUNC_9(VAR_7);
 return (VAR_8);
}
