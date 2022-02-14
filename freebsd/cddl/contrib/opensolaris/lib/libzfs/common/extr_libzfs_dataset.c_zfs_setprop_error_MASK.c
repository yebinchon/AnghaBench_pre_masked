
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef int libzfs_handle_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;



 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int const,char*) ;

void
FUNC_4(libzfs_handle_t *VAR_13, zfs_prop_t VAR_14, int VAR_15,
    char *VAR_16)
{
 switch (VAR_15) {

 case 136:





  switch (VAR_14) {
  case 131:
  case 130:
   FUNC_2(VAR_13, FUNC_0(VAR_6,
       "size is less than current used or "
       "reserved space"));
   (void) FUNC_1(VAR_13, VAR_4, VAR_16);
   break;

  case 128:
  case 129:
   FUNC_2(VAR_13, FUNC_0(VAR_6,
       "size is greater than available space"));
   (void) FUNC_1(VAR_13, VAR_4, VAR_16);
   break;

  default:
   (void) FUNC_3(VAR_13, VAR_15, VAR_16);
   break;
  }
  break;

 case 139:
  (void) FUNC_3(VAR_13, 139, VAR_16);
  break;

 case 132:
  (void) FUNC_1(VAR_13, VAR_2, VAR_16);
  break;

 case 140:
  FUNC_2(VAR_13, FUNC_0(VAR_6,
      "property value too long"));
  (void) FUNC_1(VAR_13, VAR_0, VAR_16);
  break;

 case 135:
  FUNC_2(VAR_13, FUNC_0(VAR_6,
      "pool and or dataset must be upgraded to set this "
      "property or value"));
  (void) FUNC_1(VAR_13, VAR_1, VAR_16);
  break;

 case 133:
 case 138:
  if (VAR_14 == VAR_8 ||
      VAR_14 == VAR_10) {
   (void) FUNC_2(VAR_13, FUNC_0(VAR_6,
       "property setting is not allowed on "
       "bootable datasets"));
   (void) FUNC_1(VAR_13, VAR_3, VAR_16);
  } else if (VAR_14 == VAR_7 ||
      VAR_14 == VAR_9) {
   (void) FUNC_2(VAR_13, FUNC_0(VAR_6,
       "property setting is not allowed on "
       "root pools"));
   (void) FUNC_1(VAR_13, VAR_3, VAR_16);
  } else {
   (void) FUNC_3(VAR_13, VAR_15, VAR_16);
  }
  break;

 case 137:
  if (VAR_14 == VAR_12) {
   (void) FUNC_1(VAR_13, VAR_0, VAR_16);
  } else {
   (void) FUNC_3(VAR_13, VAR_15, VAR_16);
  }
  break;

 case 134:
 default:
  (void) FUNC_3(VAR_13, VAR_15, VAR_16);
 }
}
