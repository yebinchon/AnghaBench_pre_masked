
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_7__ {int linktype; } ;
typedef TYPE_1__ compiler_state_t ;
typedef long bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct block*,struct block*) ;
 struct block* FUNC_3 (TYPE_1__*,int ,int,int ,long) ;
 struct block* FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct block*,struct block*) ;
 struct block* FUNC_6 (TYPE_1__*,int,int const) ;

__attribute__((used)) static struct block *
FUNC_7(compiler_state_t *VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 struct block *VAR_14, *VAR_15;

 struct block *VAR_16;


 if (VAR_13 != 152)
  FUNC_1(VAR_10, "direction applied to 'proto'");

 switch (VAR_12) {
 case 152:
  VAR_14 = FUNC_7(VAR_10, VAR_11, 146, VAR_13);
  VAR_15 = FUNC_7(VAR_10, VAR_11, 145, VAR_13);
  FUNC_5(VAR_14, VAR_15);
  return VAR_15;

 case 146:
  VAR_14 = FUNC_4(VAR_10, VAR_2);

  VAR_15 = FUNC_3(VAR_10, VAR_8, 9, VAR_0, (bpf_int32)VAR_11);



  FUNC_2(VAR_14, VAR_15);
  return VAR_15;

 case 142:
  switch (VAR_10->linktype) {

  case 158:
   return FUNC_3(VAR_10, VAR_7, 2, VAR_1, (0x03<<8) | VAR_11);

   break;

  case 159:




   VAR_14 = FUNC_4(VAR_10, VAR_6<<8 | VAR_6);

   VAR_15 = FUNC_3(VAR_10, VAR_9, 1, VAR_0, (long)VAR_11);
   FUNC_2(VAR_14, VAR_15);
   return VAR_15;

  default:
   VAR_14 = FUNC_4(VAR_10, VAR_6);
   VAR_15 = FUNC_3(VAR_10, VAR_9, 0, VAR_0, (long)VAR_11);
   FUNC_2(VAR_14, VAR_15);
   return VAR_15;
  }

 case 143:
  VAR_14 = FUNC_7(VAR_10, VAR_5, 142, 152);




  VAR_15 = FUNC_3(VAR_10, VAR_9, 4, VAR_0, (long)VAR_11);
  FUNC_2(VAR_14, VAR_15);
  return VAR_15;

 case 156:
  FUNC_1(VAR_10, "arp does not encapsulate another protocol");


 case 134:
  FUNC_1(VAR_10, "rarp does not encapsulate another protocol");


 case 155:
  FUNC_1(VAR_10, "atalk encapsulation is not specifiable");


 case 153:
  FUNC_1(VAR_10, "decnet encapsulation is not specifiable");


 case 133:
  FUNC_1(VAR_10, "sca does not encapsulate another protocol");


 case 141:
  FUNC_1(VAR_10, "lat does not encapsulate another protocol");


 case 138:
  FUNC_1(VAR_10, "moprc does not encapsulate another protocol");


 case 139:
  FUNC_1(VAR_10, "mopdl does not encapsulate another protocol");


 case 140:
  return FUNC_4(VAR_10, VAR_11);

 case 129:
  FUNC_1(VAR_10, "'udp proto' is bogus");


 case 130:
  FUNC_1(VAR_10, "'tcp proto' is bogus");


 case 132:
  FUNC_1(VAR_10, "'sctp proto' is bogus");


 case 150:
  FUNC_1(VAR_10, "'icmp proto' is bogus");


 case 148:
  FUNC_1(VAR_10, "'igmp proto' is bogus");


 case 147:
  FUNC_1(VAR_10, "'igrp proto' is bogus");


 case 136:
  FUNC_1(VAR_10, "'pim proto' is bogus");


 case 128:
  FUNC_1(VAR_10, "'vrrp proto' is bogus");


 case 154:
  FUNC_1(VAR_10, "'carp proto' is bogus");


 case 145:
  VAR_14 = FUNC_4(VAR_10, VAR_3);





  VAR_16 = FUNC_3(VAR_10, VAR_8, 6, VAR_0, VAR_4);
  VAR_15 = FUNC_3(VAR_10, VAR_8, 40, VAR_0, (bpf_int32)VAR_11);
  FUNC_2(VAR_16, VAR_15);
  VAR_16 = FUNC_3(VAR_10, VAR_8, 6, VAR_0, (bpf_int32)VAR_11);
  FUNC_5(VAR_16, VAR_15);



  FUNC_2(VAR_14, VAR_15);
  return VAR_15;

 case 149:
  FUNC_1(VAR_10, "'icmp6 proto' is bogus");

 case 157:
  FUNC_1(VAR_10, "'ah proto' is bogus");

 case 151:
  FUNC_1(VAR_10, "'ah proto' is bogus");

 case 131:
  FUNC_1(VAR_10, "'stp proto' is bogus");

 case 144:
  FUNC_1(VAR_10, "'ipx proto' is bogus");

 case 137:
  FUNC_1(VAR_10, "'netbeui proto' is bogus");

 case 135:
  FUNC_1(VAR_10, "'radio proto' is bogus");

 default:
  FUNC_0();

 }

}
