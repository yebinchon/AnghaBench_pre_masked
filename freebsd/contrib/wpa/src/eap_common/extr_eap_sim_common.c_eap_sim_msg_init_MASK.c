
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sim_msg {int * buf; } ;
struct eap_hdr {int code; int identifier; } ;


 int VAR_0 ;
 int FUNC_0 (struct eap_sim_msg*) ;
 struct eap_sim_msg* FUNC_1 (int) ;
 int * FUNC_2 (int ) ;
 void* FUNC_3 (int *,int) ;

struct eap_sim_msg * FUNC_4(int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct eap_sim_msg *VAR_5;
 struct eap_hdr *VAR_6;
 u8 *VAR_7;

 VAR_5 = FUNC_1(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->buf = FUNC_2(VAR_0);
 if (VAR_5->buf == ((void*)0)) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }
 VAR_6 = FUNC_3(VAR_5->buf, sizeof(*VAR_6));
 VAR_6->code = VAR_1;
 VAR_6->identifier = VAR_2;

 VAR_7 = FUNC_3(VAR_5->buf, 4);
 *VAR_7++ = VAR_3;
 *VAR_7++ = VAR_4;
 *VAR_7++ = 0;
 *VAR_7++ = 0;

 return VAR_5;
}
