
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {scalar_t__ mi_first_entry_offset; } ;


 TYPE_1__* FUNC_0 (struct inode const*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct inode const*) ;

__attribute__((used)) static unsigned long
FUNC_3(const struct inode *VAR_0, __u64 VAR_1)
{
 __u64 VAR_2 = VAR_1 + FUNC_0(VAR_0)->mi_first_entry_offset - 1;
 FUNC_1(VAR_2, FUNC_2(VAR_0));
 return (unsigned long)VAR_2;
}
