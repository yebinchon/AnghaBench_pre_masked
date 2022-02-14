
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct fman_kg_regs {int * fmkg_indirect; } ;
struct fman_kg_cp_regs {int * kgcpe; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (struct fman_kg_regs*,int ) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct fman_kg_regs *VAR_4,
    uint8_t VAR_5,
    uint8_t VAR_6,
    uint8_t VAR_7,
    struct fman_kg_cp_regs *VAR_8)
{
 struct fman_kg_cp_regs *VAR_9;
 uint32_t VAR_10;
 int VAR_11, VAR_12;


 if (VAR_5 >= VAR_1)
  return -VAR_0;


 VAR_9 = (struct fman_kg_cp_regs *)&(VAR_4->fmkg_indirect[0]);

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  FUNC_2(VAR_8->kgcpe[VAR_11], &VAR_9->kgcpe[VAR_11]);
 }

 VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_3);
 VAR_12 = FUNC_1(VAR_4, VAR_10);
 return VAR_12;
}
