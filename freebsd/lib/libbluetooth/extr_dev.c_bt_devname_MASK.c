
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_devaddr_match_arg {char* devname; int const* bdaddr; } ;
typedef int bdaddr_t ;
typedef int arg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,struct bt_devaddr_match_arg*) ;
 int VAR_3 ;
 int FUNC_1 (struct bt_devaddr_match_arg*,int ,int) ;
 int FUNC_2 (char*,char*,int ) ;

int
FUNC_3(char *VAR_4, bdaddr_t const *VAR_5)
{
 struct bt_devaddr_match_arg VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.bdaddr = VAR_5;

 if (FUNC_0(&VAR_2, &VAR_6) < 0)
  return (0);

 if (VAR_6.devname[0] == '\0') {
  VAR_3 = VAR_0;
  return (0);
 }

 if (VAR_4 != ((void*)0))
  FUNC_2(VAR_4, VAR_6.devname, VAR_1);

 return (1);
}
