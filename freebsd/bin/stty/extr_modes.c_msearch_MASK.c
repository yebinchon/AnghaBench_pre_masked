
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct modes {int set; int unset; scalar_t__ name; } ;
struct TYPE_2__ {int c_oflag; int c_lflag; int c_iflag; int c_cflag; } ;
struct info {int set; TYPE_1__ t; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct modes* VAR_0 ;
 struct modes* VAR_1 ;
 struct modes* VAR_2 ;
 struct modes* VAR_3 ;

int
FUNC_1(char ***VAR_4, struct info *VAR_5)
{
 const struct modes *VAR_6;
 char *VAR_7;

 VAR_7 = **VAR_4;

 for (VAR_6 = VAR_0; VAR_6->name; ++VAR_6)
  if (FUNC_0(VAR_6->name)) {
   VAR_5->t.c_cflag &= ~VAR_6->unset;
   VAR_5->t.c_cflag |= VAR_6->set;
   VAR_5->set = 1;
   return (1);
  }
 for (VAR_6 = VAR_1; VAR_6->name; ++VAR_6)
  if (FUNC_0(VAR_6->name)) {
   VAR_5->t.c_iflag &= ~VAR_6->unset;
   VAR_5->t.c_iflag |= VAR_6->set;
   VAR_5->set = 1;
   return (1);
  }
 for (VAR_6 = VAR_2; VAR_6->name; ++VAR_6)
  if (FUNC_0(VAR_6->name)) {
   VAR_5->t.c_lflag &= ~VAR_6->unset;
   VAR_5->t.c_lflag |= VAR_6->set;
   VAR_5->set = 1;
   return (1);
  }
 for (VAR_6 = VAR_3; VAR_6->name; ++VAR_6)
  if (FUNC_0(VAR_6->name)) {
   VAR_5->t.c_oflag &= ~VAR_6->unset;
   VAR_5->t.c_oflag |= VAR_6->set;
   VAR_5->set = 1;
   return (1);
  }
 return (0);
}
