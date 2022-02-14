
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_11__ {int constant_part; } ;
struct TYPE_10__ {int constant_part; } ;
struct TYPE_9__ {int constant_part; } ;
struct TYPE_12__ {int off_nl_nosnap; int prevlinktype; int linktype; int is_atm; int off_nl; TYPE_3__ off_linkhdr; TYPE_2__ off_linkpl; TYPE_1__ off_linktype; int off_payload; } ;
typedef TYPE_4__ compiler_state_t ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*,int ,int ,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (struct block*,struct block*) ;
 struct block* FUNC_4 (TYPE_4__*,int ,int,int ,int ) ;

struct block *
FUNC_5(compiler_state_t *VAR_7, int VAR_8)
{
 struct block *VAR_9, *VAR_10;

 switch (VAR_8) {

 case 131:

  if (!VAR_7->is_atm)
   FUNC_2(VAR_7, "'metac' supported only on raw ATM");
  VAR_9 = FUNC_4(VAR_7, VAR_2, 0, VAR_3, 0);
  VAR_10 = FUNC_4(VAR_7, VAR_1, 1, VAR_3, 0);
  FUNC_3(VAR_9, VAR_10);
  break;

 case 135:

  if (!VAR_7->is_atm)
   FUNC_2(VAR_7, "'bcc' supported only on raw ATM");
  VAR_9 = FUNC_4(VAR_7, VAR_2, 0, VAR_3, 0);
  VAR_10 = FUNC_4(VAR_7, VAR_1, 2, VAR_3, 0);
  FUNC_3(VAR_9, VAR_10);
  break;

 case 129:

  if (!VAR_7->is_atm)
   FUNC_2(VAR_7, "'oam4sc' supported only on raw ATM");
  VAR_9 = FUNC_4(VAR_7, VAR_2, 0, VAR_3, 0);
  VAR_10 = FUNC_4(VAR_7, VAR_1, 3, VAR_3, 0);
  FUNC_3(VAR_9, VAR_10);
  break;

 case 130:

  if (!VAR_7->is_atm)
   FUNC_2(VAR_7, "'oam4ec' supported only on raw ATM");
  VAR_9 = FUNC_4(VAR_7, VAR_2, 0, VAR_3, 0);
  VAR_10 = FUNC_4(VAR_7, VAR_1, 4, VAR_3, 0);
  FUNC_3(VAR_9, VAR_10);
  break;

 case 128:

  if (!VAR_7->is_atm)
   FUNC_2(VAR_7, "'sc' supported only on raw ATM");
  VAR_9 = FUNC_4(VAR_7, VAR_2, 0, VAR_3, 0);
  VAR_10 = FUNC_4(VAR_7, VAR_1, 5, VAR_3, 0);
  FUNC_3(VAR_9, VAR_10);
  break;

 case 134:

  if (!VAR_7->is_atm)
   FUNC_2(VAR_7, "'ilmic' supported only on raw ATM");
  VAR_9 = FUNC_4(VAR_7, VAR_2, 0, VAR_3, 0);
  VAR_10 = FUNC_4(VAR_7, VAR_1, 16, VAR_3, 0);
  FUNC_3(VAR_9, VAR_10);
  break;

 case 133:

  if (!VAR_7->is_atm)
   FUNC_2(VAR_7, "'lane' supported only on raw ATM");
  VAR_10 = FUNC_4(VAR_7, VAR_0, VAR_5, VAR_3, 0);
  FUNC_0(VAR_7, VAR_4, 0,
      VAR_7->off_payload + 2,
      -1);
  VAR_7->off_linktype.constant_part = VAR_7->off_linkhdr.constant_part + 12;
  VAR_7->off_linkpl.constant_part = VAR_7->off_linkhdr.constant_part + 14;
  VAR_7->off_nl = 0;
  VAR_7->off_nl_nosnap = 3;
  break;

 case 132:

  if (!VAR_7->is_atm)
   FUNC_2(VAR_7, "'llc' supported only on raw ATM");
  VAR_10 = FUNC_4(VAR_7, VAR_0, VAR_6, VAR_3, 0);
  VAR_7->linktype = VAR_7->prevlinktype;
  break;

 default:
  FUNC_1();
 }
 return VAR_10;
}
