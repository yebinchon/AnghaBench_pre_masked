
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int aad_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t*,size_t) ;
 int FUNC_1 (void*,size_t*,size_t*) ;
 int FUNC_2 (size_t*,size_t const*,size_t) ;
 int FUNC_3 (size_t*,int ,int) ;
 int FUNC_4 (int ,char*,size_t*,int) ;
 int FUNC_5 (size_t*,size_t*) ;

__attribute__((used)) static void FUNC_6(void *VAR_2, size_t VAR_3, size_t VAR_4, const u8 *VAR_5,
          const u8 *VAR_6, size_t VAR_7, size_t VAR_8,
          u8 *VAR_9)
{
 u8 VAR_10[2 * VAR_0];
 u8 VAR_11[VAR_0];



 VAR_11[0] = VAR_7 ? 0x40 : 0 ;
 VAR_11[0] |= (((VAR_3 - 2) / 2) << 3);
 VAR_11[0] |= (VAR_4 - 1) ;
 FUNC_2(&VAR_11[1], VAR_5, 15 - VAR_4);
 FUNC_0(&VAR_11[VAR_0 - VAR_4], VAR_8);

 FUNC_4(VAR_1, "CCM B_0", VAR_11, VAR_0);
 FUNC_1(VAR_2, VAR_11, VAR_9);

 if (!VAR_7)
  return;

 FUNC_0(VAR_10, VAR_7);
 FUNC_2(VAR_10 + 2, VAR_6, VAR_7);
 FUNC_3(VAR_10 + 2 + VAR_7, 0, sizeof(VAR_10) - 2 - VAR_7);

 FUNC_5(VAR_10, VAR_9);
 FUNC_1(VAR_2, VAR_10, VAR_9);

 if (VAR_7 > VAR_0 - 2) {
  FUNC_5(&VAR_10[VAR_0], VAR_9);

  FUNC_1(VAR_2, &VAR_10[VAR_0], VAR_9);
 }
}
