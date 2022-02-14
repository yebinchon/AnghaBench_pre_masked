
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct iscache_fixture {int iscache; int * section; } ;
typedef int limits ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(void *VAR_3)
{
 struct iscache_fixture *VAR_4;
 uint64_t VAR_5[] = { 0x8000, 0x3000, 0x12000, 0x0 }, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_4 = VAR_3;
 if (!VAR_4)
  return -VAR_2;

 VAR_10 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {

   VAR_9 = FUNC_1(VAR_4->section[VAR_8]);
   if (VAR_9 < 0)
    return VAR_9;

   VAR_9 = FUNC_2(VAR_4->section[VAR_8]);
   if (VAR_9 < 0)
    return VAR_9;
  }

  if (VAR_7 % 23 != 0)
   continue;

  VAR_6 = VAR_5[VAR_10++];
  VAR_10 %= sizeof(VAR_5) / sizeof(*VAR_5);

  VAR_9 = FUNC_0(&VAR_4->iscache, VAR_6);
  if (VAR_9 < 0)
   return VAR_9;
 }

 return 0;
}
