
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
typedef TYPE_1__* res_state ;
struct TYPE_9__ {int rcode; } ;
struct TYPE_8__ {scalar_t__ ndots; int res_h_errno; unsigned int options; scalar_t__ dnsrch; } ;
typedef TYPE_2__ HEADER ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int const) ;
 int VAR_5 ;

 scalar_t__ VAR_6 ;
 char* FUNC_1 (TYPE_1__*,char const*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char const*,int,int,int *,int) ;
 int FUNC_3 (TYPE_1__*,char const*,char const*,int,int,int *,int) ;

int
FUNC_4(res_state VAR_7,
     const char *VAR_8,
     int VAR_9, int VAR_10,
     u_char *VAR_11,
     int VAR_12)
{
 const char *VAR_13, * const *VAR_14;
 HEADER *VAR_15 = (HEADER *) VAR_11;
 char VAR_16[VAR_1];
 u_int VAR_17;
 int VAR_18, VAR_19, VAR_20;
 int VAR_21 = 0, VAR_22 = 0, VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25 = 0;

 VAR_6 = 0;
 FUNC_0(VAR_7, 130);
 VAR_17 = 0;
 for (VAR_13 = VAR_8; *VAR_13 != '\0'; VAR_13++)
  VAR_17 += (*VAR_13 == '.');
 VAR_18 = 0;
 if (VAR_13 > VAR_8 && *--VAR_13 == '.')
  VAR_18++;


 if (!VAR_17 && (VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_16, sizeof VAR_16))!= ((void*)0))
  return (FUNC_2(VAR_7, VAR_13, VAR_9, VAR_10, VAR_11, VAR_12));






 VAR_20 = -1;
 if (VAR_17 >= VAR_7->ndots || VAR_18) {
  VAR_19 = FUNC_3(VAR_7, VAR_8, ((void*)0), VAR_9, VAR_10,
      VAR_11, VAR_12);
  if (VAR_19 > 0 || VAR_18)
   return (VAR_19);
  if (VAR_6 == VAR_0) {
   FUNC_0(VAR_7, 128);
   return (-1);
  }
  switch (VAR_7->res_h_errno) {
  case 129:
  case 130:
   break;
  case 128:
   if (VAR_15->rcode == VAR_5)
    break;

  default:
   return (-1);
  }
  VAR_20 = VAR_7->res_h_errno;
  VAR_24++;
 }







 if ((!VAR_17 && (VAR_7->options & VAR_2) != 0U) ||
     (VAR_17 && !VAR_18 && (VAR_7->options & VAR_3) != 0U)) {
  int VAR_26 = 0;

  for (VAR_14 = (const char * const *)VAR_7->dnsrch;
       *VAR_14 && !VAR_26;
       VAR_14++) {
   VAR_25 = 1;

   if (VAR_14[0][0] == '\0' ||
       (VAR_14[0][0] == '.' && VAR_14[0][1] == '\0'))
    VAR_23++;

   if (VAR_23 && VAR_24)
    continue;

   VAR_19 = FUNC_3(VAR_7, VAR_8, *VAR_14,
            VAR_9, VAR_10,
            VAR_11, VAR_12);
   if (VAR_19 > 0)
    return (VAR_19);
   if (VAR_6 == VAR_0) {
    FUNC_0(VAR_7, 128);
    return (-1);
   }

   switch (VAR_7->res_h_errno) {
   case 129:
    VAR_21++;

   case 130:

    break;
   case 128:
    VAR_22++;
    if (VAR_15->rcode == VAR_5) {

     break;
    }

   default:

    VAR_26++;
   }




   if ((VAR_7->options & VAR_3) == 0U)
    VAR_26++;
  }
 }

 switch (VAR_7->res_h_errno) {
 case 129:
 case 130:
  break;
 case 128:
  if (VAR_15->rcode == VAR_5)
   break;

 default:
  goto giveup;
 }





 if ((VAR_17 || !VAR_25 || (VAR_7->options & VAR_4) == 0U) &&
     !(VAR_24 || VAR_23)) {
  VAR_19 = FUNC_3(VAR_7, VAR_8, ((void*)0), VAR_9, VAR_10,
           VAR_11, VAR_12);
  if (VAR_19 > 0)
   return (VAR_19);
 }
giveup:
 if (VAR_20 != -1)
  FUNC_0(VAR_7, VAR_20);
 else if (VAR_21)
  FUNC_0(VAR_7, 129);
 else if (VAR_22)
  FUNC_0(VAR_7, 128);
 return (-1);
}
