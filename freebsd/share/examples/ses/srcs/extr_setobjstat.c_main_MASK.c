
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long elm_idx; long* cstat; } ;
typedef TYPE_1__ encioc_elm_status_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 long FUNC_5 (char*,char**,int ) ;

int
FUNC_6(int VAR_3, char **VAR_4)
{
 int VAR_5;
 int VAR_6;
 encioc_elm_status_t VAR_7;
 long VAR_8;
 char *VAR_9;

 if (VAR_3 != 7) {
usage:
  FUNC_1(VAR_2,
      "usage: %s device objectid stat0 stat1 stat2 stat3\n", *VAR_4);
  return (1);
 }
 VAR_5 = FUNC_3(VAR_4[1], VAR_1);
 if (VAR_5 < 0) {
  FUNC_4(VAR_4[1]);
  return (1);
 }
 VAR_9 = VAR_4[2];
 VAR_8 = FUNC_5(VAR_4[2], &VAR_9, 0);
 if (VAR_9 == VAR_4[2]) {
  goto usage;
 }
 VAR_7.elm_idx = VAR_8;
 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  VAR_9 = VAR_4[3 + VAR_6];
  VAR_8 = FUNC_5(VAR_4[3 + VAR_6], &VAR_9, 0);
  if (VAR_9 == VAR_4[3 + VAR_6]) {
   goto usage;
  }
  VAR_7.cstat[VAR_6] = VAR_8;
 }
 if (FUNC_2(VAR_5, VAR_0, (caddr_t) &VAR_7) < 0) {
  FUNC_4("ENCIOC_SETELMSTAT");
 }
 (void) FUNC_0(VAR_5);
 return (0);
}
