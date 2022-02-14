
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_prop_t ;
typedef int uint64_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {int zo_verbose; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,char const*,int *,char*) ;
 int FUNC_4 (char*,char const*,int ,int ) ;
 int FUNC_5 (char*,char*,char const*,char const*,char*) ;
 scalar_t__ FUNC_6 (int ,int ,char const**) ;
 char* FUNC_7 (int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(char *VAR_6, zfs_prop_t VAR_7, uint64_t VAR_8,
    boolean_t VAR_9)
{
 const char *VAR_10 = FUNC_7(VAR_7);
 const char *VAR_11;
 char VAR_12[VAR_2];
 uint64_t VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_6, VAR_10,
     (VAR_9 ? VAR_4 : VAR_3), VAR_8);

 if (VAR_14 == VAR_0) {
  FUNC_8(VAR_1);
  return (VAR_14);
 }
 FUNC_0(VAR_14);

 FUNC_2(FUNC_3(VAR_6, VAR_10, &VAR_13, VAR_12));

 if (VAR_5.zo_verbose >= 6) {
  FUNC_1(FUNC_6(VAR_7, VAR_13, &VAR_11) == 0);
  (void) FUNC_5("%s %s = %s at '%s'\n",
      VAR_6, VAR_10, VAR_11, VAR_12);
 }

 return (VAR_14);
}
