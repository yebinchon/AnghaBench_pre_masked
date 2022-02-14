
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct iscache_fixture {int iscache; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
 struct iscache_fixture *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2;
 if (!VAR_3)
  return -VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  uint64_t VAR_5, VAR_6, VAR_7;
  int VAR_8, VAR_9;

  VAR_5 = VAR_4 % 7 < 4 ? 0x1000 : 0x2000;
  VAR_6 = VAR_4 % 5 < 3 ? 0x1000 : 0x2000;
  VAR_7 = VAR_4 % 3 < 2 ? 0x1000 : 0x2000;

  VAR_8 = FUNC_0(&VAR_3->iscache, "name",
        VAR_5, VAR_6, VAR_7);
  if (VAR_8 < 0)
   return VAR_8;

  if (VAR_4 % 11 < 9)
   continue;

  VAR_9 = FUNC_1(&VAR_3->iscache);
  if (VAR_9 < 0)
   return VAR_9;
 }

 return 0;
}
