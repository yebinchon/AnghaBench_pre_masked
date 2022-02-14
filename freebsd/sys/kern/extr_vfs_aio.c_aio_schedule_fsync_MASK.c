
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kaioinfo {int kaio_syncready; } ;
struct kaiocb {int dummy; } ;


 int FUNC_0 (struct kaioinfo*) ;
 int FUNC_1 (struct kaioinfo*) ;
 int FUNC_2 (int *) ;
 struct kaiocb* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct kaiocb*,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct kaiocb*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(void *VAR_2, int VAR_3)
{
 struct kaioinfo *VAR_4;
 struct kaiocb *VAR_5;

 VAR_4 = VAR_2;
 FUNC_0(VAR_4);
 while (!FUNC_2(&VAR_4->kaio_syncready)) {
  VAR_5 = FUNC_3(&VAR_4->kaio_syncready);
  FUNC_4(&VAR_4->kaio_syncready, VAR_5, VAR_1);
  FUNC_1(VAR_4);
  FUNC_5(VAR_5, VAR_0);
  FUNC_0(VAR_4);
 }
 FUNC_1(VAR_4);
}
