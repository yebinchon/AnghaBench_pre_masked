
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int gn_gbh; int ** gn_child; } ;
typedef TYPE_1__ zio_gang_node_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(zio_gang_node_t **VAR_2)
{
 zio_gang_node_t *VAR_3 = *VAR_2;

 for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(VAR_3->gn_child[VAR_4] == ((void*)0));

 FUNC_2(VAR_3->gn_gbh, VAR_0);
 FUNC_1(VAR_3, sizeof (*VAR_3));
 *VAR_2 = ((void*)0);
}
