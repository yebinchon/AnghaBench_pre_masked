
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padctl_softc {int dev; } ;
struct padctl_pad {int enabled; } ;
typedef scalar_t__ phandle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,void**) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct padctl_softc*,scalar_t__,struct padctl_pad*) ;
 struct padctl_pad* FUNC_8 (struct padctl_softc*,char*) ;

__attribute__((used)) static int
FUNC_9(struct padctl_softc *VAR_1, phandle_t VAR_2)
{
 struct padctl_pad *VAR_3;
 char *VAR_4;
 int VAR_5;

 VAR_4 = ((void*)0);
 VAR_5 = FUNC_1(VAR_2, "name", (void **)&VAR_4);
 if (VAR_5 <= 0) {
  FUNC_4(VAR_1->dev, "Cannot read pad name.\n");
  return (VAR_0);
 }
 VAR_3 = FUNC_8(VAR_1, VAR_4);
 if (VAR_3 == ((void*)0)) {
  FUNC_4(VAR_1->dev, "Unknown pad: %s\n", VAR_4);
  VAR_5 = VAR_0;
  goto end;
 }


 VAR_2 = FUNC_5(VAR_2, "lanes");
 if (VAR_2 <= 0) {
  FUNC_4(VAR_1->dev, "Cannot find regulators subnode\n");
  VAR_5 = VAR_0;
  goto end;
 }

 for (VAR_2 = FUNC_0(VAR_2); VAR_2 != 0; VAR_2 = FUNC_2(VAR_2)) {
  if (!FUNC_6(VAR_2))
   continue;

  VAR_5 = FUNC_7(VAR_1, VAR_2, VAR_3);
  if (VAR_5 != 0)
   goto end;
 }
 VAR_3->enabled = 1;
 VAR_5 = 0;
end:
 if (VAR_4 != ((void*)0))
  FUNC_3(VAR_4);
 return (VAR_5);
}
