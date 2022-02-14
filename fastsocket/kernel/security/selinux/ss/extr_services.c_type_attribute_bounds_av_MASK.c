
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct type_datum {int bounds; } ;
struct context {int type; } ;
struct av_decision {int allowed; } ;
typedef int lo_tcontext ;
typedef int lo_scontext ;
typedef int lo_avd ;
struct TYPE_2__ {struct type_datum** type_val_to_struct; } ;


 int FUNC_0 (struct context*,struct context*,int ,struct av_decision*) ;
 int FUNC_1 (struct context*,struct context*,int) ;
 int FUNC_2 (struct av_decision*,int ,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (struct context*,struct context*,int ,int,char*) ;

__attribute__((used)) static void FUNC_4(struct context *VAR_1,
         struct context *VAR_2,
         u16 VAR_3,
         struct av_decision *VAR_4)
{
 struct context VAR_5;
 struct context VAR_6;
 struct av_decision VAR_7;
 struct type_datum *VAR_8
  = VAR_0.type_val_to_struct[VAR_1->type - 1];
 struct type_datum *VAR_9
  = VAR_0.type_val_to_struct[VAR_2->type - 1];
 u32 VAR_10 = 0;

 if (VAR_8->bounds) {
  FUNC_2(&VAR_7, 0, sizeof(VAR_7));

  FUNC_1(&VAR_5, VAR_1, sizeof(VAR_5));
  VAR_5.type = VAR_8->bounds;

  FUNC_0(&VAR_5,
       VAR_2,
       VAR_3,
       &VAR_7);
  if ((VAR_7.allowed & VAR_4->allowed) == VAR_4->allowed)
   return;
  VAR_10 = ~VAR_7.allowed & VAR_4->allowed;
 }

 if (VAR_9->bounds) {
  FUNC_2(&VAR_7, 0, sizeof(VAR_7));

  FUNC_1(&VAR_6, VAR_2, sizeof(VAR_6));
  VAR_6.type = VAR_9->bounds;

  FUNC_0(VAR_1,
       &VAR_6,
       VAR_3,
       &VAR_7);
  if ((VAR_7.allowed & VAR_4->allowed) == VAR_4->allowed)
   return;
  VAR_10 = ~VAR_7.allowed & VAR_4->allowed;
 }

 if (VAR_8->bounds && VAR_9->bounds) {
  FUNC_2(&VAR_7, 0, sizeof(VAR_7));





  FUNC_0(&VAR_5,
       &VAR_6,
       VAR_3,
       &VAR_7);
  if ((VAR_7.allowed & VAR_4->allowed) == VAR_4->allowed)
   return;
  VAR_10 = ~VAR_7.allowed & VAR_4->allowed;
 }

 if (VAR_10) {

  VAR_4->allowed &= ~VAR_10;


  FUNC_3(VAR_1, VAR_2,
     VAR_3, VAR_10, "bounds");
 }
}
