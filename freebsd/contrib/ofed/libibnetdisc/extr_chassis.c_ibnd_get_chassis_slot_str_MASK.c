
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t ch_slot; int ch_slotnum; int ch_anafanum; int chassis; int info; } ;
typedef TYPE_1__ ibnd_node_t ;


 char** VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,size_t,char*,char*,int,int) ;

char *FUNC_3(ibnd_node_t * VAR_6, char *VAR_7, size_t VAR_8)
{
 int VAR_9;

 if (!VAR_6) {
  FUNC_0("node parameter NULL\n");
  return ((void*)0);
 }


 VAR_9 = FUNC_1(VAR_6->info, 0,VAR_1);

 if ((VAR_9 != VAR_5) && (VAR_9 != VAR_2))
  return ((void*)0);
 if (!VAR_6->chassis)
  return ((void*)0);
 if (VAR_6->ch_slot == VAR_4 || VAR_6->ch_slot > VAR_3)
  return ((void*)0);
 if (!VAR_7)
  return ((void*)0);
 FUNC_2(VAR_7, VAR_8, "%s %d Chip %d", VAR_0[VAR_6->ch_slot],
   VAR_6->ch_slotnum, VAR_6->ch_anafanum);
 return VAR_7;
}
