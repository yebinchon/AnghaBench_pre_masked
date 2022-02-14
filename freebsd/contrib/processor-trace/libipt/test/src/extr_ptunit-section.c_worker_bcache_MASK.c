
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_fixture {int section; } ;
struct pt_block_cache {int dummy; } ;


 int VAR_0 ;
 struct pt_block_cache* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(void *VAR_3)
{
 struct section_fixture *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = VAR_3;
 if (!VAR_4)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_4->section);
 if (VAR_6 < 0)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  struct pt_block_cache *VAR_7;

  VAR_6 = FUNC_2(VAR_4->section);
  if (VAR_6 < 0)
   goto out_put;

  VAR_6 = FUNC_4(VAR_4->section);
  if (VAR_6 < 0)
   goto out_unmap;

  VAR_7 = FUNC_0(VAR_4->section);
  if (!VAR_7) {
   VAR_6 = -VAR_2;
   goto out_unmap;
  }

  VAR_6 = FUNC_5(VAR_4->section);
  if (VAR_6 < 0)
   goto out_put;
 }

 return FUNC_3(VAR_4->section);

out_unmap:
 (void) FUNC_5(VAR_4->section);

out_put:
 (void) FUNC_3(VAR_4->section);
 return VAR_6;
}
