
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int port_t ;
typedef int ct_board_t ;
struct TYPE_4__ {int member_0; int member_1; } ;
typedef TYPE_1__ const cr_dat_tst_t ;


 int FUNC_0 (int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (int ,unsigned char const*,long,TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (int ,unsigned char const*) ;
 int FUNC_5 (int *,int,int ,int,int,int,long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8 (ct_board_t *VAR_14, int VAR_15, port_t VAR_16, int VAR_17, int VAR_18,
 const unsigned char *VAR_19, long VAR_20, const cr_dat_tst_t *VAR_21,
 const unsigned char *VAR_22)
{
 static long VAR_23 = 182;
 static cr_dat_tst_t VAR_24 [] = {{ 114, 178 }, { 182, 182 }};
 static cr_dat_tst_t VAR_25 [] = {{ 50, 178 }, { 182, 182 }};
 static unsigned char VAR_26 [] = { 155,153,113,48,64,236,
  48,49,49,49,49,49,49,49,49,49,49,49,49,49,49,49,183,};
 static unsigned char VAR_27 [] = { 155,153,113,48,64,236,
  112,37,49,37,33,116,101,100,112,37,49,37,33,116,101,100,230,};
 static unsigned char VAR_28 [] = { 155,153,113,48,64,236,
  112,37,49,37,33,116,101,100,96,97,53,49,49,96,97,100,230,};
 static unsigned char VAR_29 [] = { 155,153,113,48,64,236,
  96,97,53,49,49,96,97,100,96,97,53,49,49,96,97,100,230,};
 static unsigned char VAR_30 [] = { 155,153,113,48,64,236,
  96,97,53,49,49,96,97,100,112,37,49,37,33,116,101,100,230,};
 static unsigned char VAR_31 [] = { 155,153,113,48,64,236,
  112,37,49,37,33,116,101,32,117,37,49,37,33,116,101,100,230,};
 static unsigned char VAR_32 [] = { 155,153,113,48,64,236,
  112,37,49,37,33,116,101,32,101,97,53,49,49,96,97,100,230,};
 static unsigned char VAR_33 [] = { 155,153,113,48,64,236,
  96,97,53,49,49,96,97,32,101,97,53,49,49,96,97,100,230,};
 static unsigned char VAR_34 [] = { 155,153,113,48,64,236,
  96,97,53,49,49,96,97,32,117,37,49,37,33,116,101,100,230,};

 int VAR_35 = VAR_3;
 long VAR_36 = (FUNC_7 (FUNC_1(VAR_16)) & VAR_2) ? 8192000 : 10000000;


 if (FUNC_6 (VAR_16) && FUNC_4 (VAR_16, VAR_22)) {

  unsigned char VAR_37 = FUNC_7 (FUNC_0(VAR_16));
  if (! (VAR_37 & VAR_0))
   VAR_35 = VAR_7;
  else if (VAR_37 & VAR_1)
   VAR_35 = VAR_4;
  else if (FUNC_7(FUNC_2(VAR_16)) & VAR_13)
   VAR_35 = VAR_6;
  else
   VAR_35 = VAR_5;
 } else if (FUNC_3 (VAR_16, VAR_26, VAR_23, VAR_24)) {
  if (! FUNC_3 (VAR_16, VAR_19, VAR_20, VAR_21))
   VAR_35 = VAR_3;
  else {
   unsigned char VAR_38 = FUNC_7 (FUNC_0(VAR_16));
   if (! (VAR_38 & VAR_0))
    VAR_35 = VAR_12;
   else if (VAR_38 & VAR_1)
    VAR_35 = VAR_3;
   else if (FUNC_7(FUNC_2(VAR_16)) & VAR_13)
    VAR_35 = VAR_10;
   else
    VAR_35 = VAR_9;
  }
 } else if (FUNC_3 (VAR_16, VAR_27, VAR_23, VAR_25) ||
     FUNC_3 (VAR_16, VAR_28, VAR_23, VAR_25) ||
     FUNC_3 (VAR_16, VAR_29, VAR_23, VAR_25) ||
     FUNC_3 (VAR_16, VAR_30, VAR_23, VAR_25))
  VAR_35 = VAR_8;
 else if (FUNC_3 (VAR_16, VAR_31, VAR_23, VAR_25) ||
     FUNC_3 (VAR_16, VAR_32, VAR_23, VAR_25) ||
     FUNC_3 (VAR_16, VAR_33, VAR_23, VAR_25) ||
     FUNC_3 (VAR_16, VAR_34, VAR_23, VAR_25))
  VAR_35 = VAR_11;
 FUNC_5 (VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_35, VAR_36);
}
