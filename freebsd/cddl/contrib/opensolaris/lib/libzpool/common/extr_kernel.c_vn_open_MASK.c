
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int v_fd; int v_dump_fd; int v_path; int v_size; } ;
typedef TYPE_1__ vnode_t ;
struct stat64 {int st_size; } ;
typedef int dumppath ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,struct stat64*) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (char*,struct stat64*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 char* FUNC_10 (char*,char*) ;
 int FUNC_11 (int) ;
 TYPE_1__* FUNC_12 (int,int ) ;
 char* VAR_10 ;

int
FUNC_13(char *VAR_11, int VAR_12, int VAR_13, int VAR_14, vnode_t **VAR_15, int VAR_16, int VAR_17)
{
 int VAR_18;
 int VAR_19;
 vnode_t *VAR_20;
 int VAR_21;
 char VAR_22[VAR_4];
 struct stat64 VAR_23;
 if (FUNC_9(VAR_11, "/dev/", 5) == 0) {
  char *VAR_24;
  VAR_18 = FUNC_4(VAR_11, VAR_6);
  if (VAR_18 == -1)
   return (VAR_9);
  if (FUNC_3(VAR_18, &VAR_23) == -1) {
   FUNC_1(VAR_18);
   return (VAR_9);
  }
  FUNC_1(VAR_18);
  (void) FUNC_7(VAR_22, "%s", VAR_11);
  VAR_24 = FUNC_10(VAR_11, "/dsk/");
  if (VAR_24 != ((void*)0))
   (void) FUNC_7(VAR_22 + (VAR_24 - VAR_11) + 1, "r%s",
       VAR_24 + 1);
 } else {
  (void) FUNC_7(VAR_22, "%s", VAR_11);
  if (!(VAR_13 & VAR_0) && FUNC_8(VAR_22, &VAR_23) == -1)
   return (VAR_9);
 }

 if (VAR_13 & VAR_0)
  VAR_21 = FUNC_11(0);





 VAR_18 = FUNC_4(VAR_22, VAR_13 - VAR_2, VAR_14);

 if (VAR_13 & VAR_0)
  (void) FUNC_11(VAR_21);

 if (VAR_10 != ((void*)0)) {
  char VAR_25[VAR_4];
  (void) FUNC_5(VAR_25, sizeof (VAR_25),
      "%s/%s", VAR_10, FUNC_0(VAR_22));
  VAR_19 = FUNC_4(VAR_25, VAR_5 | VAR_7, 0666);
  if (VAR_19 == -1)
   return (VAR_9);
 } else {
  VAR_19 = -1;
 }

 if (VAR_18 == -1)
  return (VAR_9);

 if (FUNC_3(VAR_18, &VAR_23) == -1) {
  FUNC_1(VAR_18);
  return (VAR_9);
 }

 (void) FUNC_2(VAR_18, VAR_3, VAR_1);

 *VAR_15 = VAR_20 = FUNC_12(sizeof (vnode_t), VAR_8);

 VAR_20->v_fd = VAR_18;
 VAR_20->v_size = VAR_23.st_size;
 VAR_20->v_path = FUNC_6(VAR_11);
 VAR_20->v_dump_fd = VAR_19;

 return (0);
}
