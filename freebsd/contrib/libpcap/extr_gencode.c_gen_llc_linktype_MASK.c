
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;
typedef int compiler_state_t ;
typedef int bpf_u_int32 ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 struct block* FUNC_0 (int *,int ,int,int ,int ) ;
 struct block* FUNC_1 (int *,int,int const) ;

__attribute__((used)) static struct block *
FUNC_2(compiler_state_t *VAR_4, int VAR_5)
{



 switch (VAR_5) {

 case 131:
 case 129:
 case 128:





  return FUNC_0(VAR_4, VAR_3, 0, VAR_1, (bpf_u_int32)
        ((VAR_5 << 8) | VAR_5));

 case 130:




  return FUNC_0(VAR_4, VAR_3, 0, VAR_0,
      (bpf_int32)130);

 case 132:
  return FUNC_1(VAR_4, 0x080007, 132);

 default:




  if (VAR_5 <= VAR_2) {




   return FUNC_0(VAR_4, VAR_3, 0, VAR_0, (bpf_int32)VAR_5);
  } else {
   return FUNC_0(VAR_4, VAR_3, 6, VAR_1, (bpf_int32)VAR_5);
  }
 }
}
