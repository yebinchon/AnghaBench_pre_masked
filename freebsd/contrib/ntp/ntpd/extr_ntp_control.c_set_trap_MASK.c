
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recvbuf {int dstadr; int recv_srcadr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int,int) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_3(
 struct recvbuf *VAR_7,
 int VAR_8
 )
{
 int VAR_9;




 if (VAR_8 & VAR_3) {
  FUNC_0(VAR_1);
  return;
 }




 VAR_9 = VAR_5;
 if (VAR_8 & VAR_2)
  VAR_9 = VAR_4;





 if (!FUNC_2(&VAR_7->recv_srcadr, VAR_7->dstadr, VAR_9,
   (int)VAR_6))
  FUNC_0(VAR_0);
 FUNC_1(0);
}
