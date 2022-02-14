
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hdspm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct hdspm*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hdspm *VAR_1, int VAR_2)
{
 u64 VAR_3;

 if (VAR_2 >= 112000)
  VAR_2 /= 4;
 else if (VAR_2 >= 56000)
  VAR_2 /= 2;






 VAR_3 = 110100480000000ULL;
 VAR_3 = FUNC_0(VAR_3, VAR_2);

 FUNC_2(VAR_3 >> 32);
 FUNC_1(VAR_1, VAR_0, (u32)VAR_3);
}
