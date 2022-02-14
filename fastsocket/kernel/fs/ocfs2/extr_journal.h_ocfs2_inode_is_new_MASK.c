
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int ip_flags; } ;


 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct inode *VAR_1)
{



 if (FUNC_1(VAR_1)->ip_flags & VAR_0)
  return 0;

 return FUNC_2(FUNC_0(VAR_1));
}
