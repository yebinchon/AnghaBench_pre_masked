
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
 struct block* FUNC_3 (int *) ;
 int FUNC_4 (struct block*,struct block*) ;
 struct block* FUNC_5 (int *,int,int ,int ) ;

struct block *
FUNC_6(compiler_state_t *VAR_2, int VAR_3, int VAR_4, int VAR_5,
    int VAR_6)
{
 struct block *VAR_7, *VAR_8, *VAR_9;


 VAR_9 = FUNC_2(VAR_2, VAR_1, 9, VAR_0, (bpf_int32)VAR_5);
 VAR_7 = FUNC_3(VAR_2);
 FUNC_1(VAR_9, VAR_7);

 switch (VAR_6) {
 case 128:
  VAR_8 = FUNC_5(VAR_2, 0, (bpf_int32)VAR_3, (bpf_int32)VAR_4);
  break;

 case 130:
  VAR_8 = FUNC_5(VAR_2, 2, (bpf_int32)VAR_3, (bpf_int32)VAR_4);
  break;

 case 129:
 case 131:
  VAR_9 = FUNC_5(VAR_2, 0, (bpf_int32)VAR_3, (bpf_int32)VAR_4);
  VAR_8 = FUNC_5(VAR_2, 2, (bpf_int32)VAR_3, (bpf_int32)VAR_4);
  FUNC_4(VAR_9, VAR_8);
  break;

 case 132:
  VAR_9 = FUNC_5(VAR_2, 0, (bpf_int32)VAR_3, (bpf_int32)VAR_4);
  VAR_8 = FUNC_5(VAR_2, 2, (bpf_int32)VAR_3, (bpf_int32)VAR_4);
  FUNC_1(VAR_9, VAR_8);
  break;

 default:
  FUNC_0();
 }
 FUNC_1(VAR_7, VAR_8);

 return VAR_8;
}
