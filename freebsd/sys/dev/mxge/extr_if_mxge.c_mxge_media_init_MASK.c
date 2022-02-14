
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* product_code_string; int dev; int connector; int media; } ;
typedef TYPE_1__ mxge_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static void
FUNC_4(mxge_softc_t *VAR_6)
{
 char *VAR_7;
 int VAR_8;

 FUNC_1(&VAR_6->media);
 FUNC_2(VAR_6, VAR_1);







 VAR_7 = VAR_6->product_code_string;
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_6->dev, "Missing product code\n");
  return;
 }

 for (VAR_8 = 0; VAR_8 < 3; VAR_8++, VAR_7++) {
  VAR_7 = FUNC_3(VAR_7, '-');
  if (VAR_7 == ((void*)0)) {
   FUNC_0(VAR_6->dev,
          "only %d dashes in PC?!?\n", VAR_8);
   return;
  }
 }
 if (*VAR_7 == 'C' || *(VAR_7 +1) == 'C') {

  VAR_6->connector = VAR_2;
  FUNC_2(VAR_6, VAR_0);
 } else if (*VAR_7 == 'Q') {

  VAR_6->connector = VAR_3;
  FUNC_0(VAR_6->dev, "Quad Ribbon Fiber Media\n");

 } else if (*VAR_7 == 'R') {

  VAR_6->connector = VAR_5;
 } else if (*VAR_7 == 'S' || *(VAR_7 +1) == 'S') {

  VAR_6->connector = VAR_4;
 } else {
  FUNC_0(VAR_6->dev, "Unknown media type: %c\n", *VAR_7);
 }
}
