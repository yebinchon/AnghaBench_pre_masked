
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct initiator_state {int pending_ua; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct initiator_state*,int) ;
 int FUNC_1 (int ,int ) ;
 struct initiator_state* FUNC_2 (int) ;

cam_status
FUNC_3(u_int16_t VAR_2, u_int16_t VAR_3)
{
 struct initiator_state *VAR_4;
 int VAR_5, VAR_6;


 VAR_6 = FUNC_1(VAR_2, VAR_3);
 if (VAR_6 != 0)
         return (VAR_6);


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_2(VAR_5);
  FUNC_0(VAR_4, sizeof(*VAR_4));
  VAR_4->pending_ua = VAR_1;
 }

 return (0);
}
