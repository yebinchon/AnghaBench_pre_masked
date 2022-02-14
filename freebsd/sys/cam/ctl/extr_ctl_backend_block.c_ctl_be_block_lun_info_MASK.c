
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct ctl_be_block_lun {int num_threads; } ;


 int FUNC_0 (struct sbuf*,char*,...) ;

__attribute__((used)) static int
FUNC_1(void *VAR_0, struct sbuf *VAR_1)
{
 struct ctl_be_block_lun *VAR_2;
 int VAR_3;

 VAR_2 = (struct ctl_be_block_lun *)VAR_0;

 VAR_3 = FUNC_0(VAR_1, "\t<num_threads>");
 if (VAR_3 != 0)
  goto bailout;
 VAR_3 = FUNC_0(VAR_1, "%d", VAR_2->num_threads);
 if (VAR_3 != 0)
  goto bailout;
 VAR_3 = FUNC_0(VAR_1, "</num_threads>\n");

bailout:
 return (VAR_3);
}
