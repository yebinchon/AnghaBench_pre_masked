
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_xferq {int queued; int q; } ;
struct fw_xfer {int flag; int resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fw_xfer* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct fw_xfer*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct fw_xferq *VAR_3)
{
 struct fw_xfer *VAR_4;

 while ((VAR_4 = FUNC_0(&VAR_3->q)) != ((void*)0)) {
  FUNC_1(&VAR_3->q, VAR_2);



  VAR_4->resp = VAR_0;
  VAR_4->flag = VAR_1;
  FUNC_2(VAR_4);
 }
}
