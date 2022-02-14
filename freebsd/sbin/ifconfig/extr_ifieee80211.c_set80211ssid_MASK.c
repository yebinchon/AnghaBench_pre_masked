
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct afswtch {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (char const*,int *,int *,int*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,int ,int,int,int *) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2, int VAR_3, int VAR_4, const struct afswtch *VAR_5)
{
 int VAR_6;
 int VAR_7;
 u_int8_t VAR_8[VAR_1];

 VAR_6 = 0;
 VAR_7 = FUNC_6(VAR_2);
 if (VAR_7 > 2 && FUNC_4((int)VAR_2[0]) && VAR_2[1] == ':') {
  VAR_6 = FUNC_0(VAR_2)-1;
  VAR_2 += 2;
 }

 FUNC_1(VAR_8, sizeof(VAR_8));
 VAR_7 = sizeof(VAR_8);
 if (FUNC_3(VAR_2, ((void*)0), VAR_8, &VAR_7) == ((void*)0))
  FUNC_2(1);

 FUNC_5(VAR_4, VAR_0, VAR_6, VAR_7, VAR_8);
}
