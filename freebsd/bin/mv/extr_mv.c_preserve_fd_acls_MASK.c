
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_type_t ;
typedef int * acl_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int,int *,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static void
FUNC_6(int VAR_6, int VAR_7, const char *VAR_8,
    const char *VAR_9)
{
 acl_t VAR_10;
 acl_type_t VAR_11;
 int VAR_12 = 0, VAR_13, VAR_14;

 VAR_13 = FUNC_4(VAR_6, VAR_4);
 if (VAR_13 > 0 ) {
  VAR_12 = 1;
  VAR_11 = VAR_1;
 } else if (VAR_13 < 0 && VAR_5 != VAR_2) {
  FUNC_5("fpathconf(..., _PC_ACL_NFS4) failed for %s",
      VAR_8);
  return;
 }
 if (VAR_12 == 0) {
  VAR_13 = FUNC_4(VAR_6, VAR_3);
  if (VAR_13 > 0 ) {
   VAR_12 = 1;
   VAR_11 = VAR_0;
  } else if (VAR_13 < 0 && VAR_5 != VAR_2) {
   FUNC_5("fpathconf(..., _PC_ACL_EXTENDED) failed for %s",
       VAR_8);
   return;
  }
 }
 if (VAR_12 == 0)
  return;

 VAR_10 = FUNC_1(VAR_6, VAR_11);
 if (VAR_10 == ((void*)0)) {
  FUNC_5("failed to get acl entries for %s", VAR_8);
  return;
 }
 if (FUNC_2(VAR_10, &VAR_14)) {
  FUNC_5("acl_is_trivial() failed for %s", VAR_8);
  FUNC_0(VAR_10);
  return;
 }
 if (VAR_14) {
  FUNC_0(VAR_10);
  return;
 }
 if (FUNC_3(VAR_7, VAR_10, VAR_11) < 0) {
  FUNC_5("failed to set acl entries for %s", VAR_9);
  FUNC_0(VAR_10);
  return;
 }
 FUNC_0(VAR_10);
}
