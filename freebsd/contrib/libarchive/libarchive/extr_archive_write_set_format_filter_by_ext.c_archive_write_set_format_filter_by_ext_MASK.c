
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive {int state; } ;
struct TYPE_2__ {int (* format ) (struct archive*) ;int (* filter ) (struct archive*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive*,int ,char*,char const*) ;
 int FUNC_1 (char const*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*) ;

int
FUNC_4(struct archive *VAR_5, const char *VAR_6)
{
  int VAR_7 = FUNC_1(VAR_6);

  if (VAR_7 >= 0)
  {
    int VAR_8 = (VAR_4[VAR_7].format)(VAR_5);
    if (VAR_8 == VAR_1)
      return ((VAR_4[VAR_7].filter)(VAR_5));
    else
      return VAR_8;
  }

  FUNC_0(VAR_5, VAR_3, "No such format '%s'", VAR_6);
  VAR_5->state = VAR_2;
  return (VAR_0);
}
