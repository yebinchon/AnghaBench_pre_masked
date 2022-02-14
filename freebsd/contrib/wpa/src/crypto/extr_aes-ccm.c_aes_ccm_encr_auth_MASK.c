
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (void*,int*,int*) ;
 int FUNC_2 (int ,char*,int*,size_t) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, size_t VAR_3, u8 *VAR_4, u8 *VAR_5, u8 *VAR_6)
{
 size_t VAR_7;
 u8 VAR_8[VAR_0];

 FUNC_2(VAR_1, "CCM T", VAR_4, VAR_3);

 FUNC_0(&VAR_5[VAR_0 - 2], 0);
 FUNC_1(VAR_2, VAR_5, VAR_8);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_6[VAR_7] = VAR_4[VAR_7] ^ VAR_8[VAR_7];
 FUNC_2(VAR_1, "CCM U", VAR_6, VAR_3);
}
