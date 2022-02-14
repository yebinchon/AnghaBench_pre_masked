
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int snapname ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (char*,int,char*,char*,int ) ;

__attribute__((used)) static boolean_t
FUNC_3(char *VAR_4, uint64_t VAR_5)
{
 char VAR_6[VAR_3];
 int VAR_7;

 (void) FUNC_2(VAR_6, sizeof (VAR_6), "%s@%llu", VAR_4,
     (u_longlong_t)VAR_5);

 VAR_7 = FUNC_0(VAR_6, VAR_0);
 if (VAR_7 != 0 && VAR_7 != VAR_2)
  FUNC_1(0, "ztest_snapshot_destroy(%s) = %d", VAR_6, VAR_7);
 return (VAR_1);
}
