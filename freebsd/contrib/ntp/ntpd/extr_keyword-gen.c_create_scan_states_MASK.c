
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_short ;
typedef scalar_t__ follby ;
struct TYPE_4__ {char ch; size_t other_next_s; size_t finishes_token; char followedby; size_t match_next_s; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 char VAR_0 ;
 int FUNC_1 (TYPE_1__) ;
 char* VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 char* FUNC_4 (size_t) ;

__attribute__((used)) static u_short
FUNC_5(
 char * VAR_5,
 u_short VAR_6,
 follby VAR_7,
 u_short VAR_8
 )
{
 u_short VAR_9;
 u_short VAR_10;
 u_short VAR_11;
 u_short VAR_12;

 VAR_10 = VAR_8;
 VAR_12 = VAR_8;
 VAR_11 = 0;




 while (VAR_12 && (VAR_5[0] < VAR_2[VAR_12].ch)) {
  VAR_11 = VAR_12;
  VAR_12 = VAR_2[VAR_12].other_next_s;
 }






 if (VAR_12 && (VAR_5[0] == VAR_2[VAR_12].ch)) {
  VAR_9 = VAR_12;
  if ('\0' == VAR_5[1]) {
   FUNC_3(VAR_4,
    "Duplicate entries for keyword '%s' in"
    " keyword_gen.c ntp_keywords[].\n",
    VAR_1);
   FUNC_2(2);
  }
 } else {
  do
   VAR_9 = VAR_3++;
  while (VAR_9 < FUNC_0(VAR_2)
         && VAR_2[VAR_9].finishes_token);
  if (VAR_9 >= FUNC_0(VAR_2)) {
   FUNC_3(VAR_4,
    "fatal, keyword scanner state array "
    "sst[%d] is too small, modify\n"
    "keyword-gen.c to increase.\n",
    (int)FUNC_0(VAR_2));
   FUNC_2(3);
  }

  VAR_2[VAR_9].ch = VAR_5[0];
  VAR_2[VAR_9].other_next_s = VAR_12;
  VAR_2[VAR_9].followedby = VAR_0;

  if (VAR_11)
   VAR_2[VAR_11].other_next_s = VAR_9;
  else
   VAR_10 = VAR_9;
 }






 if ('\0' == VAR_5[1]) {
  VAR_2[VAR_9].finishes_token = (u_short)VAR_6;
  VAR_2[VAR_9].followedby = (char)VAR_7;

  if (VAR_2[VAR_6].finishes_token != (u_short)VAR_6) {
   FUNC_3(VAR_4,
    "fatal, sst[%zu] not reserved for %s.\n",
    VAR_6, FUNC_4(VAR_6));
   FUNC_2(6);
  }

  if (VAR_9 != VAR_6) {
   VAR_2[VAR_6] = VAR_2[VAR_9];
   FUNC_1(VAR_2[VAR_9]);
   do
    VAR_3--;
   while (VAR_2[VAR_3].finishes_token);
   VAR_9 = VAR_6;
   if (VAR_11)
    VAR_2[VAR_11].other_next_s = VAR_9;
   else
    VAR_10 = VAR_9;
  }
 } else
  VAR_2[VAR_9].match_next_s =
      FUNC_5(
   &VAR_5[1],
   VAR_6,
   VAR_7,
   VAR_2[VAR_9].match_next_s);

 return VAR_10;
}
