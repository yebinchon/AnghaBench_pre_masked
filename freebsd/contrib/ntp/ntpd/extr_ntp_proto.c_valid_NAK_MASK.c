
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
typedef scalar_t__ u_char ;
struct pkt {int org; } ;
struct recvbuf {int recv_length; struct pkt recv_pkt; } ;
struct peer {int flags; scalar_t__ flip; int const aorg; int const borg; int keyid; } ;
typedef int nak_code ;
typedef int const l_fp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int const*) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;

nak_code
FUNC_4(
   struct peer *VAR_8,
   struct recvbuf *VAR_9,
   u_char VAR_10
   )
{
 int VAR_11 = VAR_2;
 int VAR_12;
 struct pkt * VAR_13;
 int VAR_14;
 l_fp VAR_15;
 const l_fp * VAR_16;




 if (VAR_9->recv_length == VAR_11) {
  return VAR_6;
 }

 VAR_12 = VAR_9->recv_length - VAR_11;



 if (VAR_12 != 4) {
  return VAR_6;
 }





 if (VAR_10 != VAR_5 &&
     VAR_10 != VAR_3 &&
     VAR_10 != VAR_4
     ) {
  return VAR_1;
 }




 VAR_13 = &VAR_9->recv_pkt;
 VAR_14 = FUNC_3(((u_int32 *)VAR_13)[VAR_11 / 4]);
 if (VAR_14 != 0) {
  return VAR_1;
 }







 if (!VAR_8 || (!VAR_8->keyid && !(VAR_8->flags & VAR_0))) {
  return VAR_1;
 }




 FUNC_2(&VAR_13->org, &VAR_15);
 if (VAR_8->flip > 0)
  VAR_16 = &VAR_8->borg;
 else
  VAR_16 = &VAR_8->aorg;

 if (FUNC_1(&VAR_15) ||
     FUNC_1( VAR_16) ||
     !FUNC_0(&VAR_15, VAR_16)) {
  return VAR_1;
 }




 return VAR_7;
}
