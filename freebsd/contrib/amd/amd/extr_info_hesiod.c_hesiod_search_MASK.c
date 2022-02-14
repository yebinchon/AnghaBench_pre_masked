
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_7__ {TYPE_1__* cfm; } ;
typedef TYPE_2__ mnt_map ;
typedef int hes_key ;
struct TYPE_9__ {int options; } ;
struct TYPE_8__ {int hesiod_base; } ;
struct TYPE_6__ {int cfm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 TYPE_5__ VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_10 ;
 TYPE_4__ VAR_11 ;
 long FUNC_3 () ;
 char** FUNC_4 (char*,int) ;
 int VAR_12 ;
 char** FUNC_5 (int ,char*,int) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;

int
FUNC_8(mnt_map *VAR_13, char *VAR_14, char *VAR_15, char **VAR_16, time_t *VAR_17)
{
  char VAR_18[VAR_7];
  char **VAR_19;

  int VAR_20;


  FUNC_2("hesiod_search(m=%lx, map=%s, key=%s, pval=%lx tp=%lx)",
       (unsigned long) VAR_13, VAR_14, VAR_15, (unsigned long) VAR_16, (unsigned long) VAR_17);

  if (VAR_15[0] == '.')
    return VAR_4;

  FUNC_7(VAR_18, sizeof(VAR_18), "%s.%s", VAR_15, VAR_14 + VAR_6);




  FUNC_2("Hesiod base is: %s\n", VAR_11.hesiod_base);
  FUNC_2("hesiod_search: hes_resolve(%s, %s)", VAR_18, VAR_11.hesiod_base);
  if (FUNC_1(VAR_1))
    VAR_9.options |= VAR_8;





  VAR_19 = FUNC_4(VAR_18, VAR_11.hesiod_base);






  if (VAR_19 && *VAR_19) {
    if (VAR_13->cfm && (VAR_13->cfm->cfm_flags & VAR_0)) {
      *VAR_16 = FUNC_6(VAR_15, *VAR_19);
      FUNC_0(*VAR_19);
    } else
      *VAR_16 = *VAR_19;
    while (*++VAR_19)
      FUNC_0(*VAR_19);
    return 0;
  }
  FUNC_2("hesiod_search: Error: %d", FUNC_3());
  switch (FUNC_3()) {
  case 128:
    VAR_20 = VAR_4;
    break;
  case 130:
    VAR_20 = VAR_3;
    break;
  case 129:
    VAR_20 = VAR_5;
    break;
  default:
    VAR_20 = VAR_2;
    break;
  }
  FUNC_2("hesiod_search: Returning: %d", VAR_20);
  return VAR_20;

}
