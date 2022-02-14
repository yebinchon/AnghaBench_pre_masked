
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {char* ki_comm; scalar_t__ ki_pid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char** FUNC_1 (int ,struct kinfo_proc const*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_4(const struct kinfo_proc *VAR_5)
{
 char **VAR_6;

 if (VAR_4) {
  FUNC_0(VAR_3);
  return;
 }
 if ((VAR_1 || !VAR_3) && VAR_2 &&
     (VAR_6 = FUNC_1(VAR_0, VAR_5, 0)) != ((void*)0)) {
  FUNC_2("%d ", (int)VAR_5->ki_pid);
  for (; *VAR_6 != ((void*)0); VAR_6++) {
   FUNC_2("%s", *VAR_6);
   if (VAR_6[1] != ((void*)0))
    FUNC_3(' ');
  }
 } else if (VAR_1 || !VAR_3)
  FUNC_2("%d %s", (int)VAR_5->ki_pid, VAR_5->ki_comm);
 else
  FUNC_2("%d", (int)VAR_5->ki_pid);
}
