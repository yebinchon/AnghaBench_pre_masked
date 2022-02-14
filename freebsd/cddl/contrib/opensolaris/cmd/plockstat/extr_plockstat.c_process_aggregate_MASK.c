
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint64_t ;
typedef char* u_longlong_t ;
struct ps_prochandle {int dummy; } ;
typedef int pid_t ;
struct TYPE_6__ {scalar_t__ dtrd_offset; } ;
typedef TYPE_2__ dtrace_recdesc_t ;
struct TYPE_7__ {TYPE_1__* dtada_desc; scalar_t__ dtada_data; } ;
typedef TYPE_3__ dtrace_aggdata_t ;
typedef scalar_t__ caddr_t ;
typedef int buf ;
struct TYPE_5__ {TYPE_2__* dtagd_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ps_prochandle* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,struct ps_prochandle*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (struct ps_prochandle*,int,char*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(const dtrace_aggdata_t **VAR_8, int VAR_9, void *VAR_10)
{
 const dtrace_recdesc_t *VAR_11;
 uintptr_t VAR_12;
 uint64_t *VAR_13;
 caddr_t VAR_14;
 pid_t VAR_15;
 struct ps_prochandle *VAR_16;
 char VAR_17[256];
 int VAR_18, VAR_19;
 uint64_t VAR_20, VAR_21, VAR_22;

 if ((*(uint_t *)VAR_10)++ >= VAR_5)
  return (VAR_0);

 VAR_11 = VAR_8[0]->dtada_desc->dtagd_rec;
 VAR_14 = VAR_8[0]->dtada_data;


 VAR_12 = (uintptr_t)*(uint64_t *)(VAR_14 + VAR_11[1].dtrd_offset);

 VAR_13 = (uint64_t *)(VAR_14 + VAR_11[2].dtrd_offset);

 if (!VAR_7) {

  VAR_20 = *(uint64_t *)(VAR_8[1]->dtada_data +
      VAR_8[1]->dtada_desc->dtagd_rec[3].dtrd_offset);

  VAR_21 = *(uint64_t *)(VAR_8[2]->dtada_data +
      VAR_8[2]->dtada_desc->dtagd_rec[3].dtrd_offset);
 } else {
  uint64_t *VAR_23;


  VAR_23 = (uint64_t *)(VAR_8[1]->dtada_data +
      VAR_8[1]->dtada_desc->dtagd_rec[3].dtrd_offset);

  FUNC_3();
  FUNC_5();

  for (VAR_21 = VAR_20 = 0, VAR_18 = VAR_2, VAR_19 = 0;
      VAR_18 < VAR_1; VAR_18++, VAR_19++) {
   VAR_21 += VAR_23[VAR_18];
   VAR_20 += VAR_23[VAR_18] << (VAR_19 - 64);
  }
 }

 VAR_22 = VAR_20 / VAR_21;
 (void) FUNC_6("%5llu %8llu ", (u_longlong_t)VAR_21, (u_longlong_t)VAR_22);

 VAR_15 = VAR_13[0];
 VAR_16 = FUNC_0(VAR_4, VAR_15, VAR_3);

 (void) FUNC_2(VAR_16, VAR_12, VAR_17, sizeof (VAR_17), 0);
 (void) FUNC_6("%-28s ", VAR_17);

 for (VAR_18 = 2; VAR_18 <= 5; VAR_18++) {
  if (FUNC_2(VAR_16, VAR_13[VAR_18], VAR_17, sizeof (VAR_17), 1) == 0)
   break;
 }
 (void) FUNC_6("%s\n", VAR_17);

 if (VAR_7) {
  int VAR_24 = 0;
  int VAR_25 = 0;
  int VAR_26, VAR_27;
  uint64_t VAR_28, *VAR_29;


  VAR_29 = (uint64_t *)(VAR_8[1]->dtada_data +
      VAR_8[1]->dtada_desc->dtagd_rec[3].dtrd_offset);

  FUNC_4();

  for (VAR_26 = VAR_2;
      VAR_29[VAR_26] == 0; VAR_26++)
   continue;
  for (VAR_27 = VAR_2 + 63;
      VAR_29[VAR_27] == 0; VAR_27--)
   continue;

  for (VAR_18 = 0; !VAR_24 || !VAR_25; VAR_18++) {
   if (!VAR_24) {
    (void) FUNC_2(VAR_16, VAR_13[VAR_18 + 2], VAR_17,
        sizeof (VAR_17), 0);
   } else {
    VAR_17[0] = '\0';
   }

   if (!VAR_25) {
    VAR_28 = VAR_29[VAR_26];

    (void) FUNC_6("%10llu |%-24.*s| %5llu %s\n",
        1ULL <<
        (VAR_26 - VAR_2),
        (int)(24.0 * VAR_28 / VAR_21),
        "@@@@@@@@@@@@@@@@@@@@@@@@@@",
        (u_longlong_t)VAR_28, VAR_17);
   } else {
    (void) FUNC_6("%43s %s\n", "", VAR_17);
   }

   if (VAR_18 + 1 >= VAR_6 || VAR_13[VAR_18 + 3] == 0)
    VAR_24 = 1;

   if (VAR_26++ == VAR_27)
    VAR_25 = 1;
  }
 }

 FUNC_1(VAR_4, VAR_16);

 return (VAR_0);
}
