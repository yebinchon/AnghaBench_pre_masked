
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;
typedef int compiler_state_t ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int const VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct block*,struct block*) ;
 struct block* FUNC_1 (int *,int ,int,int ,int ) ;
 struct block* FUNC_2 (int *,int ,int ,int ,int) ;
 int FUNC_3 (struct block*) ;
 int FUNC_4 (struct block*,struct block*) ;
 struct block* FUNC_5 (int *,int,int const) ;

__attribute__((used)) static struct block *
FUNC_6(compiler_state_t *VAR_6, int VAR_7)
{
 struct block *VAR_8, *VAR_9;

 switch (VAR_7) {

 case 129:
 case 131:
 case 128:
  VAR_8 = FUNC_2(VAR_6, VAR_4, 0, VAR_1, VAR_2);
  FUNC_3(VAR_8);
  VAR_9 = FUNC_1(VAR_6, VAR_5, 0, VAR_1, (bpf_int32)
        ((VAR_7 << 8) | VAR_7));
  FUNC_0(VAR_8, VAR_9);
  return VAR_9;

 case 130:
  VAR_8 = FUNC_1(VAR_6, VAR_5, 0, VAR_0, (bpf_int32)130);
  VAR_9 = FUNC_1(VAR_6, VAR_5, 0, VAR_1, (bpf_int32)0xFFFF);
  FUNC_4(VAR_8, VAR_9);





  VAR_8 = FUNC_5(VAR_6, 0x000000, VAR_3);
  FUNC_4(VAR_8, VAR_9);





  VAR_8 = FUNC_2(VAR_6, VAR_4, 0, VAR_1, VAR_2);
  FUNC_3(VAR_8);







  FUNC_0(VAR_8, VAR_9);






  VAR_8 = FUNC_1(VAR_6, VAR_4, 0, VAR_1, (bpf_int32)VAR_3);
  FUNC_4(VAR_8, VAR_9);
  return VAR_9;

 case 132:
 case 133:
  VAR_8 = FUNC_2(VAR_6, VAR_4, 0, VAR_1, VAR_2);
  FUNC_3(VAR_8);
  if (VAR_7 == 132)
   VAR_9 = FUNC_5(VAR_6, 0x080007, 132);
  else
   VAR_9 = FUNC_5(VAR_6, 0x000000, 133);
  FUNC_0(VAR_8, VAR_9);






  VAR_8 = FUNC_1(VAR_6, VAR_4, 0, VAR_1, (bpf_int32)VAR_7);

  FUNC_4(VAR_8, VAR_9);
  return VAR_9;

 default:
  if (VAR_7 <= VAR_2) {
   VAR_8 = FUNC_2(VAR_6, VAR_4, 0, VAR_1, VAR_2);
   FUNC_3(VAR_8);
   VAR_9 = FUNC_1(VAR_6, VAR_4, 2, VAR_0, (bpf_int32)VAR_7);
   FUNC_0(VAR_8, VAR_9);
   return VAR_9;
  } else {
   return FUNC_1(VAR_6, VAR_4, 0, VAR_1,
       (bpf_int32)VAR_7);
  }
 }
}
