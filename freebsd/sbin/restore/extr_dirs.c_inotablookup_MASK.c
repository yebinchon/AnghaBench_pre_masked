
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotab {scalar_t__ t_ino; struct inotab* t_next; } ;
typedef scalar_t__ ino_t ;


 size_t FUNC_0 (scalar_t__) ;
 struct inotab** VAR_0 ;

__attribute__((used)) static struct inotab *
FUNC_1(ino_t VAR_1)
{
 struct inotab *VAR_2;

 for (VAR_2 = VAR_0[FUNC_0(VAR_1)]; VAR_2 != ((void*)0); VAR_2 = VAR_2->t_next)
  if (VAR_2->t_ino == VAR_1)
   return (VAR_2);
 return (((void*)0));
}
