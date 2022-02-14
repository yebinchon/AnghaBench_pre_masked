
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct res_target {scalar_t__ answer; } ;
typedef TYPE_1__* res_state ;
typedef int abuf ;
struct TYPE_9__ {int rcode; } ;
struct TYPE_8__ {scalar_t__ ndots; int res_h_errno; int options; scalar_t__ dnsrch; } ;
typedef TYPE_2__ HEADER ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int const) ;
 int VAR_5 ;

 scalar_t__ VAR_6 ;
 char* FUNC_1 (TYPE_1__*,char const*,char*,int) ;
 int FUNC_2 (char const*,struct res_target*,TYPE_1__*) ;
 int FUNC_3 (char const*,char const*,struct res_target*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_7, struct res_target *VAR_8, res_state VAR_9)
{
 const char *VAR_10, * const *VAR_11;
 HEADER *VAR_12 = (HEADER *)(void *)VAR_8->answer;
 u_int VAR_13;
 int VAR_14, VAR_15, VAR_16;
 int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21 = 0;
 char VAR_22[VAR_1];

 VAR_6 = 0;
 FUNC_0(VAR_9, 130);
 VAR_13 = 0;
 for (VAR_10 = VAR_7; *VAR_10; VAR_10++)
  VAR_13 += (*VAR_10 == '.');
 VAR_14 = 0;
 if (VAR_10 > VAR_7 && *--VAR_10 == '.')
  VAR_14++;




 if (!VAR_13 &&
     (VAR_10 = FUNC_1(VAR_9, VAR_7, VAR_22, sizeof(VAR_22))) != ((void*)0))
  return (FUNC_2(VAR_10, VAR_8, VAR_9));






 VAR_16 = -1;
 if (VAR_13 >= VAR_9->ndots || VAR_14) {
  VAR_15 = FUNC_3(VAR_7, ((void*)0), VAR_8, VAR_9);
  if (VAR_15 > 0 || VAR_14)
   return (VAR_15);
  if (VAR_6 == VAR_0) {
   FUNC_0(VAR_9, 128);
   return (-1);
  }
  switch (VAR_9->res_h_errno) {
  case 129:
  case 130:
   break;
  case 128:
   if (VAR_12->rcode == VAR_5)
    break;

  default:
   return (-1);
  }
  VAR_16 = VAR_9->res_h_errno;
  VAR_20++;
 }







 if ((!VAR_13 && (VAR_9->options & VAR_2)) ||
     (VAR_13 && !VAR_14 && (VAR_9->options & VAR_3))) {
  int VAR_23 = 0;

  for (VAR_11 = (const char * const *)VAR_9->dnsrch;
     *VAR_11 && !VAR_23;
     VAR_11++) {
   VAR_21 = 1;

   if (VAR_11[0][0] == '\0' ||
       (VAR_11[0][0] == '.' && VAR_11[0][1] == '\0'))
    VAR_19++;

   if (VAR_19 && VAR_20)
    continue;

   VAR_15 = FUNC_3(VAR_7, *VAR_11, VAR_8, VAR_9);
   if (VAR_15 > 0)
    return (VAR_15);
   if (VAR_6 == VAR_0) {
    FUNC_0(VAR_9, 128);
    return (-1);
   }

   switch (VAR_9->res_h_errno) {
   case 129:
    VAR_17++;

   case 130:

    break;
   case 128:
    VAR_18++;
    if (VAR_12->rcode == VAR_5) {

     break;
    }

   default:

    VAR_23++;
   }




   if (!(VAR_9->options & VAR_3))
           VAR_23++;
  }
 }

 switch (VAR_9->res_h_errno) {
 case 129:
 case 130:
  break;
 case 128:
  if (VAR_12->rcode == VAR_5)
   break;

 default:
  goto giveup;
 }





 if ((VAR_13 || !VAR_21 || !(VAR_9->options & VAR_4)) &&
     !(VAR_20 || VAR_19)) {
  VAR_15 = FUNC_3(VAR_7, ((void*)0), VAR_8, VAR_9);
  if (VAR_15 > 0)
   return (VAR_15);
 }
giveup:
 if (VAR_16 != -1)
  FUNC_0(VAR_9, VAR_16);
 else if (VAR_17)
  FUNC_0(VAR_9, 129);
 else if (VAR_18)
  FUNC_0(VAR_9, 128);
 return (-1);
}
