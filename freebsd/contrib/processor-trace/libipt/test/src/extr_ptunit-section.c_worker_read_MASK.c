
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct section_fixture {int section; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int,int) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(void *VAR_3)
{
 struct section_fixture *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = VAR_3;
 if (!VAR_4)
  return -VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  uint8_t VAR_7[] = { 0xcc, 0xcc, 0xcc };
  int VAR_8;

  VAR_6 = FUNC_0(VAR_4->section);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_1(VAR_4->section);
  if (VAR_6 < 0)
   goto out_put;

  VAR_8 = FUNC_3(VAR_4->section, VAR_7, 2, 0x0ull);
  if (VAR_8 < 0)
   goto out_unmap;

  VAR_6 = -VAR_2;
  if ((VAR_8 != 2) || (VAR_7[0] != 0x2) || (VAR_7[1] != 0x4))
   goto out_unmap;

  VAR_6 = FUNC_4(VAR_4->section);
  if (VAR_6 < 0)
   goto out_put;

  VAR_6 = FUNC_2(VAR_4->section);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;

out_unmap:
 (void) FUNC_4(VAR_4->section);

out_put:
 (void) FUNC_2(VAR_4->section);
 return VAR_6;
}
