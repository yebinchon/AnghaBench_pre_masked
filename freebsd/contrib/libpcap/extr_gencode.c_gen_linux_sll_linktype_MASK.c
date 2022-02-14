
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct block {int dummy; } ;
struct TYPE_6__ {int constant_part; } ;
struct TYPE_7__ {TYPE_1__ off_linkpl; } ;
typedef TYPE_2__ compiler_state_t ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct block*,struct block*) ;
 struct block* FUNC_1 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_2 (struct block*,struct block*) ;
 struct block* FUNC_3 (TYPE_2__*,int,int const) ;

__attribute__((used)) static struct block *
FUNC_4(compiler_state_t *VAR_9, int VAR_10)
{
 struct block *VAR_11, *VAR_12;

 switch (VAR_10) {

 case 129:
 case 131:
 case 128:
  VAR_11 = FUNC_1(VAR_9, VAR_7, 0, VAR_1, VAR_4);
  VAR_12 = FUNC_1(VAR_9, VAR_8, 0, VAR_1, (bpf_int32)
        ((VAR_10 << 8) | VAR_10));
  FUNC_0(VAR_11, VAR_12);
  return VAR_12;

 case 130:
  VAR_11 = FUNC_1(VAR_9, VAR_8, 0, VAR_0, (bpf_int32)130);
  VAR_12 = FUNC_3(VAR_9, 0x000000, VAR_3);
  FUNC_2(VAR_11, VAR_12);
  VAR_11 = FUNC_1(VAR_9, VAR_7, 0, VAR_1, VAR_4);
  FUNC_0(VAR_11, VAR_12);





  VAR_11 = FUNC_1(VAR_9, VAR_7, 0, VAR_1, VAR_5);
  FUNC_2(VAR_11, VAR_12);






  VAR_11 = FUNC_1(VAR_9, VAR_7, 0, VAR_1, (bpf_int32)VAR_3);
  FUNC_2(VAR_11, VAR_12);
  return VAR_12;

 case 132:
 case 133:
  VAR_11 = FUNC_1(VAR_9, VAR_7, 0, VAR_1, VAR_4);
  if (VAR_10 == 132)
   VAR_12 = FUNC_3(VAR_9, 0x080007, 132);
  else
   VAR_12 = FUNC_3(VAR_9, 0x000000, 133);
  FUNC_0(VAR_11, VAR_12);






  VAR_11 = FUNC_1(VAR_9, VAR_7, 0, VAR_1, (bpf_int32)VAR_10);

  FUNC_2(VAR_11, VAR_12);
  return VAR_12;

 default:
  if (VAR_10 <= VAR_2) {







   VAR_11 = FUNC_1(VAR_9, VAR_7, 0, VAR_1, VAR_4);
   VAR_12 = FUNC_1(VAR_9, VAR_6, VAR_9->off_linkpl.constant_part, VAR_0,
        (bpf_int32)VAR_10);
   FUNC_0(VAR_11, VAR_12);
   return VAR_12;
  } else {
   return FUNC_1(VAR_9, VAR_7, 0, VAR_1, (bpf_int32)VAR_10);
  }
 }
}
