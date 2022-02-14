
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_list_entry {struct fb_info* fb_info; } ;
struct fb_info {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,struct fb_list_entry*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct fb_list_entry*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct fb_list_entry* FUNC_3 (struct fb_info*) ;
 int VAR_5 ;
 struct fb_list_entry* FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct fb_info*) ;

int
FUNC_6(struct fb_info* VAR_6)
{
 struct fb_list_entry *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = 0;
 if (FUNC_0(&VAR_4))
  VAR_9++;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7 != ((void*)0)) {

  return (0);
 }

 VAR_7 = FUNC_4(sizeof(struct fb_list_entry), VAR_0, VAR_1|VAR_2);
 VAR_7->fb_info = VAR_6;

 FUNC_1(&VAR_4, VAR_7, VAR_3);

 VAR_8 = FUNC_2(VAR_7, VAR_5++);
 if (VAR_8)
  return (VAR_8);

 if (VAR_9) {
  VAR_8 = FUNC_5(VAR_6);
  if (VAR_8)
   return (VAR_8);
 }

 return (0);
}
