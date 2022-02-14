
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char const* line; } ;
struct TYPE_5__ {char const* str; int num; } ;
typedef TYPE_1__ HistEvent ;
typedef TYPE_2__ HIST_ENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (size_t,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,TYPE_1__*,int ,...) ;
 int VAR_4 ;
 char const VAR_5 ;
 TYPE_2__* FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;
 char* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*,char const*,size_t) ;

const char *
FUNC_8(const char *VAR_10, int *VAR_11, int VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 size_t VAR_19;
 char *VAR_20;
 const char *VAR_21;
 HistEvent VAR_22;

 VAR_13 = *VAR_11;
 if (VAR_10[VAR_13++] != VAR_5)
  return ((void*)0);


 if (VAR_10[VAR_13] == VAR_5 || VAR_10[VAR_13] == '\0') {
  if (FUNC_3(VAR_3, &VAR_22, VAR_1) != 0)
   return ((void*)0);
  *VAR_11 = VAR_10[VAR_13]? (VAR_13 + 1):VAR_13;
  return VAR_22.str;
 }
 VAR_14 = 0;
 if (VAR_10[VAR_13] == '-') {
  VAR_14 = 1;
  VAR_13++;
 }

 if ('0' <= VAR_10[VAR_13] && VAR_10[VAR_13] <= '9') {
  HIST_ENTRY *VAR_23;

  VAR_16 = 0;
  while (VAR_10[VAR_13] && '0' <= VAR_10[VAR_13] && VAR_10[VAR_13] <= '9') {
   VAR_16 = VAR_16 * 10 + VAR_10[VAR_13] - '0';
   VAR_13++;
  }
  if (VAR_14)
   VAR_16 = VAR_6 - VAR_16 + VAR_4;

  if (!(VAR_23 = FUNC_4(VAR_16)))
   return ((void*)0);

  *VAR_11 = VAR_13;
  return VAR_23->line;
 }
 VAR_15 = 0;
 if (VAR_10[VAR_13] == '?') {
  VAR_15 = 1;
  VAR_13++;
 }
 VAR_17 = VAR_13;
 while (VAR_10[VAR_13]) {
  if (VAR_10[VAR_13] == '\n')
   break;
  if (VAR_15 && VAR_10[VAR_13] == '?')
   break;
  if (!VAR_15 && (VAR_10[VAR_13] == ':' || VAR_10[VAR_13] == ' '
        || VAR_10[VAR_13] == '\t' || VAR_10[VAR_13] == VAR_12))
   break;
  VAR_13++;
 }
 VAR_19 = (size_t)VAR_13 - (size_t)VAR_17;
 if (VAR_15 && VAR_10[VAR_13] == '?')
  VAR_13++;
 if (VAR_15 && VAR_19 == 0 && VAR_8 && *VAR_8)
  VAR_20 = VAR_8;
 else if (VAR_19 == 0)
  return ((void*)0);
 else {
  if ((VAR_20 = FUNC_0(VAR_19 + 1, sizeof(*VAR_20))) == ((void*)0))
   return ((void*)0);
  (void)FUNC_7(VAR_20, VAR_10 + VAR_17, VAR_19);
  VAR_20[VAR_19] = '\0';
 }

 if (FUNC_3(VAR_3, &VAR_22, VAR_0) != 0) {
  if (VAR_20 != VAR_8)
   FUNC_1(VAR_20);
  return ((void*)0);
 }
 VAR_16 = VAR_22.num;

 if (VAR_15) {
  if (VAR_20 != VAR_8) {
   if (VAR_8)
    FUNC_1(VAR_8);
   VAR_8 = VAR_20;
  }
  VAR_18 = FUNC_5(VAR_20, -1);
 } else
  VAR_18 = FUNC_6(VAR_20, -1);

 if (VAR_18 == -1) {

  FUNC_3(VAR_3, &VAR_22, VAR_1);
  (void)FUNC_2(VAR_9, "%s: Event not found\n", VAR_20);
  if (VAR_20 != VAR_8)
   FUNC_1(VAR_20);
  return ((void*)0);
 }

 if (VAR_15 && VAR_19) {
  if (VAR_7 && VAR_7 != VAR_20)
   FUNC_1(VAR_7);
  VAR_7 = VAR_20;
 }

 if (VAR_20 != VAR_8)
  FUNC_1(VAR_20);

 if (FUNC_3(VAR_3, &VAR_22, VAR_0) != 0)
  return ((void*)0);
 *VAR_11 = VAR_13;
 VAR_21 = VAR_22.str;


 (void)FUNC_3(VAR_3, &VAR_22, VAR_2, VAR_16);

 return VAR_21;
}
