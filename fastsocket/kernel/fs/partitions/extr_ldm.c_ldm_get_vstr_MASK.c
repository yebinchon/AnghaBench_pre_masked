
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_3 (const u8 *VAR_0, u8 *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0 (!VAR_0 || !VAR_1);

 VAR_3 = VAR_0[0];
 if (VAR_3 >= VAR_2) {
  FUNC_1 ("Truncating string %d -> %d.", VAR_3, VAR_2);
  VAR_3 = VAR_2 - 1;
 }
 FUNC_2 (VAR_1, VAR_0 + 1, VAR_3);
 VAR_1[VAR_3] = 0;
 return VAR_3;
}
