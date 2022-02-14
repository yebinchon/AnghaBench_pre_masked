
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct varlist {int * name; } ;
typedef int associd_t ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct varlist*,int,int,int ,scalar_t__*,size_t*,char const**) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (size_t,char const*,int,int,int,int *) ;

__attribute__((used)) static int
FUNC_3(
 struct varlist *VAR_4,
 associd_t VAR_5,
 int VAR_6,
 int VAR_7,
 FILE *VAR_8
 )
{
 const char *VAR_9;
 int VAR_10;
 size_t VAR_11;
 u_short VAR_12;
 int VAR_13;





 if (VAR_3)
  VAR_13 = 0;
 else
  VAR_13 = (VAR_4->name != ((void*)0));

 VAR_10 = FUNC_0(VAR_4, VAR_6, VAR_5, 0, &VAR_12, &VAR_11, &VAR_9);

 if (VAR_10 != 0)
  return 0;

 if (VAR_2 > 1)
  FUNC_1(VAR_8, "server=%s ", VAR_1);
 if (VAR_11 == 0) {
  if (VAR_5 == 0)
   FUNC_1(VAR_8, "No system%s variables returned\n",
    (VAR_7 == VAR_0) ? " clock" : "");
  else
   FUNC_1(VAR_8,
    "No information returned for%s association %u\n",
    (VAR_7 == VAR_0) ? " clock" : "",
    VAR_5);
  return 1;
 }

 if (!VAR_13)
  FUNC_1(VAR_8, "associd=%u ", VAR_5);
 FUNC_2(VAR_11, VAR_9, (int)VAR_12, VAR_7, VAR_13, VAR_8);
 return 1;
}
