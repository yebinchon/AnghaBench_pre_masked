
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40e_context_ele {int offset; int lsb; int width; } ;
typedef int dest_word ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int,int ) ;

__attribute__((used)) static void FUNC_3(u8 *VAR_2,
       struct i40e_context_ele *VAR_3,
       u8 *VAR_4)
{
 u16 VAR_5, VAR_6;
 u8 *VAR_7, *VAR_8;
 u16 VAR_9;
 __le16 VAR_10;


 VAR_7 = VAR_4 + VAR_3->offset;


 VAR_9 = VAR_3->lsb % 8;
 VAR_6 = FUNC_0(VAR_3->width) - 1;




 VAR_5 = *(u16 *)VAR_7;
 VAR_5 &= VAR_6;


 VAR_6 <<= VAR_9;
 VAR_5 <<= VAR_9;


 VAR_8 = VAR_2 + (VAR_3->lsb / 8);

 FUNC_2(&VAR_10, VAR_8, sizeof(VAR_10), VAR_0);

 VAR_10 &= ~(FUNC_1(VAR_6));
 VAR_10 |= FUNC_1(VAR_5);


 FUNC_2(VAR_8, &VAR_10, sizeof(VAR_10), VAR_1);
}
