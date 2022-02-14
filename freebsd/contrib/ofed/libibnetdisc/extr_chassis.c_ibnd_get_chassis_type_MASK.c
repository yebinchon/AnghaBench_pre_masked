
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t ch_type; char* ch_type_str; int info; int chassis; } ;
typedef TYPE_1__ ibnd_node_t ;


 char** VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 size_t VAR_2 ;

 size_t VAR_3 ;

 int FUNC_1 (int ,int ,int ) ;

char *FUNC_2(ibnd_node_t * VAR_4)
{
 int VAR_5;

 if (!VAR_4) {
  FUNC_0("node parameter NULL\n");
  return ((void*)0);
 }

 if (!VAR_4->chassis)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_4->info, 0, VAR_1);

 switch (VAR_5)
 {
  case 128:
  {
   if (VAR_4->ch_type == VAR_3 || VAR_4->ch_type > VAR_2)
    return ((void*)0);
   return VAR_0[VAR_4->ch_type];
  }
  case 129:
  {
   if (VAR_4->ch_type_str[0] == '\0')
    return ((void*)0);
   return VAR_4->ch_type_str;
  }
  default:
  {
   break;
  }
 }
 return ((void*)0);
}
