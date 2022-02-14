
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int u_char ;
struct msdosfsmount {int pm_flags; int pm_u2w; } ;
struct TYPE_2__ {int (* convchr ) (int ,char const**,size_t*,char**,size_t*) ;int (* convchr_case ) (int ,char const**,size_t*,char**,size_t*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ,char const**,size_t*,char**,size_t*,int ) ;
 int FUNC_1 (int ,char const**,size_t*,char**,size_t*) ;
 size_t* VAR_5 ;

__attribute__((used)) static uint16_t
FUNC_2(const u_char **VAR_6, size_t *VAR_7, int VAR_8, struct msdosfsmount *VAR_9)
{
 u_char *VAR_10, VAR_11[3];
 uint16_t VAR_12;
 size_t VAR_13;

 if (*VAR_7 == 0)
  return (0);

 if (VAR_9->pm_flags & VAR_3 && VAR_4) {
  VAR_10 = VAR_11;
  VAR_13 = 2;
  if (VAR_8 & (VAR_1 | VAR_2))
   VAR_4->convchr_case(VAR_9->pm_u2w, (const char **)VAR_6,
        VAR_7, (char **)&VAR_10, &VAR_13,
        VAR_0);
  else
   VAR_4->convchr(VAR_9->pm_u2w, (const char **)VAR_6,
          VAR_7, (char **)&VAR_10, &VAR_13);




  if (VAR_13 == 2)
   return (0);

  VAR_12 = (VAR_11[0]<<8) | VAR_11[1];

  return (VAR_12);
 }

 (*VAR_7)--;
 VAR_12 = (*VAR_6)[0];
 if (VAR_8 & (VAR_1 | VAR_2))
  VAR_12 = VAR_5[VAR_12];
 (*VAR_6)++;
 return (VAR_12);
}
