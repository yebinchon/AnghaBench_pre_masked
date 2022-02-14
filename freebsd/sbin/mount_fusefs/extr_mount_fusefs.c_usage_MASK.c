
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mntopt {char* m_option; scalar_t__ m_flag; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 struct mntopt* VAR_1 ;
 int VAR_2 ;

void
FUNC_3(void)
{
 struct mntopt *VAR_3;

 FUNC_0();

 FUNC_2(VAR_2, "known options:\n");
 for (VAR_3 = VAR_1; VAR_3->m_flag; ++VAR_3)
  FUNC_2(VAR_2, "\t%s\n", VAR_3->m_option);

 FUNC_2(VAR_2, "\n(use -h for a detailed description of these options)\n");
 FUNC_1(VAR_0);
}
