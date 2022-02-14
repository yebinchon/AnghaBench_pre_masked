
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* xxx_p ;
typedef int node_p ;
struct TYPE_6__ {int node; TYPE_1__* channel; } ;
struct TYPE_5__ {int dlci; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int,int ,int) ;

__attribute__((used)) static int
FUNC_2(node_p VAR_4)
{
 xxx_p VAR_5;
 int VAR_6;


 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5->channel[VAR_6].dlci = -2;
  VAR_5->channel[VAR_6].channel = VAR_6;
 }


 FUNC_0(VAR_4, VAR_5);
 VAR_5->node = VAR_4;
 return (0);
}
