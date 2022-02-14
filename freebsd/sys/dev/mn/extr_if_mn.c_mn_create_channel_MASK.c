
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct schan {int chan; int name; int state; struct mn_softc* sc; } ;
struct mn_softc {char* name; struct schan** ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ,char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct mn_softc *VAR_4, int VAR_5)
{
 struct schan *VAR_6;

 VAR_6 = VAR_4->ch[VAR_5] = (struct schan *)FUNC_0(sizeof *VAR_4->ch[VAR_5],
     VAR_1, VAR_2 | VAR_3);
 VAR_6->sc = VAR_4;
 VAR_6->state = VAR_0;
 VAR_6->chan = VAR_5;
 FUNC_1(VAR_6->name, "%s%d", VAR_4->name, VAR_5);
 return;
}
