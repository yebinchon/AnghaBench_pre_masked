
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {int dummy; } ;
typedef enum e_offrel { ____Placeholder_e_offrel } e_offrel ;
typedef int compiler_state_t ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct block*,struct block*) ;
 struct block* FUNC_1 (int *,int,int,int ,int ,int) ;

__attribute__((used)) static struct block *
FUNC_2(compiler_state_t *VAR_5,
    struct block *(*VAR_6)(compiler_state_t *, int, int, int),
    enum e_offrel VAR_7, int VAR_8)
{
 struct block *VAR_9, *VAR_10;

 VAR_9 = VAR_6(VAR_5, VAR_2, VAR_3, VAR_4);




 VAR_10 = FUNC_1(VAR_5, VAR_7, 8, VAR_0, (bpf_int32)0, 0xc0);
 FUNC_0(VAR_9, VAR_10);
 VAR_9 = VAR_10;

 if (VAR_8 >= 0) {
  VAR_8 <<= 8;
  VAR_10 = FUNC_1(VAR_5, VAR_7, 12, VAR_1, (bpf_int32)VAR_8,
         0xffffff00);
  FUNC_0(VAR_9, VAR_10);
  VAR_9 = VAR_10;
 }

 return VAR_9;
}
