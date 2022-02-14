
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int int32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int ) ;
 int FUNC_9 (int *,int ,char**) ;
 int * FUNC_10 (int *,int *) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (char*,char const*,int ,int ,int ,int *,int *) ;
 int FUNC_13 (char*) ;
 int VAR_5 ;

int
FUNC_14(nvlist_t *VAR_6, boolean_t VAR_7,
    nvlist_t *VAR_8)
{
 if (FUNC_10(VAR_6, ((void*)0)) == ((void*)0))
  return (0);
 nvlist_t *VAR_9;
 FUNC_0(FUNC_8(&VAR_9, 0, VAR_1));
 for (nvpair_t *VAR_10 = FUNC_10(VAR_6, ((void*)0));
     VAR_10 != ((void*)0); VAR_10 = FUNC_10(VAR_6, VAR_10)) {
  FUNC_1(VAR_9,
      FUNC_11(VAR_10), VAR_0);
 }

 nvlist_t *VAR_11;
 FUNC_0(FUNC_8(&VAR_11, 0, VAR_1));
 FUNC_3(VAR_11, "snaps", VAR_9);
 FUNC_5(VAR_9);
 FUNC_1(VAR_11, "defer", VAR_7);

 nvlist_t *VAR_12;
 FUNC_0(FUNC_8(&VAR_12, 0, VAR_1));
 FUNC_3(VAR_12, VAR_2, VAR_11);
 FUNC_5(VAR_11);

 const char *VAR_13 =
     "arg = ...\n"
     "snaps = arg['snaps']\n"
     "defer = arg['defer']\n"
     "errors = { }\n"
     "has_errors = false\n"
     "for snap, v in pairs(snaps) do\n"
     "    errno = zfs.check.destroy{snap, defer=defer}\n"
     "    zfs.debug('snap: ' .. snap .. ' errno: ' .. errno)\n"
     "    if errno == ENOENT then\n"
     "        snaps[snap] = nil\n"
     "    elseif errno ~= 0 then\n"
     "        errors[snap] = errno\n"
     "        has_errors = true\n"
     "    end\n"
     "end\n"
     "if has_errors then\n"
     "    return errors\n"
     "end\n"
     "for snap, v in pairs(snaps) do\n"
     "    errno = zfs.sync.destroy{snap, defer=defer}\n"
     "    assert(errno == 0)\n"
     "end\n"
     "return { }\n";

 nvlist_t *VAR_14 = FUNC_4();
 int VAR_15 = FUNC_12(FUNC_11(FUNC_10(VAR_6, ((void*)0))),
     VAR_13,
     VAR_0,
     0,
     VAR_5,
     FUNC_10(VAR_12, ((void*)0)), VAR_14);
 if (VAR_15 != 0) {
  char *VAR_16 = ((void*)0);
  (void) FUNC_9(VAR_14, VAR_3, &VAR_16);
  if (VAR_16 != ((void*)0)) {
   FUNC_13(VAR_16);
  }
  return (VAR_15);
 }
 FUNC_5(VAR_12);






 int VAR_17 = 0;
 nvlist_t *VAR_18 = FUNC_6(VAR_14, VAR_4);
 for (nvpair_t *VAR_19 = FUNC_10(VAR_18, ((void*)0));
     VAR_19 != ((void*)0); VAR_19 = FUNC_10(VAR_18, VAR_19)) {
  int32_t VAR_20 = (int32_t)FUNC_7(VAR_19);
  if (VAR_17 == 0)
   VAR_17 = VAR_20;
  FUNC_2(VAR_8, FUNC_11(VAR_19), VAR_20);
 }
 FUNC_5(VAR_14);
 return (VAR_17);
}
