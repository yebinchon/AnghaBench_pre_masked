
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ uid; void* home; void* username; void* uname; scalar_t__ last_status; scalar_t__ last_access_time; scalar_t__ child; } ;
typedef TYPE_1__ username2uid_t ;
typedef TYPE_1__ uid2home_t ;
typedef scalar_t__ u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,scalar_t__,void*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 void* FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(u_int VAR_5, const char *VAR_6, const char *VAR_7)
{
  int VAR_8;

  if (VAR_2 <= 0) {
    VAR_2 = 1;
    VAR_3 = (uid2home_t *) FUNC_3(VAR_2 *
       sizeof(uid2home_t));
    FUNC_1((char *) &VAR_3[0], 0, VAR_2 * sizeof(uid2home_t));
    VAR_4 = (username2uid_t *) FUNC_3(VAR_2 *
           sizeof(username2uid_t));
    FUNC_1((char *) &VAR_4[0], 0, VAR_2 * sizeof(username2uid_t));
  }


  if (VAR_1 + 1 > VAR_2) {

    VAR_2 *= 2;
    FUNC_2(VAR_0, "reallocating table spaces to %d entries", VAR_2);
    VAR_3 = (uid2home_t *) FUNC_4(VAR_3,
        sizeof(uid2home_t) * VAR_2);
    VAR_4 = (username2uid_t *) FUNC_4(VAR_4,
     sizeof(username2uid_t) *
     VAR_2);

    for (VAR_8=VAR_1; VAR_8<VAR_2; ++VAR_8) {
      FUNC_1((char *) &VAR_3[VAR_8], 0, sizeof(uid2home_t));
      FUNC_1((char *) &VAR_4[VAR_8], 0, sizeof(username2uid_t));
    }
  }


  for (VAR_8=0; VAR_8<VAR_1; ++VAR_8)
    if (VAR_5 == VAR_3[VAR_8].uid && VAR_5 != 0 ) {
      FUNC_0("ignoring duplicate home %s for uid %d (already %s)",
    VAR_6, VAR_5, VAR_3[VAR_8].home);
      return;
    }


  VAR_3[VAR_1].home = FUNC_5(VAR_6);
  VAR_3[VAR_1].child = 0;
  VAR_3[VAR_1].last_access_time = 0;
  VAR_3[VAR_1].last_status = 0;
  VAR_3[VAR_1].uid = VAR_5;


  VAR_4[VAR_1].username = FUNC_5(VAR_7);


  VAR_3[VAR_1].uname = VAR_4[VAR_1].username;
  VAR_4[VAR_1].uid = VAR_5;
  VAR_4[VAR_1].home = VAR_3[VAR_1].home;


  ++VAR_1;
}
