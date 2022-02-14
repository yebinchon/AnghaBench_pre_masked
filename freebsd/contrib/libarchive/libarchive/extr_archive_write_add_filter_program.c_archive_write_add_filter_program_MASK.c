
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s; } ;
struct private_data {TYPE_1__ description; int * pdata; int * cmd; } ;
struct archive_write_filter {int (* free ) (struct archive_write_filter*) ;int close; int write; int open; int code; int name; int * data; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct archive_write_filter* FUNC_0 (struct archive*) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (struct archive*,int ,int ,char*) ;
 int VAR_6 ;
 int FUNC_3 (struct archive_write_filter*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct archive*,int ,char*) ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 int * FUNC_7 (TYPE_1__*,scalar_t__) ;
 int * FUNC_8 (int,int) ;
 int * FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*) ;

int
FUNC_11(struct archive *VAR_9, const char *VAR_10)
{
 struct archive_write_filter *VAR_11 = FUNC_0(VAR_9);
 struct private_data *VAR_12;
 static const char VAR_13[] = "Program: ";

 FUNC_2(VAR_9, VAR_4,
     VAR_3, "archive_write_add_filter_program");

 VAR_11->data = FUNC_8(1, sizeof(*VAR_12));
 if (VAR_11->data == ((void*)0))
  goto memerr;
 VAR_12 = (struct private_data *)VAR_11->data;

 VAR_12->cmd = FUNC_9(VAR_10);
 if (VAR_12->cmd == ((void*)0))
  goto memerr;

 VAR_12->pdata = FUNC_1(VAR_10);
 if (VAR_12->pdata == ((void*)0))
  goto memerr;


 if (FUNC_7(&VAR_12->description,
     FUNC_10(VAR_13) + FUNC_10(VAR_10) + 1) == ((void*)0))
  goto memerr;
 FUNC_6(&VAR_12->description, VAR_13);
 FUNC_5(&VAR_12->description, VAR_10);

 VAR_11->name = VAR_12->description.s;
 VAR_11->code = VAR_1;
 VAR_11->open = VAR_7;
 VAR_11->write = VAR_8;
 VAR_11->close = VAR_6;
 VAR_11->free = FUNC_3;
 return (VAR_2);
memerr:
 FUNC_3(VAR_11);
 FUNC_4(VAR_9, VAR_5,
     "Can't allocate memory for filter program");
 return (VAR_0);
}
