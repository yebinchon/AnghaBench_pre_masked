
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int default_domain ;
struct TYPE_2__ {int nis_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(void)
{
  static int VAR_6 = 0;
  char VAR_7[VAR_4];

  if (VAR_6)
    return VAR_1;

  if (FUNC_0(VAR_7, sizeof(VAR_7)) < 0) {
    VAR_6 = 1;
    FUNC_1(VAR_2, "getdomainname: %m");
    return VAR_0;
  }
  if (!*VAR_7) {
    VAR_6 = 1;
    FUNC_1(VAR_3, "NIS domain name is not set.  NIS ignored.");
    return VAR_1;
  }
  VAR_5.nis_domain = FUNC_2(VAR_7);

  return 0;
}
