
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alias {struct alias* next; scalar_t__ flag; void* val; void* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct alias* FUNC_0 (int) ;
 struct alias** FUNC_1 (char const*) ;
 void* FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static
void
FUNC_4(const char *VAR_3, const char *VAR_4)
{
 struct alias *VAR_5, **VAR_6;

 FUNC_3(VAR_3);
 VAR_6 = FUNC_1(VAR_3);
 VAR_0;
 VAR_5 = FUNC_0(sizeof (struct alias));
 VAR_5->name = FUNC_2(VAR_3);
 VAR_5->val = FUNC_2(VAR_4);
 VAR_5->flag = 0;
 VAR_5->next = *VAR_6;
 *VAR_6 = VAR_5;
 VAR_2++;
 VAR_1;
}
