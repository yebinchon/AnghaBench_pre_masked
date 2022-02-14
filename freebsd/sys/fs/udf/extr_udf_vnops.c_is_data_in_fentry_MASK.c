
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udf_node {struct file_entry* fentry; } ;
struct TYPE_2__ {int flags; } ;
struct file_entry {TYPE_1__ icbtag; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(const struct udf_node *VAR_0)
{
 const struct file_entry *VAR_1 = VAR_0->fentry;

 return ((FUNC_0(VAR_1->icbtag.flags) & 0x7) == 3);
}
