
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html {int metac; int * metaf; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct html*,int ,char*,...) ;
 int FUNC_1 (struct html*,int *) ;

__attribute__((used)) static void
FUNC_2(struct html *VAR_3)
{
 if (VAR_3->metaf) {
  FUNC_1(VAR_3, VAR_3->metaf);
  VAR_3->metaf = ((void*)0);
 }
 switch (VAR_3->metac) {
 case 128:
  VAR_3->metaf = FUNC_0(VAR_3, VAR_1, "");
  break;
 case 130:
  VAR_3->metaf = FUNC_0(VAR_3, VAR_0, "");
  break;
 case 131:
  VAR_3->metaf = FUNC_0(VAR_3, VAR_0, "");
  FUNC_0(VAR_3, VAR_1, "");
  break;
 case 129:
  VAR_3->metaf = FUNC_0(VAR_3, VAR_2, "c", "Li");
  break;
 default:
  break;
 }
}
