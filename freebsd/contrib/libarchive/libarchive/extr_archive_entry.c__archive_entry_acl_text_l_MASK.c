
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_string_conv {int dummy; } ;
struct TYPE_2__ {char* acl_text; } ;
struct archive_entry {TYPE_1__ acl; } ;
typedef int ssize_t ;


 char* FUNC_0 (TYPE_1__*,int *,int,struct archive_string_conv*) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (char*) ;

int
FUNC_3(struct archive_entry *VAR_0, int VAR_1,
    const char **VAR_2, size_t *VAR_3, struct archive_string_conv *VAR_4)
{
 FUNC_2(VAR_0->acl.acl_text);
 VAR_0->acl.acl_text = ((void*)0);

 if (FUNC_1(&VAR_1) == 0)
  VAR_0->acl.acl_text = FUNC_0(&VAR_0->acl,
      (ssize_t *)VAR_3, VAR_1, VAR_4);

 *VAR_2 = VAR_0->acl.acl_text;

 return (0);
}
