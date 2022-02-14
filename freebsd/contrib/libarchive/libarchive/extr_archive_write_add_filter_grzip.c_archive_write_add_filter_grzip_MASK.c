
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_grzip {int * pdata; } ;
struct archive_write_filter {char* name; int free; int close; int write; int options; int open; struct write_grzip* data; int code; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct archive_write_filter* FUNC_0 (struct archive*) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (struct archive*,int ,int ,char*) ;
 int FUNC_3 (struct archive*,int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct write_grzip* FUNC_4 (int,int) ;
 int FUNC_5 (struct write_grzip*) ;

int
FUNC_6(struct archive *VAR_12)
{
 struct archive_write_filter *VAR_13 = FUNC_0(VAR_12);
 struct write_grzip *VAR_14;

 FUNC_2(VAR_12, VAR_5,
     VAR_3, "archive_write_add_filter_grzip");

 VAR_14 = FUNC_4(1, sizeof(*VAR_14));
 if (VAR_14 == ((void*)0)) {
  FUNC_3(VAR_12, VAR_6, "Can't allocate memory");
  return (VAR_1);
 }
 VAR_14->pdata = FUNC_1("grzip");
 if (VAR_14->pdata == ((void*)0)) {
  FUNC_5(VAR_14);
  FUNC_3(VAR_12, VAR_6, "Can't allocate memory");
  return (VAR_1);
 }

 VAR_13->name = "grzip";
 VAR_13->code = VAR_2;
 VAR_13->data = VAR_14;
 VAR_13->open = VAR_9;
 VAR_13->options = VAR_10;
 VAR_13->write = VAR_11;
 VAR_13->close = VAR_7;
 VAR_13->free = VAR_8;



 FUNC_3(VAR_12, VAR_0,
     "Using external grzip program for grzip compression");
 return (VAR_4);
}
