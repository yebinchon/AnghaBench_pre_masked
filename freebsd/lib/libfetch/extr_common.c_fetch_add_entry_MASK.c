
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url_stat {int dummy; } ;
struct url_ent {scalar_t__* name; int stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,struct url_stat*,int) ;
 struct url_ent* FUNC_2 (struct url_ent*,int,int) ;
 int FUNC_3 (scalar_t__*,int ,char*,char const*) ;

int
FUNC_4(struct url_ent **VAR_3, int *VAR_4, int *VAR_5,
    const char *VAR_6, struct url_stat *VAR_7)
{
 struct url_ent *VAR_8;

 if (*VAR_3 == ((void*)0)) {
  *VAR_4 = 0;
  *VAR_5 = 0;
 }

 if (*VAR_5 >= *VAR_4 - 1) {
  VAR_8 = FUNC_2(*VAR_3, *VAR_4 * 2 + 1, sizeof(**VAR_3));
  if (VAR_8 == ((void*)0)) {
   VAR_2 = VAR_0;
   FUNC_0();
   return (-1);
  }
  *VAR_4 = (*VAR_4 * 2 + 1);
  *VAR_3 = VAR_8;
 }

 VAR_8 = *VAR_3 + *VAR_5;
 FUNC_3(VAR_8->name, VAR_1, "%s", VAR_6);
 FUNC_1(&VAR_8->stat, VAR_7, sizeof(*VAR_7));

 (*VAR_5)++;
 (++VAR_8)->name[0] = 0;

 return (0);
}
