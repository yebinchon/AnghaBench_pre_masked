
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int acl_type_t ;
typedef int * acl_t ;
struct TYPE_2__ {int p_path; } ;


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
 TYPE_1__ VAR_6 ;
 int FUNC_5 (char*,int ) ;

int
FUNC_6(int VAR_7, int VAR_8)
{
 acl_t VAR_9;
 acl_type_t VAR_10;
 int VAR_11 = 0, VAR_12, VAR_13;

 VAR_12 = FUNC_4(VAR_7, VAR_4);
 if (VAR_12 > 0 ) {
  VAR_11 = 1;
  VAR_10 = VAR_1;
 } else if (VAR_12 < 0 && VAR_5 != VAR_2) {
  FUNC_5("fpathconf(..., _PC_ACL_NFS4) failed for %s", VAR_6.p_path);
  return (1);
 }
 if (VAR_11 == 0) {
  VAR_12 = FUNC_4(VAR_7, VAR_3);
  if (VAR_12 > 0 ) {
   VAR_11 = 1;
   VAR_10 = VAR_0;
  } else if (VAR_12 < 0 && VAR_5 != VAR_2) {
   FUNC_5("fpathconf(..., _PC_ACL_EXTENDED) failed for %s",
       VAR_6.p_path);
   return (1);
  }
 }
 if (VAR_11 == 0)
  return (0);

 VAR_9 = FUNC_1(VAR_7, VAR_10);
 if (VAR_9 == ((void*)0)) {
  FUNC_5("failed to get acl entries while setting %s", VAR_6.p_path);
  return (1);
 }
 if (FUNC_2(VAR_9, &VAR_13)) {
  FUNC_5("acl_is_trivial() failed for %s", VAR_6.p_path);
  FUNC_0(VAR_9);
  return (1);
 }
 if (VAR_13) {
  FUNC_0(VAR_9);
  return (0);
 }
 if (FUNC_3(VAR_8, VAR_9, VAR_10) < 0) {
  FUNC_5("failed to set acl entries for %s", VAR_6.p_path);
  FUNC_0(VAR_9);
  return (1);
 }
 FUNC_0(VAR_9);
 return (0);
}
