
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nfsrv_descript {int nd_flag; int nd_sessionid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int,int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int VAR_5 ;

int
FUNC_7(struct nfsrv_descript *VAR_6, uint8_t *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 VAR_10 = 0;
 if (!FUNC_0(VAR_7, VAR_6->nd_sessionid, VAR_4) &&
     (VAR_6->nd_flag & VAR_0) != 0) {
  VAR_10 = 1;
  if ((VAR_6->nd_flag & VAR_1) == 0)
   return (VAR_2);
 }


 FUNC_1();
 FUNC_5(&VAR_5);
 do {
  VAR_9 = FUNC_4(&VAR_5, 1, ((void*)0),
      VAR_3, ((void*)0));
 } while (VAR_9 == 0);
 FUNC_2();

 VAR_8 = FUNC_3(((void*)0), VAR_7);
 if (VAR_8 == 0 && VAR_10 != 0)
  VAR_6->nd_flag &= ~VAR_0;

 FUNC_1();
 FUNC_6(&VAR_5, 1);
 FUNC_2();
 return (VAR_8);
}
