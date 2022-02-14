
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_list_entry {TYPE_1__* fb_si; struct fb_info* fb_info; } ;
struct fb_info {TYPE_1__* fb_cdev; } ;
struct TYPE_2__ {struct fb_info* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int,int ,int ,int,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct fb_list_entry *VAR_3, int VAR_4)
{
 struct fb_info *VAR_5;

 VAR_5 = VAR_3->fb_info;
 VAR_3->fb_si = FUNC_0(&VAR_2, VAR_4, VAR_1, VAR_0,
     0600, "fb%d", VAR_4);
 VAR_3->fb_si->si_drv1 = VAR_5;
 VAR_5->fb_cdev = VAR_3->fb_si;

 return (0);
}
