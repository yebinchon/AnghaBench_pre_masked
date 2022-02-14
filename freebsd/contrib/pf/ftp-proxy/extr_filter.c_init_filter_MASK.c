
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_status {int running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int ,struct pf_status*) ;
 int FUNC_3 (char*,int ) ;
 char const* VAR_5 ;
 int VAR_6 ;
 char const* VAR_7 ;

void
FUNC_4(const char *VAR_8, const char *VAR_9, int VAR_10)
{
 struct pf_status VAR_11;

 VAR_5 = VAR_8;
 VAR_7 = VAR_9;

 if (VAR_10 == 1)
  VAR_6 = VAR_2;
 else if (VAR_10 == 2)
  VAR_6 = VAR_3;

 VAR_4 = FUNC_3("/dev/pf", VAR_1);
 if (VAR_4 == -1)
  FUNC_0(1, "open /dev/pf");
 if (FUNC_2(VAR_4, VAR_0, &VAR_11) == -1)
  FUNC_0(1, "DIOCGETSTATUS");
 if (!VAR_11.running)
  FUNC_1(1, "pf is disabled");
}
