
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* first; } ;
struct hardlink {TYPE_2__ file_list; } ;
struct archive_rb_node {int dummy; } ;
struct TYPE_3__ {int entry; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const struct archive_rb_node *VAR_0,
    const struct archive_rb_node *VAR_1)
{
 const struct hardlink *VAR_2 = (const struct hardlink *)VAR_0;
 const struct hardlink *VAR_3 = (const struct hardlink *)VAR_1;

 return (FUNC_1(FUNC_0(VAR_2->file_list.first->entry),
         FUNC_0(VAR_3->file_list.first->entry)));
}
