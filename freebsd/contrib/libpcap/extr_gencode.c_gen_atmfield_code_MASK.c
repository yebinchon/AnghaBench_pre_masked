
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_5__ {scalar_t__ off_proto; int is_atm; scalar_t__ off_payload; scalar_t__ off_vci; scalar_t__ off_vpi; } ;
typedef TYPE_1__ compiler_state_t ;
typedef int bpf_u_int32 ;
typedef int bpf_int32 ;







 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct block* FUNC_2 (TYPE_1__*,int ,scalar_t__,int ,int,int ,int,int ) ;

struct block *
FUNC_3(compiler_state_t *VAR_5, int VAR_6, bpf_int32 VAR_7,
    bpf_u_int32 VAR_8, int VAR_9)
{
 struct block *VAR_10;

 switch (VAR_6) {

 case 128:
  if (!VAR_5->is_atm)
   FUNC_1(VAR_5, "'vpi' supported only on raw ATM");
  if (VAR_5->off_vpi == VAR_3)
   FUNC_0();
  VAR_10 = FUNC_2(VAR_5, VAR_4, VAR_5->off_vpi, VAR_0, 0xffffffff, VAR_8,
      VAR_9, VAR_7);
  break;

 case 129:
  if (!VAR_5->is_atm)
   FUNC_1(VAR_5, "'vci' supported only on raw ATM");
  if (VAR_5->off_vci == VAR_3)
   FUNC_0();
  VAR_10 = FUNC_2(VAR_5, VAR_4, VAR_5->off_vci, VAR_1, 0xffffffff, VAR_8,
      VAR_9, VAR_7);
  break;

 case 130:
  if (VAR_5->off_proto == VAR_3)
   FUNC_0();
  VAR_10 = FUNC_2(VAR_5, VAR_4, VAR_5->off_proto, VAR_0, 0x0f, VAR_8,
      VAR_9, VAR_7);
  break;

 case 131:
  if (VAR_5->off_payload == VAR_3)
   FUNC_0();
  VAR_10 = FUNC_2(VAR_5, VAR_4, VAR_5->off_payload + VAR_2, VAR_0,
      0xffffffff, VAR_8, VAR_9, VAR_7);
  break;

 case 132:
  if (!VAR_5->is_atm)
   FUNC_1(VAR_5, "'callref' supported only on raw ATM");
  if (VAR_5->off_proto == VAR_3)
   FUNC_0();
  VAR_10 = FUNC_2(VAR_5, VAR_4, VAR_5->off_proto, VAR_0, 0xffffffff,
      VAR_8, VAR_9, VAR_7);
  break;

 default:
  FUNC_0();
 }
 return VAR_10;
}
