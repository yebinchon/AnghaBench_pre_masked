
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_action {int copy; scalar_t__ remove; } ;
struct elfcopy {scalar_t__ strip; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 struct sec_action* FUNC_2 (struct elfcopy*,char const*,int ) ;
 int * FUNC_3 (struct elfcopy*,int *,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int
FUNC_5(struct elfcopy *VAR_10, const char *VAR_11)
{


 if (FUNC_4(VAR_11, ".shstrtab") == 0)
  return 0;
 if (FUNC_4(VAR_11, ".symtab") == 0 ||
     FUNC_4(VAR_11, ".strtab") == 0) {
  if (VAR_10->strip == VAR_3 && FUNC_3(
      VAR_10, ((void*)0), VAR_9) == ((void*)0))
   return (1);
  else
   return (0);
 }

 if (VAR_10->strip == VAR_5 && FUNC_1(VAR_11))
  return (1);
 if (VAR_10->strip == VAR_7 && !FUNC_1(VAR_11))
  return (1);

 if (FUNC_0(VAR_11)) {
  if (VAR_10->strip == VAR_3 ||
      VAR_10->strip == VAR_4 ||
      VAR_10->strip == VAR_8 ||
      (VAR_10->flags & VAR_0))
   return (1);
  if (VAR_10->strip == VAR_6)
   return (0);
 }

 if ((VAR_10->flags & VAR_2) || (VAR_10->flags & VAR_1)) {
  struct sec_action *VAR_12;

  VAR_12 = FUNC_2(VAR_10, VAR_11, 0);
  if ((VAR_10->flags & VAR_2) && VAR_12 != ((void*)0) && VAR_12->remove)
   return (1);
  if ((VAR_10->flags & VAR_1) && (VAR_12 == ((void*)0) || !VAR_12->copy))
   return (1);
 }

 return (0);
}
