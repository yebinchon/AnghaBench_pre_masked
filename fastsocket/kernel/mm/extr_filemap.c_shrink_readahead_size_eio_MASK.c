
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_ra_state {int ra_pages; } ;
struct file {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct file *VAR_0,
     struct file_ra_state *VAR_1)
{
 VAR_1->ra_pages /= 4;
}
