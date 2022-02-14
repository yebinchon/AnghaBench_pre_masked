
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tar {int localname; int longlink; int longname; int pax_header; int pax_global; int line; int entry_gname; int entry_uname; int entry_linkpath; int entry_pathname_override; int entry_pathname; int acl_text; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tar*) ;
 int FUNC_2 (struct tar*) ;

__attribute__((used)) static int
FUNC_3(struct archive_read *VAR_1)
{
 struct tar *VAR_2;

 VAR_2 = (struct tar *)(VAR_1->format->data);
 FUNC_2(VAR_2);
 FUNC_0(&VAR_2->acl_text);
 FUNC_0(&VAR_2->entry_pathname);
 FUNC_0(&VAR_2->entry_pathname_override);
 FUNC_0(&VAR_2->entry_linkpath);
 FUNC_0(&VAR_2->entry_uname);
 FUNC_0(&VAR_2->entry_gname);
 FUNC_0(&VAR_2->line);
 FUNC_0(&VAR_2->pax_global);
 FUNC_0(&VAR_2->pax_header);
 FUNC_0(&VAR_2->longname);
 FUNC_0(&VAR_2->longlink);
 FUNC_0(&VAR_2->localname);
 FUNC_1(VAR_2);
 (VAR_1->format->data) = ((void*)0);
 return (VAR_0);
}
