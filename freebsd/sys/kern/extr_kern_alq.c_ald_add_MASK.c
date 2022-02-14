
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alq {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,struct alq*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct alq *VAR_4)
{
 int VAR_5;

 VAR_5 = 0;

 FUNC_0();
 if (VAR_2) {
  VAR_5 = VAR_0;
  goto done;
 }
 FUNC_2(&VAR_1, VAR_4, VAR_3);
done:
 FUNC_1();
 return (VAR_5);
}
