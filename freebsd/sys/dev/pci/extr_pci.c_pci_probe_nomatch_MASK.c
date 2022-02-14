
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_2__ {char* desc; scalar_t__ class; int subclass; int report; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_9 (char*,int,int) ;

void
FUNC_10(device_t VAR_3, device_t VAR_4)
{
 int VAR_5, VAR_6;
 const char *VAR_7, *VAR_8;
 char *VAR_9;




 VAR_6 = 1;
 if ((VAR_9 = FUNC_4(VAR_4)) != ((void*)0)) {
  FUNC_1(VAR_3, "<%s>", VAR_9);
  FUNC_2(VAR_9, VAR_0);
 } else {




  VAR_7 = "unknown";
  VAR_8 = ((void*)0);
  for (VAR_5 = 0; VAR_2[VAR_5].desc != ((void*)0); VAR_5++) {
   if (VAR_2[VAR_5].class == FUNC_5(VAR_4)) {
    if (VAR_2[VAR_5].subclass == -1) {
     VAR_7 = VAR_2[VAR_5].desc;
     VAR_6 = VAR_2[VAR_5].report;
    } else if (VAR_2[VAR_5].subclass ==
        FUNC_8(VAR_4)) {
     VAR_8 = VAR_2[VAR_5].desc;
     VAR_6 = VAR_2[VAR_5].report;
    }
   }
  }
  if (VAR_6 || VAR_1) {
   FUNC_1(VAR_3, "<%s%s%s>",
       VAR_7 ? VAR_7 : "",
       ((VAR_7 != ((void*)0)) && (VAR_8 != ((void*)0))) ? ", " : "",
       VAR_8 ? VAR_8 : "");
  }
 }
 if (VAR_6 || VAR_1) {
  FUNC_9(" at device %d.%d (no driver attached)\n",
      FUNC_7(VAR_4), FUNC_6(VAR_4));
 }
 FUNC_3(VAR_4, FUNC_0(VAR_4), 1);
}
