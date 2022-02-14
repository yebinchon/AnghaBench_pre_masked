
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef enum nicestr_unit { ____Placeholder_nicestr_unit } nicestr_unit ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,size_t*,char*,int ,int ) ;
 int FUNC_1 (char*,size_t,char*,double const) ;
 int FUNC_2 (scalar_t__,int const,int ,int,int) ;

__attribute__((used)) static const char *
FUNC_3(uint64_t VAR_3, uint64_t VAR_4, bool VAR_5)
{

 static char VAR_6[128];
 char *VAR_7 = VAR_6;
 size_t VAR_8 = sizeof(VAR_6);



 const enum nicestr_unit VAR_9 = VAR_5 ? VAR_0 : VAR_1;
 FUNC_0(&VAR_7, &VAR_8, "%s / %s",
   FUNC_2(VAR_3,
    VAR_9, VAR_2, 0, 0),
   FUNC_2(VAR_4,
    VAR_9, VAR_2, 0, 1));




 const double VAR_10 = VAR_4 > 0
   ? (double)(VAR_3) / (double)(VAR_4)
   : 16.0;



 if (VAR_10 > 9.999)
  FUNC_1(VAR_7, VAR_8, " > %.3f", 9.999);
 else
  FUNC_1(VAR_7, VAR_8, " = %.3f", VAR_10);

 return VAR_6;
}
