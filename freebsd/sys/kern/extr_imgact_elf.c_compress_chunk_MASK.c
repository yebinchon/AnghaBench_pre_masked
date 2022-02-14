
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct coredump_params {int comp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (char*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct coredump_params *VAR_1, char *VAR_2, char *VAR_3, u_int VAR_4)
{
 u_int VAR_5;
 int VAR_6;

 while (VAR_4 > 0) {
  VAR_5 = FUNC_0(VAR_4, VAR_0);





  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_5);
  if (VAR_6 != 0)
   FUNC_1(VAR_3, VAR_5);
  VAR_6 = FUNC_2(VAR_1->comp, VAR_3, VAR_5);
  if (VAR_6 != 0)
   break;
  VAR_2 += VAR_5;
  VAR_4 -= VAR_5;
 }
 return (VAR_6);
}
