
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int spa_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,char*,int ) ;
 char* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char*,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(spa_t *VAR_4, nvlist_t *VAR_5)
{
 uint64_t VAR_6;
 char *VAR_7;
 uint64_t VAR_8 = 0;

 if (!FUNC_4(VAR_4) && FUNC_3(VAR_5,
     VAR_2, &VAR_6) == 0) {
  VAR_7 = FUNC_2(VAR_5,
      VAR_3);

  VAR_8 = FUNC_7(((void*)0));

  if (VAR_6 != 0 && VAR_8 != 0 && VAR_6 != VAR_8) {
   FUNC_1(VAR_0, "pool '%s' could not be "
       "loaded as it was last accessed by "
       "another system (host: %s hostid: 0x%llx). "
       "See: http://illumos.org/msg/ZFS-8000-EY",
       FUNC_6(VAR_4), VAR_7, (u_longlong_t)VAR_6);
   FUNC_5(VAR_4, "hostid verification failed: pool "
       "last accessed by host: %s (hostid: 0x%llx)",
       VAR_7, (u_longlong_t)VAR_6);
   return (FUNC_0(VAR_1));
  }
 }

 return (0);
}
