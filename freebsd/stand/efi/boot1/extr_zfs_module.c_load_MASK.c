
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct zfsmount {int dummy; } ;
struct stat {size_t st_size; } ;
struct TYPE_8__ {char* spa_name; } ;
typedef TYPE_1__ spa_t ;
typedef int intmax_t ;
typedef int dnode_phys_t ;
struct TYPE_9__ {int devpath; TYPE_1__* devdata; } ;
typedef TYPE_2__ dev_info_t ;
typedef int EFI_STATUS ;
typedef int CHAR16 ;


 int FUNC_0 (char*,char const*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *,int ,void*,size_t) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (size_t) ;
 int FUNC_6 (char*,char const*,...) ;
 int FUNC_7 (TYPE_1__*,int *,struct stat*) ;
 int FUNC_8 (struct zfsmount*,char const*,int *) ;
 int FUNC_9 (TYPE_1__*,int ,struct zfsmount*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static EFI_STATUS
FUNC_11(const char *VAR_4, dev_info_t *VAR_5, void **VAR_6, size_t *VAR_7)
{
 spa_t *VAR_8;
 struct zfsmount VAR_9;
 dnode_phys_t VAR_10;
 struct stat VAR_11;
 int VAR_12;
 void *VAR_13;

 VAR_8 = VAR_5->devdata;
 if ((VAR_12 = FUNC_10(VAR_8)) != 0) {
  FUNC_0("Failed to load pool '%s' (%d)\n", VAR_8->spa_name, VAR_12);
  return (VAR_1);
 }

 if ((VAR_12 = FUNC_9(VAR_8, 0, &VAR_9)) != 0) {
  FUNC_0("Failed to mount pool '%s' (%d)\n", VAR_8->spa_name, VAR_12);
  return (VAR_1);
 }

 if ((VAR_12 = FUNC_8(&VAR_9, VAR_4, &VAR_10)) != 0) {
  if (VAR_12 == VAR_3) {
   FUNC_0("Failed to find '%s' on pool '%s' (%d)\n",
       VAR_4, VAR_8->spa_name, VAR_12);
   return (VAR_1);
  }
  FUNC_6("Failed to lookup '%s' on pool '%s' (%d)\n", VAR_4,
      VAR_8->spa_name, VAR_12);
  return (VAR_0);
 }

 if ((VAR_12 = FUNC_7(VAR_8, &VAR_10, &VAR_11)) != 0) {
  FUNC_6("Failed to stat '%s' on pool '%s' (%d)\n", VAR_4,
      VAR_8->spa_name, VAR_12);
  return (VAR_0);
 }

 VAR_13 = FUNC_5(VAR_11.st_size);
 if (VAR_13 == ((void*)0)) {
  FUNC_6("Failed to allocate load buffer %jd for pool '%s' for '%s' ",
      (intmax_t)VAR_11.st_size, VAR_8->spa_name, VAR_4);
  return (VAR_0);
 }

 if ((VAR_12 = FUNC_1(VAR_8, &VAR_10, 0, VAR_13, VAR_11.st_size)) != 0) {
  FUNC_6("Failed to read node from %s (%d)\n", VAR_8->spa_name,
      VAR_12);
  FUNC_4(VAR_13);
  return (VAR_0);
 }

 *VAR_7 = VAR_11.st_size;
 *VAR_6 = VAR_13;

 return (VAR_2);
}
