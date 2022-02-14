
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

__attribute__((used)) static int FUNC_3(int VAR_1, char *VAR_2,
      struct wpa_driver_capa *VAR_3,
      char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 char *VAR_7, *VAR_8;
 unsigned int VAR_9;

 VAR_7 = VAR_4;
 VAR_8 = VAR_7 + VAR_5;

 if (VAR_1 < 0)
  return 0;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_0); VAR_9++) {
  if (VAR_3->enc & VAR_0[VAR_9].capa) {
   VAR_6 = FUNC_1(VAR_7, VAR_8 - VAR_7, "%s%s",
       VAR_7 == VAR_4 ? "" : " ",
       VAR_0[VAR_9].name);
   if (FUNC_2(VAR_8 - VAR_7, VAR_6))
    return VAR_7 - VAR_4;
   VAR_7 += VAR_6;
  }
 }

 return VAR_7 - VAR_4;
}
