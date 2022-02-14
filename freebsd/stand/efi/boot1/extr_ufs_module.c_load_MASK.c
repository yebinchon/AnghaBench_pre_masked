
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ufs_ino_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int devpath; } ;
typedef TYPE_1__ dev_info_t ;
typedef int EFI_STATUS ;
typedef int CHAR16 ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int,void*,size_t) ;
 scalar_t__ FUNC_5 (int,int *,int ,size_t*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char const*) ;
 void* FUNC_8 (size_t) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static EFI_STATUS
FUNC_10(const char *VAR_5, dev_info_t *VAR_6, void **VAR_7, size_t *VAR_8)
{
 ufs_ino_t VAR_9;
 size_t VAR_10;
 ssize_t VAR_11;
 void *VAR_12;
 if (FUNC_6(VAR_6) < 0) {
  FUNC_0("Failed to init device\n");
  return (VAR_4);
 }

 if ((VAR_9 = FUNC_7(VAR_5)) == 0) {
  FUNC_0("Failed to lookup '%s' (file not found?)\n", VAR_5);
  return (VAR_1);
 }

 if (FUNC_5(VAR_9, ((void*)0), 0, &VAR_10) < 0 || VAR_10 <= 0) {
  FUNC_9("Failed to read size of '%s' ino: %d\n", VAR_5, VAR_9);
  return (VAR_0);
 }

 VAR_12 = FUNC_8(VAR_10);
 if (VAR_12 == ((void*)0)) {
  FUNC_9("Failed to allocate read buffer %zu for '%s'\n",
      VAR_10, VAR_5);
  return (VAR_2);
 }

 VAR_11 = FUNC_4(VAR_9, VAR_12, VAR_10);
 if ((size_t)VAR_11 != VAR_10) {
  FUNC_9("Failed to read '%s' (%zd != %zu)\n", VAR_5, VAR_11,
      VAR_10);
  FUNC_3(VAR_12);
  return (VAR_0);
 }

 FUNC_0("Load complete\n");

 *VAR_7 = VAR_12;
 *VAR_8 = VAR_10;

 return (VAR_3);
}
