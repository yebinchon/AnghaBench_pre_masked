
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_md_class {int mdc_priority; } ;
typedef int module_t ;


 int VAR_0 ;
 struct g_raid_md_class* FUNC_0 (int *) ;
 int FUNC_1 (struct g_raid_md_class*,struct g_raid_md_class*,int ) ;
 int FUNC_2 (int *,struct g_raid_md_class*,int ) ;
 struct g_raid_md_class* FUNC_3 (struct g_raid_md_class*,int ) ;
 int FUNC_4 (struct g_raid_md_class*,int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int VAR_4 ;

int
FUNC_6(module_t VAR_5, int VAR_6, void *VAR_7)
{
 struct g_raid_md_class *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;

 VAR_11 = 0;
 VAR_8 = VAR_7;
 switch (VAR_6) {
 case 129:
  VAR_9 = FUNC_0(&VAR_2);
  if (VAR_9 == ((void*)0) || VAR_9->mdc_priority > VAR_8->mdc_priority)
   FUNC_2(&VAR_2, VAR_8, VAR_4);
  else {
   while ((VAR_10 = FUNC_3(VAR_9, VAR_4)) != ((void*)0) &&
       VAR_10->mdc_priority < VAR_8->mdc_priority)
    VAR_9 = VAR_10;
   FUNC_1(VAR_9, VAR_8, VAR_4);
  }
  if (VAR_3)
   FUNC_5(&VAR_1);
  break;
 case 128:
  FUNC_4(VAR_8, VAR_4);
  break;
 default:
  VAR_11 = VAR_0;
  break;
 }

 return (VAR_11);
}
