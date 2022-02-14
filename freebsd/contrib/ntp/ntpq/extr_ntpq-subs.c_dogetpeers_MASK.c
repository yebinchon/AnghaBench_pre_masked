
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
struct varlist {int dummy; } ;
typedef int associd_t ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct varlist*,int,int,size_t,char const*,int *,int) ;
 int FUNC_1 (int ,int,int ,int ,int *,scalar_t__*,size_t*,char const**) ;
 int FUNC_2 (struct varlist*,int ,int,int ,scalar_t__*,size_t*,char const**) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(
 struct varlist *VAR_4,
 associd_t VAR_5,
 FILE *VAR_6,
 int VAR_7
 )
{
 const char *VAR_8;
 int VAR_9;
 size_t VAR_10;
 u_short VAR_11;
 VAR_9 = FUNC_1(VAR_0, VAR_5, 0, 0, ((void*)0), &VAR_11,
     &VAR_10, &VAR_8);


 if (VAR_9 != 0)
  return 0;

 if (VAR_10 == 0) {
  if (VAR_2 > 1)
   FUNC_3(VAR_3, "server=%s ", VAR_1);
  FUNC_3(VAR_3,
   "***No information returned for association %u\n",
   VAR_5);
  return 0;
 }

 return FUNC_0(VAR_4, VAR_5, (int)VAR_11, VAR_10, VAR_8,
       VAR_6, VAR_7);
}
