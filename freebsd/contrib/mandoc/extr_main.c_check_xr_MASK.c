
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mansearch {int firstmatch; int argmode; int * outkey; int sec; int * arch; } ;
struct manpaths {scalar_t__ sz; } ;
struct mandoc_xr {int line; int count; int sec; int name; scalar_t__ pos; struct mandoc_xr* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mansearch*,struct manpaths*,int,int *,int *,size_t*) ;
 int FUNC_1 (int ,int,scalar_t__,char*,int ,int ,...) ;
 struct mandoc_xr* FUNC_2 () ;
 int FUNC_3 (struct manpaths*) ;
 scalar_t__ FUNC_4 (struct mansearch*,struct manpaths*,int,int *,int *,size_t*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 static struct manpaths VAR_2;
 struct mansearch VAR_3;
 struct mandoc_xr *VAR_4;
 size_t VAR_5;

 if (VAR_2.sz == 0)
  FUNC_3(&VAR_2);

 for (VAR_4 = FUNC_2(); VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  if (VAR_4->line == -1)
   continue;
  VAR_3.arch = ((void*)0);
  VAR_3.sec = VAR_4->sec;
  VAR_3.outkey = ((void*)0);
  VAR_3.argmode = VAR_0;
  VAR_3.firstmatch = 1;
  if (FUNC_4(&VAR_3, &VAR_2, 1, &VAR_4->name, ((void*)0), &VAR_5))
   continue;
  if (FUNC_0(&VAR_3, &VAR_2, 1, &VAR_4->name, ((void*)0), &VAR_5) != -1)
   continue;
  if (VAR_4->count == 1)
   FUNC_1(VAR_1, VAR_4->line,
       VAR_4->pos + 1, "Xr %s %s", VAR_4->name, VAR_4->sec);
  else
   FUNC_1(VAR_1, VAR_4->line,
       VAR_4->pos + 1, "Xr %s %s (%d times)",
       VAR_4->name, VAR_4->sec, VAR_4->count);
 }
}
