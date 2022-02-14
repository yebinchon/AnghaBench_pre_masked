
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* sc_p ;
typedef int node_p ;
struct TYPE_4__ {void* amru; void* smru; int accm; } ;
struct TYPE_5__ {int node; TYPE_1__ cfg; void* sbuf; void* abuf; int amode; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ,int) ;

__attribute__((used)) static int
FUNC_4(node_p VAR_5)
{
 sc_p VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1, VAR_2 | VAR_3);
 VAR_6->amode = VAR_0;
 VAR_6->cfg.accm = ~0;
 VAR_6->cfg.amru = VAR_4;
 VAR_6->cfg.smru = VAR_4;
 VAR_6->abuf = FUNC_3(FUNC_0(VAR_6->cfg.smru),
     VAR_1, VAR_2);
 VAR_6->sbuf = FUNC_3(FUNC_2(VAR_6->cfg.amru),
     VAR_1, VAR_2);
 FUNC_1(VAR_5, VAR_6);
 VAR_6->node = VAR_5;
 return (0);
}
