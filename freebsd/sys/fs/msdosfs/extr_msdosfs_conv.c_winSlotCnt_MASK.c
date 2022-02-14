
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct msdosfsmount {int pm_flags; int pm_u2w; } ;
struct TYPE_2__ {int (* conv ) (int ,char const**,size_t*,char**,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,char const**,size_t*,char**,size_t*) ;
 size_t FUNC_2 (int const*,size_t) ;

int
FUNC_3(const u_char *VAR_4, size_t VAR_5, struct msdosfsmount *VAR_6)
{
 size_t VAR_7;
 char VAR_8[VAR_2 * 2 + 1], *VAR_9;

 VAR_5 = FUNC_2(VAR_4, VAR_5);

 if (VAR_6->pm_flags & VAR_0 && VAR_3) {
  VAR_7 = VAR_2 * 2;
  VAR_9 = VAR_8;
  VAR_3->conv(VAR_6->pm_u2w, (const char **)&VAR_4, &VAR_5, &VAR_9, &VAR_7);
  if (VAR_5 > 0)
   return 0;
  return FUNC_0(VAR_2 - VAR_7/2, VAR_1);
 }

 if (VAR_5 > VAR_2)
  return 0;
 return FUNC_0(VAR_5, VAR_1);
}
