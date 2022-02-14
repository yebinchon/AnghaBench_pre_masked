
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_wsc_data {int wps; int out_buf; int in_buf; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct eap_sm*,struct eap_wsc_data*) ;
 int FUNC_1 (struct eap_wsc_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct eap_sm *VAR_1, void *VAR_2)
{
 struct eap_wsc_data *VAR_3 = VAR_2;
 FUNC_0(VAR_0, VAR_1, VAR_3);
 FUNC_2(VAR_3->in_buf);
 FUNC_2(VAR_3->out_buf);
 FUNC_3(VAR_3->wps);
 FUNC_1(VAR_3);
}
