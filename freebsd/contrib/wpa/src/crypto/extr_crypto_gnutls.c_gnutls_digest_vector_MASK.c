
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int gcry_md_hd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 unsigned char* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int const*,size_t const) ;
 int FUNC_6 (int *,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_7(int VAR_1, size_t VAR_2,
    const u8 *VAR_3[], const size_t *VAR_4, u8 *VAR_5)
{
 gcry_md_hd_t VAR_6;
 unsigned char *VAR_7;
 size_t VAR_8;

 if (FUNC_0())
  return -1;

 if (FUNC_3(&VAR_6, VAR_1, 0) != VAR_0)
  return -1;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_5(VAR_6, VAR_3[VAR_8], VAR_4[VAR_8]);
 VAR_7 = FUNC_4(VAR_6, VAR_1);
 if (VAR_7)
  FUNC_6(VAR_5, VAR_7, FUNC_2(VAR_1));
 FUNC_1(VAR_6);
 return 0;
}
