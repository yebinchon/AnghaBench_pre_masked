
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ macroset; } ;
struct roff_man {TYPE_1__ meta; scalar_t__ quick; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__*,char*,char*) ;
 int FUNC_1 (int ,int,int,char*,...) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 char* FUNC_5 (scalar_t__) ;

char *
FUNC_6(struct roff_man *VAR_6, char *VAR_7, int VAR_8, int VAR_9)
{
 char *VAR_10;
 time_t VAR_11;

 if (VAR_6->quick)
  return FUNC_2(VAR_7 == ((void*)0) ? "" : VAR_7);



 if (VAR_7 == ((void*)0) || *VAR_7 == '\0')
  FUNC_1(VAR_4, VAR_8, VAR_9, ((void*)0));
 if (VAR_7 == ((void*)0) || *VAR_7 == '\0' || FUNC_3(VAR_7, "$" "Mdocdate$") == 0)
  return FUNC_5(FUNC_4(((void*)0)));



 if (FUNC_0(&VAR_11, "$" "Mdocdate: %b %d %Y $", VAR_7) ||
     FUNC_0(&VAR_11, "%b %d, %Y", VAR_7)) {
  VAR_10 = FUNC_5(VAR_11);
  if (VAR_11 > FUNC_4(((void*)0)) + 86400)
   FUNC_1(VAR_2, VAR_8, VAR_9, "%s", VAR_10);
  else if (*VAR_7 != '$' && FUNC_3(VAR_7, VAR_10) != 0)
   FUNC_1(VAR_5, VAR_8, VAR_9, "%s", VAR_10);
  return VAR_10;
 }



 if (FUNC_0(&VAR_11, "%Y-%m-%d", VAR_7) == 0)
  FUNC_1(VAR_1, VAR_8, VAR_9, "%s", VAR_7);
 else if (VAR_11 > FUNC_4(((void*)0)) + 86400)
  FUNC_1(VAR_2, VAR_8, VAR_9, "%s", VAR_7);
 else if (VAR_6->meta.macroset == VAR_0)
  FUNC_1(VAR_3, VAR_8, VAR_9, "Dd %s", VAR_7);



 return FUNC_2(VAR_7);
}
