
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int gcry_md_hd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 unsigned char* FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int const*,size_t) ;
 int FUNC_6 (int ,int const*,size_t const) ;
 int FUNC_7 (int *,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_8(int VAR_2, const u8 *VAR_3, size_t VAR_4,
         size_t VAR_5, const u8 *VAR_6[],
         const size_t *VAR_7, u8 *VAR_8)
{
 gcry_md_hd_t VAR_9;
 unsigned char *VAR_10;
 size_t VAR_11;

 if (FUNC_0())
  return -1;

 if (FUNC_3(&VAR_9, VAR_2, VAR_0) != VAR_1)
  return -1;
 if (FUNC_5(VAR_9, VAR_3, VAR_4) != VAR_1) {
  FUNC_1(VAR_9);
  return -1;
 }
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  FUNC_6(VAR_9, VAR_6[VAR_11], VAR_7[VAR_11]);
 VAR_10 = FUNC_4(VAR_9, VAR_2);
 if (VAR_10)
  FUNC_7(VAR_8, VAR_10, FUNC_2(VAR_2));
 FUNC_1(VAR_9);
 return 0;
}
