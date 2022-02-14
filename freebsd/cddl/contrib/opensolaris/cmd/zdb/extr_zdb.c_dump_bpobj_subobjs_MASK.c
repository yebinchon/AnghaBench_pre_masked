
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
typedef int longlong_t ;
typedef size_t int64_t ;
struct TYPE_3__ {int doi_max_offset; } ;
typedef TYPE_1__ dmu_object_info_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,TYPE_1__*) ;
 int FUNC_2 (int *,int,int ,int,int*,int ) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void
FUNC_6(objset_t *VAR_1, uint64_t VAR_2, void *VAR_3, size_t VAR_4)
{
 dmu_object_info_t VAR_5;

 FUNC_0(FUNC_1(VAR_1, VAR_2, &VAR_5));
 uint64_t *VAR_6 = FUNC_3(VAR_5.doi_max_offset, VAR_0);

 int VAR_7 = FUNC_2(VAR_1, VAR_2, 0, VAR_5.doi_max_offset, VAR_6, 0);
 if (VAR_7 != 0) {
  (void) FUNC_5("got error %u from dmu_read\n", VAR_7);
  FUNC_4(VAR_6, VAR_5.doi_max_offset);
  return;
 }

 int64_t VAR_8 = -1;
 for (uint64_t VAR_9 = 0; VAR_9 < VAR_5.doi_max_offset / 8; VAR_9++) {
  if (VAR_6[VAR_9] != 0)
   VAR_8 = VAR_9;
 }

 for (int64_t VAR_10 = 0; VAR_10 <= VAR_8; VAR_10++) {
  (void) FUNC_5("\t%llu\n", (longlong_t)VAR_6[VAR_10]);
 }
 FUNC_4(VAR_6, VAR_5.doi_max_offset);
}
