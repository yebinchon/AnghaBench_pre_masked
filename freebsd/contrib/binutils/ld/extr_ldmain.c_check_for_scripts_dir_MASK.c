
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*,char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 size_t FUNC_5 (char*) ;
 char* FUNC_6 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (char *VAR_1)
{
  size_t VAR_2;
  char *VAR_3;
  struct stat VAR_4;
  bfd_boolean VAR_5;

  VAR_2 = FUNC_5 (VAR_1);

  VAR_3 = FUNC_6 (VAR_2 + sizeof ("/ldscripts"));
  FUNC_3 (VAR_3, "%s/ldscripts", VAR_1);

  VAR_5 = FUNC_4 (VAR_3, &VAR_4) == 0 && FUNC_0 (VAR_4.st_mode);
  FUNC_1 (VAR_3);
  if (VAR_5)
    FUNC_2 (VAR_1, VAR_0);
  return VAR_5;
}
