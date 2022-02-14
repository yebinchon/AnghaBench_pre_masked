
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_disk {int (* metadata_filter_func ) (struct archive*,void*,struct archive_entry*) ;void* metadata_filter_data; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;

int
FUNC_1(struct archive *VAR_3,
    int (*VAR_4)(struct archive *, void *,
    struct archive_entry *), void *VAR_5)
{
 struct archive_read_disk *VAR_6 = (struct archive_read_disk *)VAR_3;

 FUNC_0(VAR_3, VAR_1, VAR_2,
     "archive_read_disk_set_metadata_filter_callback");

 VAR_6->metadata_filter_func = VAR_4;
 VAR_6->metadata_filter_data = VAR_5;
 return (VAR_0);
}
