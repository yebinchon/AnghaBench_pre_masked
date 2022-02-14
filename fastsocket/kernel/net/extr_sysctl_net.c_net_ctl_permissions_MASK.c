
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsproxy {int dummy; } ;
struct ctl_table_root {int dummy; } ;
struct ctl_table {int mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ctl_table_root *VAR_1,
          struct nsproxy *VAR_2,
          struct ctl_table *VAR_3)
{

 if (FUNC_0(VAR_0)) {
  int VAR_4 = (VAR_3->mode >> 6) & 7;
  return (VAR_4 << 6) | (VAR_4 << 3) | VAR_4;
 }
 return VAR_3->mode;
}
