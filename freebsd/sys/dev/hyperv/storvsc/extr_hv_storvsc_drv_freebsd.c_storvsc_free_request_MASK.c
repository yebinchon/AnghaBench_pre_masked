
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct storvsc_softc {int hs_free_list; } ;
struct hv_storvsc_request {int dummy; } ;


 int FUNC_0 (int *,struct hv_storvsc_request*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct storvsc_softc *VAR_1, struct hv_storvsc_request *VAR_2)
{

 FUNC_0(&VAR_1->hs_free_list, VAR_2, VAR_0);
}
