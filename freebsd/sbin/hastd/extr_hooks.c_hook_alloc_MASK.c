
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hookproc {int hp_magic; int hp_comm; int hp_lastreport; int hp_birthtime; scalar_t__ hp_pid; } ;


 int VAR_0 ;
 int FUNC_0 (struct hookproc*) ;
 struct hookproc* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int,char*,char*) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct hookproc *
FUNC_7(const char *VAR_1, char **VAR_2)
{
 struct hookproc *VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_1(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0)) {
  FUNC_2("Unable to allocate %zu bytes of memory for a hook.",
      sizeof(*VAR_3));
  return (((void*)0));
 }

 VAR_3->hp_pid = 0;
 VAR_3->hp_birthtime = VAR_3->hp_lastreport = FUNC_6(((void*)0));
 (void)FUNC_4(VAR_3->hp_comm, VAR_1, sizeof(VAR_3->hp_comm));

 for (VAR_4 = 1; VAR_2[VAR_4] != ((void*)0); VAR_4++) {
  (void)FUNC_3(VAR_3->hp_comm, sizeof(VAR_3->hp_comm), " %s",
      VAR_2[VAR_4]);
 }
 if (FUNC_5(VAR_3->hp_comm) >= sizeof(VAR_3->hp_comm) - 1) {
  FUNC_2("Exec path too long, correct configuration file.");
  FUNC_0(VAR_3);
  return (((void*)0));
 }
 VAR_3->hp_magic = VAR_0;
 return (VAR_3);
}
