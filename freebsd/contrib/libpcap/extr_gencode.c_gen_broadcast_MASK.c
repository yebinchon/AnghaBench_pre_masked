
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
struct block {int dummy; } ;
struct TYPE_13__ {int netmask; int linktype; } ;
typedef TYPE_1__ compiler_state_t ;
typedef int bpf_u_int32 ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct block* FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (struct block*,struct block*) ;
 struct block* FUNC_3 (TYPE_1__*,int const*,int ) ;
 struct block* FUNC_4 (TYPE_1__*,int const*,int ) ;
 struct block* FUNC_5 (TYPE_1__*,int const*,int ) ;
 struct block* FUNC_6 (TYPE_1__*,int ) ;
 struct block* FUNC_7 (TYPE_1__*,int ,int,int ,int ,int) ;
 int FUNC_8 (struct block*,struct block*) ;
 struct block* FUNC_9 (TYPE_1__*) ;
 struct block* FUNC_10 (TYPE_1__*,int const*,int ) ;
 struct block* FUNC_11 (TYPE_1__*,int const*,int ) ;

struct block *
FUNC_12(compiler_state_t *VAR_6, int VAR_7)
{
 bpf_u_int32 VAR_8;
 struct block *VAR_9, *VAR_10, *VAR_11;
 static const u_char VAR_12[] = { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };

 switch (VAR_7) {

 case 130:
 case 128:
  switch (VAR_6->linktype) {
  case 143:
  case 142:
   return FUNC_1(VAR_6, VAR_5, VAR_4);
  case 141:
  case 134:
  case 133:
   VAR_10 = FUNC_9(VAR_6);
   VAR_9 = FUNC_3(VAR_6, VAR_12, VAR_4);
   if (VAR_10 != ((void*)0))
    FUNC_2(VAR_10, VAR_9);
   return VAR_9;
  case 140:
   return FUNC_4(VAR_6, VAR_12, VAR_4);
  case 139:
   return FUNC_10(VAR_6, VAR_12, VAR_4);
  case 138:
  case 131:
  case 136:
  case 137:
  case 132:
   return FUNC_11(VAR_6, VAR_12, VAR_4);
  case 135:
   return FUNC_5(VAR_6, VAR_12, VAR_4);
  default:
   FUNC_0(VAR_6, "not a broadcast link");
  }
  break;

 case 129:





  if (VAR_6->netmask == VAR_3)
   FUNC_0(VAR_6, "netmask not known, so 'ip broadcast' not supported");
  VAR_9 = FUNC_6(VAR_6, VAR_1);
  VAR_8 = ~VAR_6->netmask;
  VAR_10 = FUNC_7(VAR_6, VAR_2, 16, VAR_0, (bpf_int32)0, VAR_8);
  VAR_11 = FUNC_7(VAR_6, VAR_2, 16, VAR_0,
         (bpf_int32)(~0 & VAR_8), VAR_8);
  FUNC_8(VAR_10, VAR_11);
  FUNC_2(VAR_9, VAR_11);
  return VAR_11;
 }
 FUNC_0(VAR_6, "only link-layer/IP broadcast filters supported");

}
