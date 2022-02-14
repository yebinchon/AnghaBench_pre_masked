
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_9__ {int linktype; } ;
typedef TYPE_1__ compiler_state_t ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (struct block*,struct block*) ;
 struct block* FUNC_2 (TYPE_1__*,int ) ;
 struct block* FUNC_3 (TYPE_1__*) ;
 struct block* FUNC_4 (TYPE_1__*,int ,int ,int ,int ) ;
 struct block* FUNC_5 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_6 (struct block*) ;
 struct block* FUNC_7 (TYPE_1__*) ;

struct block *
FUNC_8(compiler_state_t *VAR_5)
{
 struct block *VAR_6, *VAR_7;

 switch (VAR_5->linktype) {

 case 136:




  VAR_6 = FUNC_5(VAR_5, VAR_3, 0, VAR_1, VAR_2);
  FUNC_6(VAR_6);





  VAR_7 = FUNC_4(VAR_5, VAR_4, 0, VAR_1, (bpf_int32)0xFFFF);
  FUNC_6(VAR_7);
  FUNC_1(VAR_6, VAR_7);
  return VAR_7;

 case 128:



  VAR_6 = FUNC_2(VAR_5, VAR_0);
  return VAR_6;

 case 134:



  return FUNC_7(VAR_5);

 case 135:



  return FUNC_7(VAR_5);

 case 137:
  return FUNC_7(VAR_5);

 case 133:
 case 129:
 case 132:
 case 131:
 case 130:



  VAR_6 = FUNC_3(VAR_5);
  return VAR_6;

 default:
  FUNC_0(VAR_5, "'llc' not supported for linktype %d", VAR_5->linktype);

 }
}
