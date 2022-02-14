
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_char ;
struct msdosfsmount {int pm_flags; int pm_d2u; } ;
struct TYPE_2__ {int (* convchr ) (int ,char const**,size_t*,char**,size_t*) ;int (* convchr_case ) (int ,char const**,size_t*,char**,size_t*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int ,char const**,size_t*,char**,size_t*,int ) ;
 int FUNC_1 (int ,char const**,size_t*,char**,size_t*) ;
 size_t* VAR_6 ;

__attribute__((used)) static u_char *
FUNC_2(u_char *VAR_7, const u_char **VAR_8, size_t *VAR_9, int VAR_10, struct msdosfsmount *VAR_11)
{
 u_char VAR_12, *VAR_13;
 size_t VAR_14, VAR_15;

 VAR_13 = VAR_7;
 if (VAR_11->pm_flags & VAR_3 && VAR_5) {
  VAR_15 = VAR_14 = 4;

  if (VAR_10 & (VAR_1 | VAR_2))
   VAR_5->convchr_case(VAR_11->pm_d2u, (const char **)VAR_8,
        VAR_9, (char **)&VAR_13, &VAR_15, VAR_0);
  else
   VAR_5->convchr(VAR_11->pm_d2u, (const char **)VAR_8,
          VAR_9, (char **)&VAR_13, &VAR_15);
  VAR_14 -= VAR_15;




  if (VAR_14 == 0) {
   (*VAR_9)--;
   (*VAR_8)++;
   *VAR_13++ = '?';
  }
 } else {
  (*VAR_9)--;
  VAR_12 = *(*VAR_8)++;
  VAR_12 = VAR_4[VAR_12];
  if (VAR_10 & (VAR_1 | VAR_2))
   VAR_12 = VAR_6[VAR_12];
  *VAR_13++ = VAR_12;
  VAR_7[1] = '\0';
 }

 *VAR_13 = '\0';
 VAR_13 = VAR_7;
 return (VAR_13);
}
