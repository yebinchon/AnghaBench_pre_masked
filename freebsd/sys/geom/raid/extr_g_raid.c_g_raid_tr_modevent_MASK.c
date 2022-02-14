
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid_tr_class {int trc_priority; } ;
typedef int module_t ;


 int VAR_0 ;
 struct g_raid_tr_class* FUNC_0 (int *) ;
 int FUNC_1 (struct g_raid_tr_class*,struct g_raid_tr_class*,int ) ;
 int FUNC_2 (int *,struct g_raid_tr_class*,int ) ;
 struct g_raid_tr_class* FUNC_3 (struct g_raid_tr_class*,int ) ;
 int FUNC_4 (struct g_raid_tr_class*,int ) ;


 int VAR_1 ;
 int VAR_2 ;

int
FUNC_5(module_t VAR_3, int VAR_4, void *VAR_5)
{
 struct g_raid_tr_class *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;

 VAR_9 = 0;
 VAR_6 = VAR_5;
 switch (VAR_4) {
 case 129:
  VAR_7 = FUNC_0(&VAR_1);
  if (VAR_7 == ((void*)0) || VAR_7->trc_priority > VAR_6->trc_priority)
   FUNC_2(&VAR_1, VAR_6, VAR_2);
  else {
   while ((VAR_8 = FUNC_3(VAR_7, VAR_2)) != ((void*)0) &&
       VAR_8->trc_priority < VAR_6->trc_priority)
    VAR_7 = VAR_8;
   FUNC_1(VAR_7, VAR_6, VAR_2);
  }
  break;
 case 128:
  FUNC_4(VAR_6, VAR_2);
  break;
 default:
  VAR_9 = VAR_0;
  break;
 }

 return (VAR_9);
}
