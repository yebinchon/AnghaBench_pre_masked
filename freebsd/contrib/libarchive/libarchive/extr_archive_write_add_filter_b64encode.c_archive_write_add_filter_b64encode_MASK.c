
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_b64encode {int mode; int name; } ;
struct archive_write_filter {char* name; int free; int close; int write; int options; int open; int code; struct private_b64encode* data; int archive; } ;
struct archive_write {int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct archive_write_filter* FUNC_0 (struct archive*) ;
 int FUNC_1 (int *,int ,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int,int) ;

int
FUNC_5(struct archive *VAR_11)
{
 struct archive_write *VAR_12 = (struct archive_write *)VAR_11;
 struct archive_write_filter *VAR_13 = FUNC_0(VAR_11);
 struct private_b64encode *VAR_14;

 FUNC_1(&VAR_12->archive, VAR_4,
     VAR_3, "archive_write_add_filter_uu");

 VAR_14 = (struct private_b64encode *)FUNC_4(1, sizeof(*VAR_14));
 if (VAR_14 == ((void*)0)) {
  FUNC_2(VAR_13->archive, VAR_5,
      "Can't allocate data for b64encode filter");
  return (VAR_0);
 }
 FUNC_3(&VAR_14->name, "-");
 VAR_14->mode = 0644;

 VAR_13->data = VAR_14;
 VAR_13->name = "b64encode";
 VAR_13->code = VAR_1;
 VAR_13->open = VAR_8;
 VAR_13->options = VAR_9;
 VAR_13->write = VAR_10;
 VAR_13->close = VAR_6;
 VAR_13->free = VAR_7;

 return (VAR_2);
}
