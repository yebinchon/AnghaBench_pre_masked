
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {int dummy; } ;
struct iscache_fixture {struct pt_section** section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_section*) ;
 int FUNC_1 (struct pt_section*) ;
 int FUNC_2 (struct pt_section*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(void *VAR_3)
{
 struct iscache_fixture *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_4 = VAR_3;
 if (!VAR_4)
  return -VAR_2;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
   struct pt_section *VAR_8;

   VAR_8 = VAR_4->section[VAR_6];

   VAR_7 = FUNC_0(VAR_8);
   if (VAR_7 < 0)
    return VAR_7;

   if (VAR_5 % 13 == 0) {
    VAR_7 = FUNC_1(VAR_8);
    if (VAR_7 < 0) {
     (void) FUNC_2(VAR_8);
     return VAR_7;
    }
   }

   VAR_7 = FUNC_2(VAR_8);
   if (VAR_7 < 0)
    return VAR_7;
  }
 }

 return 0;
}
