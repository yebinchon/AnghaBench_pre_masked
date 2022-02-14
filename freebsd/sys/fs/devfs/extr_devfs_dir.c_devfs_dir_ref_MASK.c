
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirlistent {int refcnt; struct dirlistent* dir; } ;


 int FUNC_0 (int *,struct dirlistent*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dirlistent* FUNC_1 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dirlistent*,int ) ;
 int VAR_4 ;
 struct dirlistent* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct dirlistent* FUNC_6 (char const*,int ) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_5)
{
 struct dirlistent *VAR_6, *VAR_7;

 if (*VAR_5 == '\0')
  return;

 VAR_7 = FUNC_3(sizeof(*VAR_6), VAR_0, VAR_1);
 VAR_7->dir = FUNC_6(VAR_5, VAR_0);
 VAR_7->refcnt = 1;

 FUNC_4(&VAR_3);
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 != ((void*)0)) {
  VAR_6->refcnt++;
  FUNC_5(&VAR_3);
  FUNC_2(VAR_7->dir, VAR_0);
  FUNC_2(VAR_7, VAR_0);
  return;
 }
 FUNC_0(&VAR_2, VAR_7, VAR_4);
 FUNC_5(&VAR_3);
}
