
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char**,int ,char*,char const*,char const*,int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6(device_t VAR_1, const char *VAR_2)
{
 const char *VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 FUNC_0(&VAR_4, VAR_0, "%s %s, rev %hhu", VAR_3, VAR_2,
     FUNC_1(VAR_1));

 if (VAR_4 != ((void*)0)) {
  FUNC_4(VAR_1, VAR_4);
  FUNC_5(VAR_4, VAR_0);
 } else {
  FUNC_3(VAR_1, VAR_2);
 }
}
