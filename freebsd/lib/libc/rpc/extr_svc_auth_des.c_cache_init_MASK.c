
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int dummy; } ;


 int VAR_0 ;
 struct cache_entry* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_3;

 VAR_1 = (struct cache_entry *)
  FUNC_1(sizeof(struct cache_entry) * VAR_0);
 FUNC_0((char *)VAR_1,
  sizeof(struct cache_entry) * VAR_0);

 VAR_2 = (short *)FUNC_1(sizeof(short) * VAR_0);



 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2[VAR_3] = VAR_3;
 }
}
