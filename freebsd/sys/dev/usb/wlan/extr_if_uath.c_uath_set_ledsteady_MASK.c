
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_softc {int dummy; } ;
struct uath_cmd_ledsteady {void* ledmode; void* lednum; } ;


 int FUNC_0 (struct uath_softc*,int ,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct uath_softc*,int ,struct uath_cmd_ledsteady*,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct uath_softc *VAR_3, int VAR_4, int VAR_5)
{
 struct uath_cmd_ledsteady VAR_6;

 VAR_6.lednum = FUNC_1(VAR_4);
 VAR_6.ledmode = FUNC_1(VAR_5);

 FUNC_0(VAR_3, VAR_0, "set %s led %s (steady)\n",
     (VAR_4 == VAR_1) ? "link" : "activity",
     VAR_5 ? "on" : "off");
 return FUNC_2(VAR_3, VAR_2, &VAR_6, sizeof VAR_6, 0);
}
