
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct addr_val_pair {int const member_1; scalar_t__ const member_0; } ;
struct TYPE_9__ {scalar_t__ rev; } ;
struct TYPE_10__ {int slow_intr_mask; TYPE_1__ params; } ;
typedef TYPE_2__ adapter_t ;


 int FUNC_0 (struct addr_val_pair*) ;

 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;






 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;


 int VAR_15 ;
 scalar_t__ VAR_16 ;

 int VAR_17 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_2__*,struct addr_val_pair*,int ,int ) ;

void FUNC_6(adapter_t *VAR_18)
{
 static struct addr_val_pair VAR_19[] = {
  { 142, 134 },
  { 142 - 133 + 132,
   134 },
  { 142 - 133 + 135,
   134 },
  { 143, 136 },
  { 138, 128 },
  { 139, 129 },
  { 140, 130 },
  { 144, 137 },
  { 141, 131 },
 };

 VAR_18->slow_intr_mask = VAR_14;

 FUNC_5(VAR_18, VAR_19, FUNC_0(VAR_19), 0);
 FUNC_4(VAR_18, VAR_6,
       VAR_18->params.rev >= VAR_16 ? 0x2bfffff : 0x3bfffff);
 FUNC_4(VAR_18, VAR_4, VAR_15);

 if (VAR_18->params.rev > 0) {
  FUNC_4(VAR_18, VAR_0,
        VAR_8 | VAR_9);
  FUNC_4(VAR_18, VAR_7,
        VAR_17 | VAR_10 |
        VAR_11);
 } else {
  FUNC_4(VAR_18, VAR_0, VAR_8);
  FUNC_4(VAR_18, VAR_7, VAR_17);
 }

 FUNC_4(VAR_18, VAR_5, FUNC_1(VAR_18));

 if (FUNC_2(VAR_18))
  FUNC_4(VAR_18, VAR_1, VAR_12);
 else
  FUNC_4(VAR_18, VAR_2, VAR_13);
 FUNC_4(VAR_18, VAR_3, VAR_18->slow_intr_mask);
 (void) FUNC_3(VAR_18, VAR_3);
}
