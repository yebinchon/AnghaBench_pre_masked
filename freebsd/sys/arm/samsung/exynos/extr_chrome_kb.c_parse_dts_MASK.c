
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ckb_softc {void* gpio; void* cols; void* rows; int dev; } ;
typedef int phandle_t ;
typedef void* pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,void**,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int,char*) ;
 void** VAR_3 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (void**,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ckb_softc*,void**,int) ;
 int FUNC_7 (int,char const*,void***,int*) ;

__attribute__((used)) static int
FUNC_8(struct ckb_softc *VAR_4)
{
 phandle_t VAR_5;
 pcell_t VAR_6;
 pcell_t *VAR_7;
 int VAR_8, VAR_9;
 const char *VAR_10 = ((void*)0);

 if ((VAR_5 = FUNC_5(VAR_4->dev)) == -1)
  return (VAR_0);

 if ((VAR_8 = FUNC_1(VAR_5, "google,key-rows")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_5, "google,key-rows", &VAR_6, VAR_8);
 VAR_4->rows = VAR_6;

 if ((VAR_8 = FUNC_1(VAR_5, "google,key-columns")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_5, "google,key-columns", &VAR_6, VAR_8);
 VAR_4->cols = VAR_6;

 if ((VAR_8 = FUNC_1(VAR_5, "freebsd,intr-gpio")) <= 0)
  return (VAR_0);
 FUNC_0(VAR_5, "freebsd,intr-gpio", &VAR_6, VAR_8);
 VAR_4->gpio = VAR_6;

 if (FUNC_2(VAR_5, "freebsd,keymap")) {
  VAR_10 = "freebsd,keymap";
  FUNC_3(VAR_4->dev, "using FreeBSD-specific keymap from FDT\n");
 } else if (FUNC_2(VAR_5, "linux,keymap")) {
  VAR_10 = "linux,keymap";
  FUNC_3(VAR_4->dev, "using Linux keymap from FDT\n");
 } else {
  FUNC_3(VAR_4->dev, "using built-in keymap\n");
 }

 if (VAR_10 != ((void*)0)) {
  if ((VAR_9 = FUNC_7(VAR_5, VAR_10, &VAR_7, &VAR_8))) {
   FUNC_3(VAR_4->dev,
        "failed to read keymap from FDT: %d\n", VAR_9);
   return (VAR_9);
  }
  VAR_9 = FUNC_6(VAR_4, VAR_7, VAR_8);
  FUNC_4(VAR_7, VAR_2);
  if (VAR_9) {
   return (VAR_9);
  }
 } else {
  if ((VAR_9 = FUNC_6(VAR_4, VAR_3, VAR_1))) {
   return (VAR_9);
  }
 }

 if ((VAR_4->rows == 0) || (VAR_4->cols == 0) || (VAR_4->gpio == 0))
  return (VAR_0);

 return (0);
}
