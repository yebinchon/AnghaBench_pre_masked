
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ibv_sge {int length; int addr; scalar_t__ lkey; } ;
struct fw_ri_isgl {scalar_t__ r2; int nsge; scalar_t__ r1; int op; scalar_t__ sge; } ;
typedef scalar_t__ __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct fw_ri_isgl *VAR_2, struct ibv_sge *VAR_3,
        int VAR_4, u32 *VAR_5)
{
 int VAR_6;
 u32 VAR_7 = 0;
 __be64 *VAR_8 = (__be64 *)VAR_2->sge;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if ((VAR_7 + VAR_3[VAR_6].length) < VAR_7)
   return -VAR_0;
  VAR_7 += VAR_3[VAR_6].length;
  *VAR_8++ = FUNC_1(((u64)VAR_3[VAR_6].lkey << 32) |
         VAR_3[VAR_6].length);
  *VAR_8++ = FUNC_1(VAR_3[VAR_6].addr);
 }
 *VAR_8 = 0;
 VAR_2->op = VAR_1;
 VAR_2->r1 = 0;
 VAR_2->nsge = FUNC_0(VAR_4);
 VAR_2->r2 = 0;
 if (VAR_5)
  *VAR_5 = VAR_7;
 return 0;
}
