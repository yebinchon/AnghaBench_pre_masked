
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct afswtch {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char const*,char*,int *,int*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int ,int,int,int *) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_5, int VAR_6, int VAR_7, const struct afswtch *VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11;
 u_int8_t VAR_12[VAR_3];

 FUNC_4(VAR_7, VAR_0, VAR_4, 0, ((void*)0));

 if (FUNC_3((int)VAR_5[0]) && VAR_5[1] == ':') {
  VAR_9 = VAR_5[0]-'0'-1;
  VAR_5 += 2;

  for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
   FUNC_0(VAR_12, sizeof(VAR_12));
   VAR_11 = sizeof(VAR_12);
   VAR_5 = FUNC_2(VAR_5, ",", VAR_12, &VAR_11);
   if (VAR_5 == ((void*)0))
    FUNC_1(1);

   FUNC_4(VAR_7, VAR_1, VAR_10, VAR_11, VAR_12);
  }
 } else {
  FUNC_0(VAR_12, sizeof(VAR_12));
  VAR_11 = sizeof(VAR_12);
  FUNC_2(VAR_5, ((void*)0), VAR_12, &VAR_11);
  VAR_9 = 0;

  FUNC_4(VAR_7, VAR_1, 0, VAR_11, VAR_12);

  FUNC_0(VAR_12, sizeof(VAR_12));
  for (VAR_10 = 1; VAR_10 < 4; VAR_10++)
   FUNC_4(VAR_7, VAR_1, VAR_10, 0, VAR_12);
 }

 FUNC_4(VAR_7, VAR_2, VAR_9, 0, ((void*)0));
}
