
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HT ;


 int VAR_0 ;
 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,char*,long) ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_3(char *VAR_2, HT *VAR_3, long VAR_4, char *VAR_5)
{
 char *VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_1,
   "missing property '%s' in section '%s' (line %ld)\n",
   VAR_5, VAR_2, VAR_4);
  FUNC_1(VAR_0);
 }
 return VAR_6;
}
