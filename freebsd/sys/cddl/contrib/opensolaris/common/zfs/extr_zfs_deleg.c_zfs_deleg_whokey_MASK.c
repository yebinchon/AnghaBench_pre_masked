
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_deleg_who_type_t ;
typedef int uint64_t ;
typedef int longlong_t ;


 int FUNC_0 (int) ;




 int VAR_0 ;






 int VAR_1 ;
 int FUNC_1 (char*,int,char*,int,char,...) ;

void
FUNC_2(char *VAR_2, zfs_deleg_who_type_t VAR_3,
    char VAR_4, void *VAR_5)
{
 int VAR_6 = VAR_1;
 uint64_t *VAR_7 = VAR_5;

 switch (VAR_3) {
 case 129:
 case 133:
 case 128:
 case 132:
  (void) FUNC_1(VAR_2, VAR_6, "%c%c%c%lld", VAR_3, VAR_4,
      VAR_0, (longlong_t)*VAR_7);
  break;
 case 130:
 case 131:
  (void) FUNC_1(VAR_2, VAR_6, "%c-%c%s", VAR_3,
      VAR_0, (char *)VAR_5);
  break;
 case 137:
 case 136:
  (void) FUNC_1(VAR_2, VAR_6, "%c-%c", VAR_3,
      VAR_0);
  break;
 case 135:
 case 134:
  (void) FUNC_1(VAR_2, VAR_6, "%c%c%c", VAR_3, VAR_4,
      VAR_0);
  break;
 default:
  FUNC_0(!"bad zfs_deleg_who_type_t");
 }
}
