
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int,char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_1 ;

int
FUNC_3(int VAR_2, char **VAR_3)
{
 char *VAR_4;
 int VAR_5;

 FUNC_0("GNOME ssh-askpass", "0.1", VAR_2, VAR_3);

 if (VAR_2 == 2)
  VAR_4 = VAR_3[1];
 else
  VAR_4 = "Enter your OpenSSH passphrase:";

 FUNC_2(VAR_1, 0, VAR_0, 0);
 VAR_5 = FUNC_1(VAR_4);

 return (VAR_5);
}
