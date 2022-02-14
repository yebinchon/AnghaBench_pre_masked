
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_5__ {int linktype; } ;
typedef TYPE_1__ compiler_state_t ;
typedef int bpf_int32 ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct block* FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int ) ;

struct block *
FUNC_2(compiler_state_t *VAR_2, int VAR_3, int VAR_4)
{
 struct block *VAR_5;

 switch (VAR_2->linktype) {

 case 131:
 case 128:
 case 129:
 case 130:
  VAR_5 = FUNC_1(VAR_2, VAR_1, 0, VAR_0, (bpf_int32)VAR_3,
      (bpf_int32)VAR_4);
  break;

 default:
  FUNC_0(VAR_2, "802.11 link-layer types supported only on 802.11");

 }

 return (VAR_5);
}
