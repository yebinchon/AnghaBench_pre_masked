
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_7__ {int is_atm; } ;
typedef TYPE_1__ compiler_state_t ;


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
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct block*,struct block*) ;
 struct block* FUNC_3 (TYPE_1__*,int ,int,int ,int ) ;
 struct block* FUNC_4 (TYPE_1__*,int ) ;
 struct block* FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (struct block*,struct block*) ;

struct block *
FUNC_7(compiler_state_t *VAR_11, int VAR_12)
{
 struct block *VAR_13, *VAR_14;

 switch (VAR_12) {

 case 129:
  if (!VAR_11->is_atm)
   FUNC_1(VAR_11, "'oam' supported only on raw ATM");
  VAR_14 = FUNC_7(VAR_11, 128);
  break;

 case 128:
  if (!VAR_11->is_atm)
   FUNC_1(VAR_11, "'oamf4' supported only on raw ATM");

  VAR_13 = FUNC_3(VAR_11, VAR_8, 3, VAR_10, 0);
  VAR_14 = FUNC_3(VAR_11, VAR_8, 4, VAR_10, 0);
  FUNC_6(VAR_13, VAR_14);
  VAR_13 = FUNC_3(VAR_11, VAR_9, 0, VAR_10, 0);
  FUNC_2(VAR_13, VAR_14);
  break;

 case 131:




  if (!VAR_11->is_atm)
   FUNC_1(VAR_11, "'connectmsg' supported only on raw ATM");
  VAR_13 = FUNC_5(VAR_11, VAR_7);
  VAR_14 = FUNC_5(VAR_11, VAR_0);
  FUNC_6(VAR_13, VAR_14);
  VAR_13 = FUNC_5(VAR_11, VAR_1);
  FUNC_6(VAR_13, VAR_14);
  VAR_13 = FUNC_5(VAR_11, VAR_2);
  FUNC_6(VAR_13, VAR_14);
  VAR_13 = FUNC_5(VAR_11, VAR_4);
  FUNC_6(VAR_13, VAR_14);
  VAR_13 = FUNC_5(VAR_11, VAR_5);
  FUNC_6(VAR_13, VAR_14);
  VAR_13 = FUNC_4(VAR_11, VAR_6);
  FUNC_2(VAR_13, VAR_14);
  break;

 case 130:
  if (!VAR_11->is_atm)
   FUNC_1(VAR_11, "'metaconnect' supported only on raw ATM");
  VAR_13 = FUNC_5(VAR_11, VAR_7);
  VAR_14 = FUNC_5(VAR_11, VAR_0);
  FUNC_6(VAR_13, VAR_14);
  VAR_13 = FUNC_5(VAR_11, VAR_1);
  FUNC_6(VAR_13, VAR_14);
  VAR_13 = FUNC_5(VAR_11, VAR_4);
  FUNC_6(VAR_13, VAR_14);
  VAR_13 = FUNC_5(VAR_11, VAR_5);
  FUNC_6(VAR_13, VAR_14);
  VAR_13 = FUNC_4(VAR_11, VAR_3);
  FUNC_2(VAR_13, VAR_14);
  break;

 default:
  FUNC_0();
 }
 return VAR_14;
}
