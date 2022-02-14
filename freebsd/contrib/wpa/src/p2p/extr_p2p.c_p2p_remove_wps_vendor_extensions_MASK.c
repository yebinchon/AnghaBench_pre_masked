
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int ** wps_vendor_ext; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct p2p_data *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1->wps_vendor_ext[VAR_2]);
  VAR_1->wps_vendor_ext[VAR_2] = ((void*)0);
 }
}
