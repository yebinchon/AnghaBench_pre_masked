
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fsrecovery {scalar_t__ fsr_magic; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,char*,int,int) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ,int*) ;

__attribute__((used)) static int
FUNC_4(int VAR_4)
{
 struct fsrecovery *VAR_5;
 char *VAR_6;
 u_int VAR_7;





 if (FUNC_3(VAR_4, VAR_0, &VAR_7) == -1 ||
     (VAR_6 = FUNC_0(VAR_7)) == ((void*)0) ||
     FUNC_1(VAR_4, VAR_6, (VAR_2 - VAR_7) / VAR_3,
       VAR_7) != 0)
  return (1);




 VAR_5 = (struct fsrecovery *)&VAR_6[VAR_7 - sizeof *VAR_5];
 if (VAR_5->fsr_magic == VAR_1) {
  FUNC_2(VAR_6);
  return (1);
 }



 FUNC_2(VAR_6);
 return (0);
}
