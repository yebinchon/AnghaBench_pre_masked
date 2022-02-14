
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {int const* acl_text_w; } ;
struct archive_entry {TYPE_1__ acl; int archive; } ;


 int const* FUNC_0 (TYPE_1__*,int *,int,int ) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int const*) ;

const wchar_t *
FUNC_3(struct archive_entry *VAR_0, int VAR_1)
{
 FUNC_2(VAR_0->acl.acl_text_w);
 VAR_0->acl.acl_text_w = ((void*)0);
 if (FUNC_1(&VAR_1) == 0)
  VAR_0->acl.acl_text_w = FUNC_0(&VAR_0->acl,
      ((void*)0), VAR_1, VAR_0->archive);
 return (VAR_0->acl.acl_text_w);
}
