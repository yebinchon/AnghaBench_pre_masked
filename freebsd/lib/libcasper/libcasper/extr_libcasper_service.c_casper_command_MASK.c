
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct casper_service {int cs_service; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,char const*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,char const*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int,int *) ;
 struct casper_service* FUNC_10 (char const*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 int FUNC_13 (int*,int*) ;

__attribute__((used)) static int
FUNC_14(const char *VAR_4, const nvlist_t *VAR_5, nvlist_t *VAR_6,
    nvlist_t *VAR_7)
{
 struct casper_service *VAR_8;
 const char *VAR_9;
 nvlist_t *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 if (FUNC_12(VAR_4, "open") != 0)
  return (VAR_0);
 if (!FUNC_6(VAR_6, "service"))
  return (VAR_0);

 VAR_9 = FUNC_7(VAR_6, "service");
 VAR_8 = FUNC_10(VAR_9);
 if (VAR_8 == ((void*)0))
  return (VAR_1);

 if (!FUNC_0(VAR_5, VAR_9))
  return (VAR_2);

 if (FUNC_13(&VAR_11, &VAR_12) == -1)
  return (VAR_3);

 VAR_10 = FUNC_4(0);
 FUNC_3(VAR_10, "service", VAR_9);
 FUNC_8(VAR_10, "procfd", VAR_12);
 if (FUNC_9(VAR_11, VAR_10) == -1) {
  VAR_13 = VAR_3;
  FUNC_5(VAR_10);
  FUNC_1(VAR_11);
  return (VAR_13);
 }
 FUNC_5(VAR_10);

 FUNC_8(VAR_7, "chanfd", VAR_11);
 FUNC_2(VAR_7, "chanflags",
     FUNC_11(VAR_8->cs_service));

 return (0);
}
