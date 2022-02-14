
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_section {int dummy; } ;
struct iscache_fixture {int iscache; struct pt_section** section; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct pt_section*,int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
 struct iscache_fixture *VAR_3;
 struct pt_section *VAR_4;
 int VAR_5;

 VAR_3 = VAR_2;
 if (!VAR_3)
  return -VAR_1;

 VAR_4 = VAR_3->section[0];
 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  uint64_t VAR_6;
  int VAR_7, VAR_8;

  VAR_6 = (uint64_t) VAR_5 << 3;

  VAR_7 = FUNC_0(&VAR_3->iscache, VAR_4, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_8 = FUNC_1(&VAR_3->iscache);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
