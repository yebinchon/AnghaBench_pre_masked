
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {char const* si_name; } ;
typedef int prefix ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,char*,char const*,char*,int) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (int,int ,int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(struct cdev *VAR_5, const char *VAR_6, int VAR_7)
{
 static const char VAR_8[] = "cdev=";
 char *VAR_9;
 int VAR_10, VAR_11;

 if (VAR_4)
  return;
 VAR_11 = (VAR_7 & VAR_0) ? VAR_1 : VAR_3;
 VAR_10 = FUNC_4(VAR_5->si_name);
 VAR_9 = FUNC_2(VAR_10 + sizeof(VAR_8), VAR_2, VAR_11);
 if (VAR_9 == ((void*)0))
  return;
 FUNC_3(VAR_9, VAR_8, sizeof(VAR_8) - 1);
 FUNC_3(VAR_9 + sizeof(VAR_8) - 1, VAR_5->si_name, VAR_10 + 1);
 FUNC_0("DEVFS", "CDEV", VAR_6, VAR_9, VAR_11);
 FUNC_1(VAR_9, VAR_2);
}
