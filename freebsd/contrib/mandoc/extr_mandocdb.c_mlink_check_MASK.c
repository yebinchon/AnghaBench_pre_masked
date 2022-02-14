
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct str {int mask; } ;
struct mpage {scalar_t__ form; int arch; int sec; } ;
struct mlink {int file; int name; int arch; int dsec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 struct str* FUNC_1 (int *,unsigned int) ;
 unsigned int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct mpage *VAR_4, struct mlink *VAR_5)
{
 struct str *VAR_6;
 unsigned int VAR_7;
 if (VAR_1 == VAR_4->form &&
     FUNC_4(VAR_4->sec, VAR_5->dsec))
  FUNC_3(VAR_5->file, "Section \"%s\" manual in %s directory",
      VAR_4->sec, VAR_5->dsec);
 if (FUNC_4(VAR_4->arch, VAR_5->arch))
  FUNC_3(VAR_5->file, "Architecture \"%s\" manual in "
      "\"%s\" directory", VAR_4->arch, VAR_5->arch);






 if (VAR_0 == VAR_4->form)
  return;






 VAR_7 = FUNC_2(&VAR_3, VAR_5->name);
 VAR_6 = FUNC_1(&VAR_3, VAR_7);
 FUNC_0(((void*)0) != VAR_6);
 if ( ! (VAR_2 & VAR_6->mask))
  FUNC_3(VAR_5->file, "Name missing in NAME section");
}
