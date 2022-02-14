
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int upper; int lower; int type; } ;
struct subscription {TYPE_1__ seq; } ;
struct name_seq {int lock; } ;
struct TYPE_4__ {int * types; } ;


 int FUNC_0 (char*,struct name_seq*,int ,int ,int ) ;
 size_t FUNC_1 (int ) ;
 struct name_seq* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_0 ;
 struct name_seq* FUNC_5 (int ,int *) ;
 int FUNC_6 (struct name_seq*,struct subscription*) ;
 int VAR_1 ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct subscription *VAR_2)
{
 u32 VAR_3 = VAR_2->seq.type;
 struct name_seq *VAR_4;

 FUNC_8(&VAR_1);
 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4) {
  VAR_4 = FUNC_5(VAR_3, &VAR_0.types[FUNC_1(VAR_3)]);
 }
 if (VAR_4){
  FUNC_3(&VAR_4->lock);
  FUNC_0("tipc_nametbl_subscribe:found %p for {%u,%u,%u}\n",
      VAR_4, VAR_3, VAR_2->seq.lower, VAR_2->seq.upper);
  FUNC_6(VAR_4, VAR_2);
  FUNC_4(&VAR_4->lock);
 } else {
  FUNC_7("Failed to create subscription for {%u,%u,%u}\n",
       VAR_2->seq.type, VAR_2->seq.lower, VAR_2->seq.upper);
 }
 FUNC_9(&VAR_1);
}
