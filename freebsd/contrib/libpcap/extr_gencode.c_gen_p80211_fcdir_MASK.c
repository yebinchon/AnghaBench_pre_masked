
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_5__ {int linktype; } ;
typedef TYPE_1__ compiler_state_t ;
typedef int bpf_u_int32 ;
typedef int bpf_int32 ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct block* FUNC_1 (TYPE_1__*,int ,int,int ,int ,int ) ;

struct block *
FUNC_2(compiler_state_t *VAR_3, int VAR_4)
{
 struct block *VAR_5;

 switch (VAR_3->linktype) {

 case 131:
 case 128:
 case 129:
 case 130:
  break;

 default:
  FUNC_0(VAR_3, "frame direction supported only with 802.11 headers");

 }

 VAR_5 = FUNC_1(VAR_3, VAR_2, 1, VAR_0, (bpf_int32)VAR_4,
  (bpf_u_int32)VAR_1);

 return (VAR_5);
}
