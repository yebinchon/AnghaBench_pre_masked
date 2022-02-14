
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscache_fixture {int * section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(void *VAR_3)
{
 struct iscache_fixture *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_4 = VAR_3;
 if (!VAR_4)
  return -VAR_2;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {

   VAR_7 = FUNC_0(VAR_4->section[VAR_6]);
   if (VAR_7 < 0)
    return VAR_7;

   VAR_7 = FUNC_1(VAR_4->section[VAR_6]);
   if (VAR_7 < 0)
    return VAR_7;
  }
 }

 return 0;
}
