
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printc {int dummy; } ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int *) ;
 scalar_t__ FUNC_1 (int **) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int ,int *,struct printc*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_7(const char *VAR_2, struct printc *VAR_3)
{
 nvpair_t *VAR_4;
 nvlist_t *VAR_5, *VAR_6;

 if (FUNC_1(&VAR_5) != 0) {
  FUNC_2(VAR_1, "bectl list: failed to allocate snapshot nvlist\n");
  return (1);
 }
 if (FUNC_0(VAR_0, VAR_2, VAR_5) != 0) {
  FUNC_2(VAR_1, "bectl list: failed to fetch boot ds snapshots\n");
  return (1);
 }
 for (VAR_4 = FUNC_3(VAR_5, ((void*)0)); VAR_4 != ((void*)0);
     VAR_4 = FUNC_3(VAR_5, VAR_4)) {
  FUNC_5(VAR_4, &VAR_6);
  FUNC_6(FUNC_4(VAR_4), VAR_6, VAR_3);
 }
 return (0);
}
