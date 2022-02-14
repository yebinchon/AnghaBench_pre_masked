
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trxd {struct trxd* vnext; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 struct trxd* VAR_2 ;

__attribute__((used)) static struct trxd *
FUNC_1(void)
{
 struct trxd *VAR_3;

 VAR_3 = VAR_2;
 if (VAR_3)
  VAR_2 = VAR_3->vnext;
 else
  VAR_3 = (struct trxd *)FUNC_0(sizeof *VAR_3, VAR_0, VAR_1);
 return (VAR_3);
}
