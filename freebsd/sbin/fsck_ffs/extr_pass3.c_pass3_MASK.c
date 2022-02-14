
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct inoinfo {void* i_number; scalar_t__ i_parent; scalar_t__ i_dotdot; } ;
struct inodesc {void* id_number; char* id_name; int id_func; void* id_parent; int id_type; } ;
typedef void* ino_t ;
struct TYPE_2__ {int ino_state; int ino_linkcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 (int ,struct inodesc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct inoinfo* FUNC_3 (scalar_t__) ;
 int FUNC_4 (void*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_1__* FUNC_5 (void*) ;
 int VAR_13 ;
 struct inoinfo** VAR_14 ;
 void* VAR_15 ;
 scalar_t__ FUNC_6 (void*,void*,char*) ;
 int FUNC_7 (struct inodesc*,int ,int) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_16 ;
 int FUNC_9 (char*,char*,int,int,int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (char*) ;
 scalar_t__ VAR_17 ;
 int FUNC_12 (char*,char*,int) ;
 scalar_t__ VAR_18 ;

void
FUNC_13(void)
{
 struct inoinfo *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 ino_t VAR_23;
 struct inodesc VAR_24;
 char VAR_25[VAR_4+1];

 for (VAR_21 = VAR_13 - 1; VAR_21 >= 0; VAR_21--) {
  if (VAR_12) {
   FUNC_9("%s: phase 3: dir %d of %d (%d%%)\n", VAR_7,
       (int)(VAR_13 - VAR_21 - 1), (int)VAR_13,
       (int)((VAR_13 - VAR_21 - 1) * 100 / VAR_13));
   VAR_12 = 0;
  }
  if (VAR_11) {
   FUNC_12("%s p3 %d%%", VAR_7,
       (int)((VAR_13 - VAR_21 - 1) * 100 / VAR_13));
   VAR_11 = 0;
  }
  VAR_19 = VAR_14[VAR_21];
  VAR_22 = FUNC_5(VAR_19->i_number)->ino_state;
  if (VAR_19->i_number == VAR_5 ||
      (VAR_19->i_parent != 0 && !FUNC_1(VAR_22)))
   continue;
  if (VAR_22 == VAR_1)
   continue;






  if ((VAR_16 || VAR_6) &&
      VAR_17 && VAR_18 && FUNC_1(VAR_22)) {
   if (VAR_19->i_dotdot >= VAR_5)
    FUNC_5(VAR_19->i_dotdot)->ino_linkcnt++;
   continue;
  }
  for (VAR_20 = 0; ; VAR_20++) {
   VAR_23 = VAR_19->i_number;
   if (VAR_19->i_parent == 0 ||
       !FUNC_0(VAR_19->i_parent) ||
       VAR_20 > VAR_9)
    break;
   VAR_19 = FUNC_3(VAR_19->i_parent);
  }
  if (VAR_20 <= VAR_9) {
   if (FUNC_6(VAR_23, VAR_19->i_dotdot, ((void*)0))) {
    VAR_19->i_parent = VAR_19->i_dotdot = VAR_15;
    FUNC_5(VAR_15)->ino_linkcnt--;
   }
   FUNC_5(VAR_23)->ino_state = VAR_2;
   FUNC_10();
   continue;
  }
  FUNC_8("ORPHANED DIRECTORY LOOP DETECTED I=%lu",
      (u_long)VAR_23);
  if (FUNC_11("RECONNECT") == 0)
   continue;
  FUNC_7(&VAR_24, 0, sizeof(struct inodesc));
  VAR_24.id_type = VAR_0;
  VAR_24.id_number = VAR_19->i_parent;
  VAR_24.id_parent = VAR_23;
  VAR_24.id_func = VAR_10;
  VAR_24.id_name = VAR_25;
  if ((FUNC_2(FUNC_4(VAR_19->i_parent), &VAR_24) & VAR_3) == 0)
   FUNC_8("COULD NOT FIND NAME IN PARENT DIRECTORY");
  if (FUNC_6(VAR_23, VAR_19->i_parent, VAR_25)) {
   VAR_24.id_func = VAR_8;
   if (FUNC_2(FUNC_4(VAR_19->i_parent), &VAR_24) & VAR_3)
    FUNC_5(VAR_23)->ino_linkcnt++;
   VAR_19->i_parent = VAR_19->i_dotdot = VAR_15;
   FUNC_5(VAR_15)->ino_linkcnt--;
  }
  FUNC_5(VAR_23)->ino_state = VAR_2;
  FUNC_10();
 }
}
