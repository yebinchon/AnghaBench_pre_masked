
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swsusp_info {int size; int pages; int image_pages; int num_physpages; } ;


 int VAR_0 ;
 int FUNC_0 (struct swsusp_info*) ;
 int FUNC_1 (struct swsusp_info*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct swsusp_info *VAR_3)
{
 FUNC_1(VAR_3, 0, sizeof(struct swsusp_info));
 VAR_3->num_physpages = VAR_2;
 VAR_3->image_pages = VAR_1;
 VAR_3->pages = FUNC_2();
 VAR_3->size = VAR_3->pages;
 VAR_3->size <<= VAR_0;
 return FUNC_0(VAR_3);
}
