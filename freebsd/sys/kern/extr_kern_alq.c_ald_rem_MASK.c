
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alq {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct alq*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct alq *VAR_3)
{
 int VAR_4;

 VAR_4 = 0;

 FUNC_0();
 if (VAR_1) {
  VAR_4 = VAR_0;
  goto done;
 }
 FUNC_2(VAR_3, VAR_2);
done:
 FUNC_1();
 return (VAR_4);
}
