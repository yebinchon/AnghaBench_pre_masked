
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct i40e_context_ele {int lsb; int width; int offset; } ;
typedef int src_qword ;
typedef int dest_qword ;
typedef int __le64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int*,int,int ) ;

__attribute__((used)) static void FUNC_4(u8 *VAR_2,
       struct i40e_context_ele *VAR_3,
       u8 *VAR_4)
{
 u64 VAR_5, VAR_6;
 u8 *VAR_7, *VAR_8;
 u16 VAR_9;
 __le64 VAR_10;


 VAR_9 = VAR_3->lsb % 8;





 if (VAR_3->width < 64)
  VAR_6 = FUNC_0(VAR_3->width) - 1;
 else
  VAR_6 = ~(u64)0;


 VAR_6 <<= VAR_9;


 VAR_7 = VAR_2 + (VAR_3->lsb / 8);

 FUNC_3(&VAR_10, VAR_7, sizeof(VAR_10), VAR_0);




 VAR_10 &= ~(FUNC_1(VAR_6));


 VAR_5 = FUNC_2(VAR_10);

 VAR_5 >>= VAR_9;


 VAR_8 = VAR_4 + VAR_3->offset;


 FUNC_3(VAR_8, &VAR_5, sizeof(VAR_5),
      VAR_1);
}
