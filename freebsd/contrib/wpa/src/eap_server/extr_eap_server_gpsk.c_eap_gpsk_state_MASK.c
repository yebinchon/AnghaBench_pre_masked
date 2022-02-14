
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_gpsk_data {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct eap_gpsk_data *VAR_1, int VAR_2)
{
 FUNC_1(VAR_0, "EAP-GPSK: %s -> %s",
     FUNC_0(VAR_1->state),
     FUNC_0(VAR_2));
 VAR_1->state = VAR_2;
}
