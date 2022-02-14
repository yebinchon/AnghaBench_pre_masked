
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zfs_type; int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct zfs_open_bookmarks_cb_data {char const* member_0; TYPE_1__* zhp; int * member_1; } ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int dsname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ,char*) ;
 scalar_t__ VAR_7 ;
 TYPE_1__* FUNC_2 (int *,char const*) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int ,char*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,struct zfs_open_bookmarks_cb_data*) ;
 int VAR_8 ;
 int FUNC_10 (int *,scalar_t__,char*) ;
 int FUNC_11 (int *,char const*,int,int ) ;

zfs_handle_t *
FUNC_12(libzfs_handle_t *VAR_9, const char *VAR_10, int VAR_11)
{
 zfs_handle_t *VAR_12;
 char VAR_13[1024];
 char *VAR_14;

 (void) FUNC_3(VAR_13, sizeof (VAR_13),
     FUNC_1(VAR_4, "cannot open '%s'"), VAR_10);




 if (!FUNC_11(VAR_9, VAR_10, VAR_11, VAR_0)) {
  (void) FUNC_8(VAR_9, VAR_2, VAR_13);
  return (((void*)0));
 }




 VAR_14 = FUNC_4(VAR_10, '#');
 if (VAR_14 == ((void*)0)) {




  VAR_7 = 0;
  if ((VAR_12 = FUNC_2(VAR_9, VAR_10)) == ((void*)0)) {
   (void) FUNC_10(VAR_9, VAR_7, VAR_13);
   return (((void*)0));
  }
 } else {
  char VAR_15[VAR_5];
  zfs_handle_t *VAR_16;
  struct zfs_open_bookmarks_cb_data VAR_17 = {VAR_10, ((void*)0)};





  FUNC_0(VAR_14 - VAR_10 < sizeof (VAR_15));
  (void) FUNC_6(VAR_15, VAR_10, VAR_14 - VAR_10);
  VAR_15[VAR_14 - VAR_10] = '\0';




  VAR_7 = 0;
  if ((VAR_16 = FUNC_2(VAR_9, VAR_15)) == ((void*)0)) {
   (void) FUNC_10(VAR_9, VAR_7, VAR_13);
   return (((void*)0));
  }




  VAR_7 = 0;
  if ((FUNC_9(VAR_16, VAR_8,
      &VAR_17) == 0) && (VAR_17.zhp == ((void*)0))) {
   (void) FUNC_8(VAR_9, VAR_3, VAR_13);
   FUNC_7(VAR_16);
   return (((void*)0));
  }
  if (VAR_17.zhp == ((void*)0)) {
   (void) FUNC_10(VAR_9, VAR_7, VAR_13);
   FUNC_7(VAR_16);
   return (((void*)0));
  }
  VAR_12 = VAR_17.zhp;




  FUNC_7(VAR_16);
 }

 if (VAR_12 == ((void*)0)) {
  char *VAR_18 = FUNC_4(VAR_10, '@');

  if (VAR_18 != ((void*)0))
   *VAR_18 = '\0';
  VAR_7 = 0;
  if ((VAR_12 = FUNC_2(VAR_9, VAR_10)) == ((void*)0)) {
   (void) FUNC_10(VAR_9, VAR_7, VAR_13);
   return (((void*)0));
  }
  if (VAR_18 != ((void*)0))
   *VAR_18 = '@';
  (void) FUNC_5(VAR_12->zfs_name, VAR_10, sizeof (VAR_12->zfs_name));
  VAR_12->zfs_type = VAR_6;
 }

 if (!(VAR_11 & VAR_12->zfs_type)) {
  (void) FUNC_8(VAR_9, VAR_1, VAR_13);
  FUNC_7(VAR_12);
  return (((void*)0));
 }

 return (VAR_12);
}
