
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;
typedef int compiler_state_t ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 () ;
 int FUNC_1 (struct block*,struct block*) ;
 struct block* FUNC_2 (int *,int ,int,int ,int ) ;
 int FUNC_3 (struct block*,struct block*) ;
 struct block* FUNC_4 (int *,int,int ) ;

struct block *
FUNC_5(compiler_state_t *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct block *VAR_6, *VAR_7, *VAR_8;



 VAR_6 = FUNC_2(VAR_2, VAR_1, 6, VAR_0, (bpf_int32)VAR_4);

 switch (VAR_5) {
 case 128:
  VAR_7 = FUNC_4(VAR_2, 0, (bpf_int32)VAR_3);
  break;

 case 130:
  VAR_7 = FUNC_4(VAR_2, 2, (bpf_int32)VAR_3);
  break;

 case 129:
 case 131:
  VAR_8 = FUNC_4(VAR_2, 0, (bpf_int32)VAR_3);
  VAR_7 = FUNC_4(VAR_2, 2, (bpf_int32)VAR_3);
  FUNC_3(VAR_8, VAR_7);
  break;

 case 132:
  VAR_8 = FUNC_4(VAR_2, 0, (bpf_int32)VAR_3);
  VAR_7 = FUNC_4(VAR_2, 2, (bpf_int32)VAR_3);
  FUNC_1(VAR_8, VAR_7);
  break;

 default:
  FUNC_0();
 }
 FUNC_1(VAR_6, VAR_7);

 return VAR_7;
}
