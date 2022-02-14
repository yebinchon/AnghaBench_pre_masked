
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_string {int ps_len; int ps_hash; int ps_string; } ;
typedef struct pmcstat_string const* pmcstat_interned_string ;


 int VAR_0 ;
 int FUNC_0 (int *,struct pmcstat_string*,int ) ;
 int FUNC_1 (int ,char*) ;
 struct pmcstat_string* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int * VAR_1 ;
 struct pmcstat_string* FUNC_4 (char const*) ;
 int VAR_2 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

pmcstat_interned_string
FUNC_7(const char *VAR_3)
{
 struct pmcstat_string *VAR_4;
 const struct pmcstat_string *VAR_5;
 int VAR_6, VAR_7;

 if ((VAR_5 = FUNC_4(VAR_3)) != ((void*)0))
  return (VAR_5);

 VAR_6 = FUNC_3(VAR_3);
 VAR_7 = FUNC_6(VAR_3);

 if ((VAR_4 = FUNC_2(sizeof(*VAR_4))) == ((void*)0))
  FUNC_1(VAR_0, "ERROR: Could not intern string");
 VAR_4->ps_len = VAR_7;
 VAR_4->ps_hash = VAR_6;
 VAR_4->ps_string = FUNC_5(VAR_3);
 FUNC_0(&VAR_1[VAR_6], VAR_4, VAR_2);
 return ((pmcstat_interned_string) VAR_4);
}
