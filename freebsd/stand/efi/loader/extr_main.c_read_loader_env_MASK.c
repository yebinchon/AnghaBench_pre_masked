
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINTN ;
struct TYPE_2__ {int DeviceHandle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,int*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_3, char *VAR_4, bool VAR_5)
{
 UINTN VAR_6;
 char *VAR_7, *VAR_8 = ((void*)0);

 VAR_6 = 0;
 VAR_7 = VAR_4;
 if (FUNC_1(VAR_3, ((void*)0), &VAR_6) == VAR_0) {
  VAR_8 = VAR_7 = FUNC_3(VAR_6 + 1);
  if (VAR_7 != ((void*)0)) {
   if (FUNC_1(VAR_3, VAR_7, &VAR_6) != VAR_1) {
    FUNC_2(VAR_7);
    VAR_7 = ((void*)0);
    FUNC_5(
       "Can't fetch FreeBSD::%s we know is there\n", VAR_3);
   } else {




    if (VAR_5)
     FUNC_0(VAR_3);






    VAR_7[VAR_6] = '\0';
   }
  } else {
   FUNC_5(
      "Can't allocate %d bytes to fetch FreeBSD::%s env var\n",
       VAR_6, VAR_3);
  }
 }
 if (VAR_7) {
  FUNC_5("    Reading loader env vars from %s\n", VAR_7);
  FUNC_4(VAR_2->DeviceHandle, VAR_7);
 }
}
