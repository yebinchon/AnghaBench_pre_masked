
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_ra_state {int prev_pos; int ra_pages; } ;
struct address_space {TYPE_1__* backing_dev_info; } ;
struct TYPE_2__ {int ra_pages; } ;



void
FUNC_0(struct file_ra_state *VAR_0, struct address_space *VAR_1)
{
 VAR_0->ra_pages = VAR_1->backing_dev_info->ra_pages;
 VAR_0->prev_pos = -1;
}
