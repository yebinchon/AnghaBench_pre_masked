
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct block {int dummy; } ;
typedef enum e_offrel { ____Placeholder_e_offrel } e_offrel ;
typedef int compiler_state_t ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct block*,struct block*) ;
 struct block* FUNC_1 (int *,int,int,int ,int) ;

__attribute__((used)) static struct block *
FUNC_2(compiler_state_t *VAR_3, enum e_offrel VAR_4, u_int VAR_5,
    u_int VAR_6, const u_char *VAR_7)
{
 register struct block *VAR_8, *VAR_9;

 VAR_8 = ((void*)0);
 while (VAR_6 >= 4) {
  register const u_char *VAR_10 = &VAR_7[VAR_6 - 4];
  bpf_int32 VAR_11 = ((bpf_int32)VAR_10[0] << 24) |
      ((bpf_int32)VAR_10[1] << 16) | ((bpf_int32)VAR_10[2] << 8) | VAR_10[3];

  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5 + VAR_6 - 4, VAR_2, VAR_11);
  if (VAR_8 != ((void*)0))
   FUNC_0(VAR_8, VAR_9);
  VAR_8 = VAR_9;
  VAR_6 -= 4;
 }
 while (VAR_6 >= 2) {
  register const u_char *VAR_12 = &VAR_7[VAR_6 - 2];
  bpf_int32 VAR_13 = ((bpf_int32)VAR_12[0] << 8) | VAR_12[1];

  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5 + VAR_6 - 2, VAR_1, VAR_13);
  if (VAR_8 != ((void*)0))
   FUNC_0(VAR_8, VAR_9);
  VAR_8 = VAR_9;
  VAR_6 -= 2;
 }
 if (VAR_6 > 0) {
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_0, (bpf_int32)VAR_7[0]);
  if (VAR_8 != ((void*)0))
   FUNC_0(VAR_8, VAR_9);
  VAR_8 = VAR_9;
 }
 return VAR_8;
}
