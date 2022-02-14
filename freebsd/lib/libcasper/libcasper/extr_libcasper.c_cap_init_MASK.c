
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int cap_channel_t ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int,int) ;
 int * FUNC_2 (int const*,int *) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int *,char*,char const*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*) ;

cap_channel_t *
FUNC_11(const cap_channel_t *VAR_1, const char *VAR_2)
{
 cap_channel_t *VAR_3;
 nvlist_t *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = -1;

 VAR_4 = FUNC_6(FUNC_3(VAR_1));
 FUNC_5(VAR_4, "cmd", "open");
 FUNC_5(VAR_4, "service", VAR_2);
 VAR_4 = FUNC_2(VAR_1, VAR_4);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_6 = (int)FUNC_8(VAR_4, "error");
 if (VAR_6 != 0) {
  FUNC_7(VAR_4);
  VAR_0 = VAR_6;
  return (((void*)0));
 }
 VAR_5 = FUNC_9(VAR_4, "chanfd");
 VAR_7 = FUNC_10(VAR_4, "chanflags");
 FUNC_0(VAR_5 >= 0);
 FUNC_7(VAR_4);
 VAR_4 = ((void*)0);
 VAR_3 = FUNC_1(VAR_5, VAR_7);
 if (VAR_3 == ((void*)0))
  goto fail;
 return (VAR_3);
fail:
 VAR_6 = VAR_0;
 FUNC_4(VAR_5);
 VAR_0 = VAR_6;
 return (((void*)0));
}
