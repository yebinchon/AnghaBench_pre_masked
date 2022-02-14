
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* acl_text; } ;
struct archive_entry {TYPE_1__ acl; } ;


 char const* FUNC_0 (TYPE_1__*,int *,int,int *) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (char const*) ;

const char *
FUNC_3(struct archive_entry *VAR_0, int VAR_1)
{
 FUNC_2(VAR_0->acl.acl_text);
 VAR_0->acl.acl_text = ((void*)0);
 if (FUNC_1(&VAR_1) == 0)
  VAR_0->acl.acl_text = FUNC_0(&VAR_0->acl, ((void*)0),
      VAR_1, ((void*)0));

 return (VAR_0->acl.acl_text);
}
