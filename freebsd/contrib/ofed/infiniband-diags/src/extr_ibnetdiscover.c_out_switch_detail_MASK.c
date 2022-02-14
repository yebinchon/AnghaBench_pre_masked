
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numports; int smalid; int smalmc; scalar_t__ smaenhsp0; int nodedesc; int guid; } ;
typedef TYPE_1__ ibnd_node_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int,char*,char*,char*,int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 char* FUNC_3 (int ,int ,int ) ;

void FUNC_4(ibnd_node_t * VAR_2, char *VAR_3)
{
 char *VAR_4 = ((void*)0);

 VAR_4 = FUNC_3(VAR_1, VAR_2->guid, VAR_2->nodedesc);

 FUNC_0(VAR_0, "%sSwitch\t%d %s\t\t# \"%s\" %s port 0 lid %d lmc %d",
  VAR_3 ? VAR_3 : "", VAR_2->numports, FUNC_2(VAR_2),
  VAR_4, VAR_2->smaenhsp0 ? "enhanced" : "base",
  VAR_2->smalid, VAR_2->smalmc);

 FUNC_1(VAR_4);
}
