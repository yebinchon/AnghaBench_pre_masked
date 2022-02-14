
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_image_section_cache {int lock; int name; int limit; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct pt_image_section_cache*,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_3(struct pt_image_section_cache *VAR_6, const char *VAR_7)
{
 if (!VAR_6)
  return -VAR_3;

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->limit = VAR_0;
 if (VAR_7) {
  VAR_6->name = FUNC_0(VAR_7);
  if (!VAR_6->name)
   return -VAR_4;
 }
 return 0;
}
