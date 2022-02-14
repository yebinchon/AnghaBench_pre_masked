
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tbuf ;
struct dumpdates {scalar_t__ dd_ddate; int dd_level; int dd_name; } ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__*) ;
 int VAR_1 ;
 char* FUNC_1 (char*,int,int *) ;
 scalar_t__ FUNC_2 (struct dumpdates*,char*) ;
 int FUNC_3 (char*,int ,int ,...) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_3, struct dumpdates *VAR_4)
{
 char VAR_5[VAR_0];

 VAR_2 = 0;
 if ( (FUNC_1(VAR_5, sizeof (VAR_5), VAR_3)) != VAR_5)
  return(-1);
 VAR_2++;
 if (FUNC_2(VAR_4, VAR_5) < 0)
  FUNC_3("Unknown intermediate format in %s, line %d\n",
   VAR_1, VAR_2);





 return(0);
}
