
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct macro {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;
 scalar_t__* FUNC_1 (scalar_t__ const) ;
 scalar_t__ const* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int VAR_2 ;
 struct macro** VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 struct page* VAR_6 ;
 int FUNC_5 (char*,char const*,...) ;

int
FUNC_6(const char *VAR_7)
{
 const int32_t *VAR_8, *VAR_9;
 int32_t VAR_10;

 if (FUNC_3(VAR_7) == -1)
  return -1;

 if ((VAR_4 = FUNC_0(*FUNC_2(4))) < 0) {
  FUNC_5("dbm_open(%s): Invalid number of pages: %d",
      VAR_7, VAR_4);
  goto fail;
 }
 VAR_6 = (struct page *)FUNC_2(5);

 if ((VAR_8 = FUNC_1(*FUNC_2(2))) == ((void*)0)) {
  FUNC_5("dbm_open(%s): Invalid offset of macros array", VAR_7);
  goto fail;
 }
 if (FUNC_0(*VAR_8) != VAR_1) {
  FUNC_5("dbm_open(%s): Invalid number of macros: %d",
      VAR_7, FUNC_0(*VAR_8));
  goto fail;
 }
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if ((VAR_9 = FUNC_1(*++VAR_8)) == ((void*)0)) {
   FUNC_5("dbm_open(%s): Invalid offset of macro %d",
       VAR_7, VAR_10);
   goto fail;
  }
  VAR_5[VAR_10] = FUNC_0(*VAR_9);
  VAR_3[VAR_10] = (struct macro *)++VAR_9;
 }
 return 0;

fail:
 FUNC_4();
 VAR_2 = VAR_0;
 return -1;
}
