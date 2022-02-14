
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct fuse_entry_out {scalar_t__ nodeid; TYPE_1__ attr; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(struct fuse_entry_out *VAR_3, enum vtype VAR_4)
{
 if (VAR_4 != FUNC_0(VAR_3->attr.mode)) {
  return (VAR_0);
 }

 if (VAR_3->nodeid == VAR_1) {
  return (VAR_0);
 }

 if (VAR_3->nodeid == VAR_2) {
  return (VAR_0);
 }

 return (0);
}
