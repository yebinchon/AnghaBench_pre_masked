
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
struct pkt {int xmt; int ppoll; int stratum; int li_vn_mode; } ;
typedef int l_fp ;


 int FUNC_0 (struct timeval*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct timeval*,int *) ;
 int FUNC_10 (struct pkt*,struct timeval*,int ,int *) ;

void
FUNC_11(void)
{
 struct pkt VAR_6;
 struct timeval VAR_7;
 l_fp VAR_8, VAR_9;

 FUNC_0(&VAR_7, ((void*)0));
 VAR_7.tv_sec += VAR_0;

 FUNC_7(VAR_2,
     FUNC_10(&VAR_6, &VAR_7, 0, ((void*)0)));

 FUNC_7(VAR_1, FUNC_3(VAR_6.li_vn_mode));
 FUNC_7(VAR_4, FUNC_6(VAR_6.li_vn_mode));
 FUNC_7(VAR_3, FUNC_4(VAR_6.li_vn_mode));

 FUNC_7(VAR_5, FUNC_5(VAR_6.stratum));
 FUNC_7(8, VAR_6.ppoll);

 FUNC_9(&VAR_7, &VAR_8);
 FUNC_2(&VAR_6.xmt, &VAR_9);
 FUNC_8(FUNC_1(VAR_8, VAR_9));
}
