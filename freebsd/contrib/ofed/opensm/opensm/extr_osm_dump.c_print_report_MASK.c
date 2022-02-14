
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int node_guid_tbl; } ;
struct TYPE_6__ {TYPE_1__ subn; } ;
typedef TYPE_2__ osm_opensm_t ;
typedef int FILE ;


 int FUNC_0 (int ,int *,int ,TYPE_2__*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(osm_opensm_t * VAR_2, FILE * VAR_3)
{
 FUNC_1(VAR_3, "\n==================================================="
  "====================================================\n"
  "Vendor      : Ty : #  : Sta : LID  : LMC : MTU  : LWA :"
  " LSA  : Port GUID        : Neighbor Port (Port #)\n");
 FUNC_0(VAR_1, &VAR_2->subn.node_guid_tbl, VAR_0, VAR_2);
}
