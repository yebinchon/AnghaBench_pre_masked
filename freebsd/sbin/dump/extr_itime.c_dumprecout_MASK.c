
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumpdates {int dd_ddate; int dd_level; int dd_name; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,char*,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(FILE *VAR_4, const struct dumpdates *VAR_5)
{

 if (FUNC_4(VAR_5->dd_name) > VAR_0)
  FUNC_2("Name '%s' exceeds DUMPFMTLEN (%d) bytes\n",
      VAR_5->dd_name, VAR_0);
 if (FUNC_1(VAR_4, VAR_1, VAR_0, VAR_5->dd_name,
       VAR_5->dd_level, FUNC_0(&VAR_5->dd_ddate)) < 0)
  FUNC_2("%s: %s\n", VAR_2, FUNC_3(VAR_3));
}
