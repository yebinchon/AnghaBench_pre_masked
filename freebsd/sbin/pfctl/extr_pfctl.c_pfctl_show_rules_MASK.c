
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ u_int32_t ;
struct TYPE_3__ {char* label; int rpool; int u_states_tot; scalar_t__* bytes; scalar_t__* packets; scalar_t__ evaluations; void* action; } ;
struct pfioc_rule {scalar_t__ nr; char* anchor_call; TYPE_1__ rule; int ticket; int action; int anchor; } ;
typedef int pr ;
typedef enum pfctl_show { ____Placeholder_pfctl_show } pfctl_show ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ FUNC_1 (int,int ,struct pfioc_rule*) ;
 int VAR_13 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct pfioc_rule*,int ,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int *,scalar_t__,int ,void*,char*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*,char*,int,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,scalar_t__,char*,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (char*) ;

int
FUNC_14(int VAR_14, char *VAR_15, int VAR_16, enum pfctl_show VAR_17,
    char *VAR_18, int VAR_19)
{
 struct pfioc_rule VAR_20;
 u_int32_t VAR_21, VAR_22, VAR_23 = 0;
 int VAR_24 = VAR_16 & (VAR_10 | VAR_5);
 int VAR_25 = VAR_16 & VAR_6;
 int VAR_26 = FUNC_11(VAR_15);
 int VAR_27;
 char *VAR_28;

 if (VAR_15[0])
  FUNC_10(&VAR_15[VAR_26], VAR_2 - VAR_26, "/%s", VAR_18);
 else
  FUNC_10(&VAR_15[VAR_26], VAR_2 - VAR_26, "%s", VAR_18);

 FUNC_3(&VAR_20, 0, sizeof(VAR_20));
 FUNC_2(VAR_20.anchor, VAR_15, sizeof(VAR_20.anchor));
 if (VAR_16 & VAR_8) {
  VAR_20.rule.action = VAR_11;
  if (FUNC_1(VAR_14, VAR_1, &VAR_20)) {
   FUNC_13("DIOCGETRULES");
   goto error;
  }
  VAR_23++;
 }
 VAR_20.rule.action = VAR_12;
 if (FUNC_1(VAR_14, VAR_1, &VAR_20)) {
  FUNC_13("DIOCGETRULES");
  goto error;
 }
 if (VAR_16 & VAR_8) {
  if (VAR_17 == 128 && (VAR_20.nr > 0 || VAR_23))
   FUNC_7("FILTER RULES:");
  else if (VAR_17 == 130 && VAR_13)
   FUNC_7("LABEL COUNTERS:");
 }
 VAR_22 = VAR_20.nr;
 if (VAR_16 & VAR_4)
  VAR_20.action = VAR_3;

 for (VAR_21 = 0; VAR_21 < VAR_22; ++VAR_21) {
  VAR_20.nr = VAR_21;
  if (FUNC_1(VAR_14, VAR_0, &VAR_20)) {
   FUNC_13("DIOCGETRULE");
   goto error;
  }

  if (FUNC_5(VAR_14, &VAR_20.rule.rpool,
      VAR_21, VAR_20.ticket, VAR_12, VAR_15) != 0)
   goto error;

  switch (VAR_17) {
  case 130:
   break;
  case 128:
   if (VAR_20.rule.label[0] && (VAR_16 & VAR_8))
    VAR_13 = 1;
   FUNC_8(&VAR_20.rule, VAR_20.anchor_call, VAR_24, VAR_25);
   FUNC_9("\n");
   FUNC_6(&VAR_20.rule, VAR_16);
   break;
  case 129:
   break;
  }
  FUNC_4(&VAR_20.rule.rpool);
 }
 VAR_20.rule.action = VAR_11;
 if (FUNC_1(VAR_14, VAR_1, &VAR_20)) {
  FUNC_13("DIOCGETRULES");
  goto error;
 }
 VAR_22 = VAR_20.nr;
 for (VAR_21 = 0; VAR_21 < VAR_22; ++VAR_21) {
  VAR_20.nr = VAR_21;
  if (FUNC_1(VAR_14, VAR_0, &VAR_20)) {
   FUNC_13("DIOCGETRULE");
   goto error;
  }

  if (FUNC_5(VAR_14, &VAR_20.rule.rpool,
      VAR_21, VAR_20.ticket, VAR_11, VAR_15) != 0)
   goto error;

  switch (VAR_17) {
  case 130:
   if (VAR_20.rule.label[0]) {
    FUNC_9("%s %llu %llu %llu %llu"
        " %llu %llu %llu %ju\n",
        VAR_20.rule.label,
        (unsigned long long)VAR_20.rule.evaluations,
        (unsigned long long)(VAR_20.rule.packets[0] +
        VAR_20.rule.packets[1]),
        (unsigned long long)(VAR_20.rule.bytes[0] +
        VAR_20.rule.bytes[1]),
        (unsigned long long)VAR_20.rule.packets[0],
        (unsigned long long)VAR_20.rule.bytes[0],
        (unsigned long long)VAR_20.rule.packets[1],
        (unsigned long long)VAR_20.rule.bytes[1],
        (uintmax_t)VAR_20.rule.u_states_tot);
   }
   break;
  case 128:
   VAR_27 = 0;
   if (VAR_20.rule.label[0] && (VAR_16 & VAR_8))
    VAR_13 = 1;
   FUNC_0(VAR_19, !(VAR_16 & VAR_9));
   if (VAR_20.anchor_call[0] &&
      ((((VAR_28 = FUNC_12(VAR_20.anchor_call, '_')) != ((void*)0)) &&
      ((void *)VAR_28 == (void *)VAR_20.anchor_call ||
      *(--VAR_28) == '/')) || (VAR_16 & VAR_7))) {
    VAR_27++;
    if ((VAR_28 = FUNC_12(VAR_20.anchor_call, '/')) !=
        ((void*)0))
     VAR_28++;
    else
     VAR_28 = &VAR_20.anchor_call[0];
   } else
    VAR_28 = &VAR_20.anchor_call[0];

   FUNC_8(&VAR_20.rule, VAR_28, VAR_24, VAR_25);
   if (VAR_27)
    FUNC_9(" {\n");
   else
    FUNC_9("\n");
   FUNC_6(&VAR_20.rule, VAR_16);
   if (VAR_27) {
    FUNC_14(VAR_14, VAR_15, VAR_16, VAR_17,
        VAR_28, VAR_19 + 1);
    FUNC_0(VAR_19, !(VAR_16 & VAR_9));
    FUNC_9("}\n");
   }
   break;
  case 129:
   break;
  }
  FUNC_4(&VAR_20.rule.rpool);
 }
 VAR_15[VAR_26] = '\0';
 return (0);

 error:
 VAR_15[VAR_26] = '\0';
 return (-1);
}
