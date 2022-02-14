
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isoent {TYPE_2__* file; } ;
struct archive_rb_node {int dummy; } ;
struct TYPE_3__ {int s; } ;
struct TYPE_4__ {TYPE_1__ basename; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const struct archive_rb_node *VAR_0,
    const struct archive_rb_node *VAR_1)
{
 const struct isoent *VAR_2 = (const struct isoent *)VAR_0;
 const struct isoent *VAR_3 = (const struct isoent *)VAR_1;

 return (FUNC_0(VAR_2->file->basename.s, VAR_3->file->basename.s));
}
