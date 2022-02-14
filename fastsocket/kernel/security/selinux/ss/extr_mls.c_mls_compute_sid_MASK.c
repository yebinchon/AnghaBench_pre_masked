
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct range_trans {int target_class; int target_type; int source_type; } ;
struct mls_range {int dummy; } ;
struct context {int type; } ;
struct TYPE_2__ {int process_class; int range_tr; } ;





 int VAR_0 ;
 struct mls_range* FUNC_0 (int ,struct range_trans*) ;
 int FUNC_1 (struct context*,struct context*) ;
 int FUNC_2 (struct context*,struct context*) ;
 int FUNC_3 (struct context*,struct mls_range*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct context *VAR_3,
      struct context *VAR_4,
      u16 VAR_5,
      u32 VAR_6,
      struct context *VAR_7)
{
 struct range_trans VAR_8;
 struct mls_range *VAR_9;

 if (!VAR_2)
  return 0;

 switch (VAR_6) {
 case 128:

  VAR_8.source_type = VAR_3->type;
  VAR_8.target_type = VAR_4->type;
  VAR_8.target_class = VAR_5;
  VAR_9 = FUNC_0(VAR_1.range_tr, &VAR_8);
  if (VAR_9)
   return FUNC_3(VAR_7, VAR_9);

 case 130:
  if (VAR_5 == VAR_1.process_class)

   return FUNC_1(VAR_7, VAR_3);
  else

   return FUNC_2(VAR_7, VAR_3);
 case 129:

  return FUNC_2(VAR_7, VAR_3);


 }
 return -VAR_0;
}
