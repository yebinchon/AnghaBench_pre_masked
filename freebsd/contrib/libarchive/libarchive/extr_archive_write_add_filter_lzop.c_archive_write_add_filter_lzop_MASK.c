
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_lzop {int compression_level; int * pdata; } ;
struct archive_write_filter {char* name; int free; int close; int write; int options; int open; struct write_lzop* data; int code; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct archive_write_filter* FUNC_0 (struct archive*) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (struct archive*,int ,int ,char*) ;
 int FUNC_3 (struct archive*,int ,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct write_lzop* FUNC_4 (int,int) ;
 int FUNC_5 (struct write_lzop*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int
FUNC_9(struct archive *VAR_14)
{
 struct archive_write_filter *VAR_15 = FUNC_0(VAR_14);
 struct write_lzop *VAR_16;

 FUNC_2(VAR_14, VAR_6,
     VAR_4, "archive_write_add_filter_lzop");

 VAR_16 = FUNC_4(1, sizeof(*VAR_16));
 if (VAR_16 == ((void*)0)) {
  FUNC_3(VAR_14, VAR_7, "Can't allocate memory");
  return (VAR_1);
 }

 VAR_15->name = "lzop";
 VAR_15->code = VAR_2;
 VAR_15->data = VAR_16;
 VAR_15->open = VAR_11;
 VAR_15->options = VAR_12;
 VAR_15->write = VAR_13;
 VAR_15->close = VAR_9;
 VAR_15->free = VAR_10;
 VAR_16->pdata = FUNC_1("lzop");
 if (VAR_16->pdata == ((void*)0)) {
  FUNC_5(VAR_16);
  FUNC_3(VAR_14, VAR_7, "Can't allocate memory");
  return (VAR_1);
 }
 VAR_16->compression_level = 0;


 FUNC_3(VAR_14, VAR_0,
     "Using external lzop program for lzop compression");
 return (VAR_5);

}
