
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_6__ {int label_stack_depth; } ;
typedef TYPE_1__ compiler_state_t ;
typedef int bpf_u_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 struct block* FUNC_2 (TYPE_1__*,int ,int) ;
 struct block* FUNC_3 (TYPE_1__*,int ,int ,int,int ,int,int) ;
 int FUNC_4 (struct block*,struct block*) ;

__attribute__((used)) static struct block *
FUNC_5(compiler_state_t *VAR_4, bpf_u_int32 VAR_5, bpf_u_int32 VAR_6,
    int VAR_7, int VAR_8, int VAR_9)
{
 struct block *VAR_10, *VAR_11;
 const char *VAR_12;

 if (VAR_9 == VAR_3)
  VAR_12 = "net";
 else
  VAR_12 = "host";

 switch (VAR_7) {

 case 152:
  VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_6, 145, VAR_8, VAR_9);




  if (VAR_4->label_stack_depth == 0) {
   VAR_11 = FUNC_5(VAR_4, VAR_5, VAR_6, 157, VAR_8, VAR_9);
   FUNC_4(VAR_10, VAR_11);
   VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_6, 134, VAR_8, VAR_9);
   FUNC_4(VAR_11, VAR_10);
  }
  return VAR_10;

 case 145:
  return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_8, VAR_1, 12, 16);

 case 134:
  return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_8, VAR_2, 14, 24);

 case 157:
  return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_8, VAR_0, 14, 24);

 case 130:
  FUNC_1(VAR_4, "'tcp' modifier applied to %s", VAR_12);

 case 132:
  FUNC_1(VAR_4, "'sctp' modifier applied to %s", VAR_12);

 case 129:
  FUNC_1(VAR_4, "'udp' modifier applied to %s", VAR_12);

 case 149:
  FUNC_1(VAR_4, "'icmp' modifier applied to %s", VAR_12);

 case 147:
  FUNC_1(VAR_4, "'igmp' modifier applied to %s", VAR_12);

 case 146:
  FUNC_1(VAR_4, "'igrp' modifier applied to %s", VAR_12);

 case 136:
  FUNC_1(VAR_4, "'pim' modifier applied to %s", VAR_12);

 case 128:
  FUNC_1(VAR_4, "'vrrp' modifier applied to %s", VAR_12);

 case 155:
  FUNC_1(VAR_4, "'carp' modifier applied to %s", VAR_12);

 case 156:
  FUNC_1(VAR_4, "ATALK host filtering not implemented");

 case 159:
  FUNC_1(VAR_4, "AARP host filtering not implemented");

 case 153:
  return FUNC_2(VAR_4, VAR_5, VAR_8);

 case 133:
  FUNC_1(VAR_4, "SCA host filtering not implemented");

 case 140:
  FUNC_1(VAR_4, "LAT host filtering not implemented");

 case 139:
  FUNC_1(VAR_4, "MOPDL host filtering not implemented");

 case 138:
  FUNC_1(VAR_4, "MOPRC host filtering not implemented");

 case 144:
  FUNC_1(VAR_4, "'ip6' modifier applied to ip host");

 case 148:
  FUNC_1(VAR_4, "'icmp6' modifier applied to %s", VAR_12);

 case 158:
  FUNC_1(VAR_4, "'ah' modifier applied to %s", VAR_12);

 case 150:
  FUNC_1(VAR_4, "'esp' modifier applied to %s", VAR_12);

 case 141:
  FUNC_1(VAR_4, "ISO host filtering not implemented");

 case 151:
  FUNC_1(VAR_4, "'esis' modifier applied to %s", VAR_12);

 case 142:
  FUNC_1(VAR_4, "'isis' modifier applied to %s", VAR_12);

 case 154:
  FUNC_1(VAR_4, "'clnp' modifier applied to %s", VAR_12);

 case 131:
  FUNC_1(VAR_4, "'stp' modifier applied to %s", VAR_12);

 case 143:
  FUNC_1(VAR_4, "IPX host filtering not implemented");

 case 137:
  FUNC_1(VAR_4, "'netbeui' modifier applied to %s", VAR_12);

 case 135:
  FUNC_1(VAR_4, "'radio' modifier applied to %s", VAR_12);

 default:
  FUNC_0();
 }

}
