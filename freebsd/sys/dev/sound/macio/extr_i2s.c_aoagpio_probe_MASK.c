
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_match {size_t ctrl; int * name; } ;
struct aoagpio_softc {size_t ctrl; char detect_active; int * i2s; scalar_t__ level; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;
typedef int bname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 struct aoagpio_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 struct gpio_match* VAR_3 ;
 struct aoagpio_softc** VAR_4 ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char const*,int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5)
{
 phandle_t VAR_6;
 char VAR_7[32];
 const char *VAR_8;
 struct gpio_match *VAR_9;
 struct aoagpio_softc *VAR_10;

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6 == 0 || VAR_6 == -1)
  return (VAR_0);

 FUNC_2(VAR_7, sizeof(VAR_7));
 if (FUNC_0(VAR_6, "audio-gpio", VAR_7, sizeof(VAR_7)) > 2)
  VAR_8 = VAR_7;
 else
  VAR_8 = FUNC_6(VAR_5);


 for (VAR_9 = VAR_3; VAR_9->name != ((void*)0); VAR_9++) {
  if (FUNC_8(VAR_8, VAR_9->name) == 0) {
   VAR_10 = FUNC_3(VAR_5);
   VAR_4[VAR_9->ctrl] = VAR_10;
   VAR_10->dev = VAR_5;
   VAR_10->ctrl = VAR_9->ctrl;
   VAR_10->level = 0;
   VAR_10->detect_active = 0;
   VAR_10->i2s = ((void*)0);

   FUNC_0(VAR_6, "audio-gpio-active-state",
    &VAR_10->detect_active, sizeof(VAR_10->detect_active));

   if ((1 << VAR_9->ctrl) & VAR_2)
    FUNC_1(VAR_5);

   FUNC_5(VAR_5, VAR_9->name);
   FUNC_4(VAR_5);
   return (0);
  }
 }

 return (VAR_1);
}
