
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_disk {void (* excluded_cb_func ) (struct archive*,void*,struct archive_entry*) ;void* excluded_cb_data; struct archive* matching; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;

int
FUNC_1(struct archive *VAR_3, struct archive *VAR_4,
    void (*VAR_5)(struct archive *, void *, struct archive_entry *),
    void *VAR_6)
{
 struct archive_read_disk *VAR_7 = (struct archive_read_disk *)VAR_3;
 FUNC_0(VAR_3, VAR_1,
     VAR_2, "archive_read_disk_set_matching");
 VAR_7->matching = VAR_4;
 VAR_7->excluded_cb_func = VAR_5;
 VAR_7->excluded_cb_data = VAR_6;
 return (VAR_0);
}
