
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct netent_data {char* netbuf; char** net_aliases; } ;
struct netent {char** n_aliases; char* n_name; long n_net; int n_addrtype; } ;
typedef int res_state ;
struct TYPE_5__ {scalar_t__ aa; int qdcount; int ancount; } ;
struct TYPE_4__ {int * buf; TYPE_2__ hdr; } ;
typedef TYPE_1__ querybuf ;
typedef int aux ;
typedef int ans ;
typedef TYPE_2__ HEADER ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *,char*,int) ;
 int VAR_12 ;
 long FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_12(querybuf *VAR_13, int VAR_14, int VAR_15, struct netent *VAR_16,
    struct netent_data *VAR_17, res_state VAR_18)
{

 HEADER *VAR_19;
 u_char *VAR_20;
 int VAR_21;
 u_char *VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 char VAR_28[VAR_7];
 char VAR_29[VAR_7];
 char *VAR_30, *VAR_31, *VAR_32, **VAR_33;
 VAR_22 = VAR_13->buf + VAR_14;
 VAR_19 = &VAR_13->hdr;
 VAR_25 = FUNC_6(VAR_19->ancount);
 VAR_26 = FUNC_6(VAR_19->qdcount);
 VAR_31 = VAR_17->netbuf;
 VAR_32 = VAR_17->netbuf + sizeof(VAR_17->netbuf);
 VAR_20 = VAR_13->buf + VAR_4;
 if (!VAR_26) {
  if (VAR_19->aa)
   FUNC_1(VAR_18, VAR_5);
  else
   FUNC_1(VAR_18, VAR_10);
  return (-1);
 }
 while (VAR_26-- > 0)
  VAR_20 += FUNC_2(VAR_20, VAR_22) + VAR_9;
 VAR_33 = VAR_17->net_aliases;
 *VAR_33 = ((void*)0);
 VAR_16->n_aliases = VAR_17->net_aliases;
 VAR_27 = 0;
 while (--VAR_25 >= 0 && VAR_20 < VAR_22) {
  VAR_21 = FUNC_3(VAR_13->buf, VAR_22, VAR_20, VAR_31, VAR_32 - VAR_31);
  if ((VAR_21 < 0) || !FUNC_7(VAR_31))
   break;
  VAR_20 += VAR_21;
  VAR_29[0] = '\0';
  (void)FUNC_11(&VAR_29[0], VAR_31, sizeof(VAR_29) - 1);
  VAR_29[sizeof(VAR_29) - 1] = '\0';
  FUNC_0(VAR_23, VAR_20);
  FUNC_0(VAR_24, VAR_20);
  VAR_20 += VAR_6;
  FUNC_0(VAR_21, VAR_20);
  if (VAR_24 == VAR_2 && VAR_23 == VAR_11) {
   VAR_21 = FUNC_3(VAR_13->buf, VAR_22, VAR_20, VAR_31, VAR_32 - VAR_31);
   if ((VAR_21 < 0) || !FUNC_8(VAR_31)) {
    VAR_20 += VAR_21;
    return (-1);
   }
   VAR_20 += VAR_21;
   *VAR_33++ = VAR_31;
   VAR_21 = FUNC_10(VAR_31) + 1;
   VAR_31 += VAR_21;
   VAR_16->n_addrtype = (VAR_24 == VAR_2) ? VAR_0 : VAR_1;
   VAR_27++;
  }
 }
 if (VAR_27) {
  *VAR_33 = ((void*)0);
  switch (VAR_15) {
  case 129:
   VAR_16->n_name = *VAR_16->n_aliases;
   VAR_16->n_net = 0L;
   break;
  case 128:
   VAR_30 = *VAR_16->n_aliases;
   VAR_21 = FUNC_10(VAR_29) + 1;
   if (VAR_32 - VAR_31 < VAR_21) {
    FUNC_1(VAR_18, VAR_8);
    VAR_12 = VAR_3;
    return (-1);
   }
   FUNC_9(VAR_31, VAR_29, VAR_32 - VAR_31);
   VAR_16->n_name = VAR_31;
   if (FUNC_10(VAR_30) + 1 > sizeof(VAR_28)) {
    FUNC_1(VAR_18, VAR_8);
    VAR_12 = VAR_3;
    return (-1);
   }
   FUNC_5(VAR_30, VAR_28);
   VAR_16->n_net = FUNC_4(VAR_28);
   break;
  }
  VAR_16->n_aliases++;
  return (0);
 }
 FUNC_1(VAR_18, VAR_10);
 return (-1);
}
