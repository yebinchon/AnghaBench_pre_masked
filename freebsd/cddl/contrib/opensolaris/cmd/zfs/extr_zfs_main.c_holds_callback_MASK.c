
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_2__ {size_t cb_max_namelen; size_t cb_max_taglen; int * cb_snapname; scalar_t__ cb_recursive; int ** cb_nvlp; } ;
typedef TYPE_1__ holds_cbdata_t ;


 int FUNC_0 (int *,char const*,int *) ;
 int * FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int *,int **) ;
 char* FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(zfs_handle_t *VAR_0, void *VAR_1)
{
 holds_cbdata_t *VAR_2 = VAR_1;
 nvlist_t *VAR_3 = *VAR_2->cb_nvlp;
 nvlist_t *VAR_4 = ((void*)0);
 nvpair_t *VAR_5 = ((void*)0);
 const char *VAR_6 = FUNC_7(VAR_0);
 size_t VAR_7 = FUNC_5(VAR_6);

 if (VAR_2->cb_recursive && VAR_2->cb_snapname != ((void*)0)) {
  const char *VAR_8;
  char *VAR_9 = FUNC_3(VAR_6, '@');
  if (VAR_9 == ((void*)0))
   return (0);

  VAR_8 = VAR_9 + 1;
  if (FUNC_4(VAR_2->cb_snapname, VAR_8))
   return (0);
 }

 if (FUNC_6(VAR_0, &VAR_4) != 0)
  return (-1);

 if (VAR_7 > VAR_2->cb_max_namelen)
  VAR_2->cb_max_namelen = VAR_7;

 while ((VAR_5 = FUNC_1(VAR_4, VAR_5)) != ((void*)0)) {
  const char *VAR_10 = FUNC_2(VAR_5);
  size_t VAR_11 = FUNC_5(VAR_10);
  if (VAR_11 > VAR_2->cb_max_taglen)
   VAR_2->cb_max_taglen = VAR_11;
 }

 return (FUNC_0(VAR_3, VAR_6, VAR_4));
}
