
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kld_file_stat {int version; int id; int refs; char* address; char* pathname; int name; int size; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,int,int ,char*,int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct kld_file_stat*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(int VAR_4, int VAR_5, int VAR_6)
{
    struct kld_file_stat VAR_7;
    int VAR_8;
    char VAR_9[5];

    VAR_7.version = sizeof(struct kld_file_stat);
    if (FUNC_3(VAR_4, &VAR_7) < 0) {
 FUNC_0(1, "can't stat file id %d", VAR_4);
    } else {
 if (VAR_6) {
  FUNC_1(VAR_9, sizeof(VAR_9), VAR_7.size,
      "", VAR_0, VAR_1 | VAR_2);

  FUNC_5("%2d %4d %*p %5s %s",
      VAR_7.id, VAR_7.refs, VAR_3, VAR_7.address, VAR_9,
      VAR_7.name);
 } else {
  FUNC_5("%2d %4d %*p %8zx %s",
      VAR_7.id, VAR_7.refs, VAR_3, VAR_7.address, VAR_7.size,
      VAR_7.name);
 }
    }

    if (VAR_5) {
 FUNC_5(" (%s)\n", VAR_7.pathname);
 FUNC_5("\tContains modules:\n");
 FUNC_5("\t\t Id Name\n");
 for (VAR_8 = FUNC_2(VAR_4); VAR_8 > 0;
      VAR_8 = FUNC_4(VAR_8))
     FUNC_6(VAR_8);
    } else
 FUNC_5("\n");
}
