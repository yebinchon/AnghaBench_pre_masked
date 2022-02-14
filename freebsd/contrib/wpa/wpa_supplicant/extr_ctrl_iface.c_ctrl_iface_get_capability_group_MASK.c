
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_driver_capa {int enc; } ;
struct TYPE_3__ {int capa; int name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,int,char*,char*,int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 size_t FUNC_3 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_4(int VAR_1, char *VAR_2,
        struct wpa_driver_capa *VAR_3,
        char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 char *VAR_7, *VAR_8;
 size_t VAR_9;
 unsigned int VAR_10;

 VAR_7 = VAR_4;
 VAR_8 = VAR_7 + VAR_5;

 if (VAR_1 < 0) {
  if (VAR_2)
   return 0;
  VAR_9 = FUNC_3(VAR_4, "CCMP TKIP WEP104 WEP40", VAR_5);
  if (VAR_9 >= VAR_5)
   return -1;
  return VAR_9;
 }

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_0); VAR_10++) {
  if (VAR_3->enc & VAR_0[VAR_10].capa) {
   VAR_6 = FUNC_1(VAR_7, VAR_8 - VAR_7, "%s%s",
       VAR_7 == VAR_4 ? "" : " ",
       VAR_0[VAR_10].name);
   if (FUNC_2(VAR_8 - VAR_7, VAR_6))
    return VAR_7 - VAR_4;
   VAR_7 += VAR_6;
  }
 }

 return VAR_7 - VAR_4;
}
