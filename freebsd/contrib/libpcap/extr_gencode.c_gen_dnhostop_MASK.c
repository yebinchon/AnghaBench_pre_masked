
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int ;
struct block {int dummy; } ;
typedef int compiler_state_t ;
typedef scalar_t__ bpf_u_int32 ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct block*,struct block*) ;
 struct block* FUNC_3 (int *,int ,int,int ,int ) ;
 struct block* FUNC_4 (int *,int ) ;
 struct block* FUNC_5 (int *,int ,int,int ,int ,int ) ;
 int FUNC_6 (struct block*,struct block*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct block *
FUNC_8(compiler_state_t *VAR_4, bpf_u_int32 VAR_5, int VAR_6)
{
 struct block *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 u_int VAR_11;
 u_int VAR_12;

 switch (VAR_6) {

 case 131:
  VAR_12 = 1;
  VAR_11 = 7;
  break;

 case 128:
  VAR_12 = 3;
  VAR_11 = 15;
  break;

 case 133:

  VAR_7 = FUNC_8(VAR_4, VAR_5, 128);
  VAR_8 = FUNC_8(VAR_4, VAR_5, 131);
  FUNC_2(VAR_7, VAR_8);
  return VAR_8;

 case 129:
 case 132:

  VAR_7 = FUNC_8(VAR_4, VAR_5, 128);
  VAR_8 = FUNC_8(VAR_4, VAR_5, 131);
  FUNC_6(VAR_7, VAR_8);
  return VAR_8;

 case 130:
  FUNC_1(VAR_4, "ISO host filtering not implemented");

 default:
  FUNC_0();
 }
 VAR_7 = FUNC_4(VAR_4, VAR_2);

 VAR_10 = FUNC_5(VAR_4, VAR_3, 2, VAR_1,
     (bpf_int32)FUNC_7(0x0681), (bpf_int32)FUNC_7(0x07FF));
 VAR_8 = FUNC_3(VAR_4, VAR_3, 2 + 1 + VAR_11,
     VAR_1, (bpf_int32)FUNC_7((u_short)VAR_5));
 FUNC_2(VAR_10, VAR_8);

 VAR_10 = FUNC_5(VAR_4, VAR_3, 2, VAR_0, (bpf_int32)0x06, (bpf_int32)0x7);
 VAR_9 = FUNC_3(VAR_4, VAR_3, 2 + VAR_11, VAR_1, (bpf_int32)FUNC_7((u_short)VAR_5));
 FUNC_2(VAR_10, VAR_9);
 FUNC_6(VAR_9, VAR_8);

 VAR_10 = FUNC_5(VAR_4, VAR_3, 2, VAR_1,
     (bpf_int32)FUNC_7(0x0281), (bpf_int32)FUNC_7(0x07FF));
 VAR_9 = FUNC_3(VAR_4, VAR_3, 2 + 1 + VAR_12, VAR_1, (bpf_int32)FUNC_7((u_short)VAR_5));
 FUNC_2(VAR_10, VAR_9);
 FUNC_6(VAR_9, VAR_8);

 VAR_10 = FUNC_5(VAR_4, VAR_3, 2, VAR_0, (bpf_int32)0x02, (bpf_int32)0x7);
 VAR_9 = FUNC_3(VAR_4, VAR_3, 2 + VAR_12, VAR_1, (bpf_int32)FUNC_7((u_short)VAR_5));
 FUNC_2(VAR_10, VAR_9);
 FUNC_6(VAR_9, VAR_8);


 FUNC_2(VAR_7, VAR_8);
 return VAR_8;
}
