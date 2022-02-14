
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct in6_addr {int dummy; } ;
struct afd {int dummy; } ;
struct addrinfo {struct addrinfo* ai_next; int ai_family; } ;
typedef int sentinel ;
typedef TYPE_1__* res_state ;
struct TYPE_10__ {int ancount; int qdcount; } ;
struct TYPE_9__ {int * buf; TYPE_3__ hdr; } ;
typedef TYPE_2__ querybuf ;
typedef int in6 ;
struct TYPE_8__ {scalar_t__ nsort; } ;
typedef TYPE_3__ HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct in6_addr*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (TYPE_1__*,int ) ;



 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct addrinfo*,TYPE_1__*) ;
 int FUNC_5 (int *,int const*,int const*,char*,int) ;
 struct afd* FUNC_6 (int ) ;
 int FUNC_7 (struct addrinfo*) ;
 struct addrinfo* FUNC_8 (struct addrinfo*,struct afd const*,char const*) ;
 int FUNC_9 (struct addrinfo const*,struct addrinfo*,char const*) ;
 int FUNC_10 (struct in6_addr*,int const*,int) ;
 int FUNC_11 (struct addrinfo*,int ,int) ;
 int VAR_20 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char*,int) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char const*) ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (char const*) ;
 int FUNC_22 (int,char*,char const*,char*,...) ;

__attribute__((used)) static struct addrinfo *
FUNC_23(const querybuf *VAR_21, int VAR_22, const char *VAR_23, int VAR_24,
    const struct addrinfo *VAR_25, res_state VAR_26)
{
 struct addrinfo VAR_27, *VAR_28;
 struct addrinfo VAR_29;
 const struct afd *VAR_30;
 char *VAR_31;
 const HEADER *VAR_32;
 const u_char *VAR_33;
 int VAR_34;
 const u_char *VAR_35;
 char *VAR_36, *VAR_37;
 int VAR_38, VAR_39, VAR_40, VAR_41;
 int VAR_42, VAR_43;
 char VAR_44[VAR_11];
 int (*VAR_45)(const char *);
 char VAR_46[8*1024];

 FUNC_11(&VAR_27, 0, sizeof(VAR_27));
 VAR_28 = &VAR_27;

 VAR_31 = ((void*)0);
 VAR_35 = VAR_21->buf + VAR_22;
 switch (VAR_24) {
 case 130:
 case 129:
 case 128:
  VAR_45 = FUNC_15;
  break;
 default:
  return (((void*)0));
 }



 VAR_32 = &VAR_21->hdr;
 VAR_40 = FUNC_12(VAR_32->ancount);
 VAR_41 = FUNC_12(VAR_32->qdcount);
 VAR_36 = VAR_46;
 VAR_37 = VAR_46 + sizeof VAR_46;
 VAR_33 = VAR_21->buf + VAR_4;
 if (VAR_41 != 1) {
  FUNC_1(VAR_26, VAR_15);
  return (((void*)0));
 }
 VAR_34 = FUNC_5(VAR_21->buf, VAR_35, VAR_33, VAR_36, VAR_37 - VAR_36);
 if ((VAR_34 < 0) || !(*VAR_45)(VAR_36)) {
  FUNC_1(VAR_26, VAR_15);
  return (((void*)0));
 }
 VAR_33 += VAR_34 + VAR_16;
 if (VAR_24 == 130 || VAR_24 == 129 || VAR_24 == 128) {




  VAR_34 = FUNC_18(VAR_36) + 1;
  if (VAR_34 >= VAR_12) {
   FUNC_1(VAR_26, VAR_15);
   return (((void*)0));
  }
  VAR_31 = VAR_36;
  VAR_36 += VAR_34;

  VAR_23 = VAR_31;
 }
 VAR_42 = 0;
 VAR_43 = 0;
 while (VAR_40-- > 0 && VAR_33 < VAR_35 && !VAR_43) {
  VAR_34 = FUNC_5(VAR_21->buf, VAR_35, VAR_33, VAR_36, VAR_37 - VAR_36);
  if ((VAR_34 < 0) || !(*VAR_45)(VAR_36)) {
   VAR_43++;
   continue;
  }
  VAR_33 += VAR_34;
  VAR_38 = FUNC_2(VAR_33);
   VAR_33 += VAR_7;
  VAR_39 = FUNC_2(VAR_33);
   VAR_33 += VAR_7 + VAR_8;
  VAR_34 = FUNC_2(VAR_33);
  VAR_33 += VAR_7;
  if (VAR_39 != VAR_3) {

   VAR_33 += VAR_34;
   continue;
  }
  if ((VAR_24 == 130 || VAR_24 == 129 || VAR_24 == 128) &&
      VAR_38 == VAR_17) {
   VAR_34 = FUNC_5(VAR_21->buf, VAR_35, VAR_33, VAR_44, sizeof VAR_44);
   if ((VAR_34 < 0) || !(*VAR_45)(VAR_44)) {
    VAR_43++;
    continue;
   }
   VAR_33 += VAR_34;

   VAR_34 = FUNC_18(VAR_44) + 1;
   if (VAR_34 > VAR_37 - VAR_36 || VAR_34 >= VAR_12) {
    VAR_43++;
    continue;
   }
   FUNC_17(VAR_36, VAR_44, VAR_37 - VAR_36);
   VAR_31 = VAR_36;
   VAR_36 += VAR_34;
   continue;
  }
  if (VAR_24 == 128) {
   if (!(VAR_38 == 130 || VAR_38 == 129)) {
    VAR_33 += VAR_34;
    continue;
   }
  } else if (VAR_38 != VAR_24) {
   VAR_33 += VAR_34;
   continue;
  }
  switch (VAR_38) {
  case 130:
  case 129:
   if (FUNC_16(VAR_31, VAR_36) != 0) {




    VAR_33 += VAR_34;
    continue;
   }
   if (VAR_38 == 130 && VAR_34 != VAR_6) {
    VAR_33 += VAR_34;
    continue;
   }
   if (VAR_38 == 129 && VAR_34 != VAR_5) {
    VAR_33 += VAR_34;
    continue;
   }
   if (!VAR_42) {
    int VAR_47;

    VAR_31 = VAR_36;
    VAR_47 = FUNC_18(VAR_36) + 1;
    VAR_36 += VAR_47;
   }


   VAR_29 = *VAR_25;
   VAR_29.ai_family = (VAR_38 == 130) ? VAR_0 : VAR_1;
   VAR_30 = FUNC_6(VAR_29.ai_family);
   if (VAR_30 == ((void*)0)) {
    VAR_33 += VAR_34;
    continue;
   }
   VAR_28->ai_next = FUNC_8(&VAR_29, VAR_30, (const char *)VAR_33);
   if (VAR_28->ai_next == ((void*)0))
    VAR_43++;
   while (VAR_28 && VAR_28->ai_next)
    VAR_28 = VAR_28->ai_next;
   VAR_33 += VAR_34;
   break;
  default:
   FUNC_3();
  }
  if (!VAR_43)
   VAR_42++;
 }
 if (VAR_42) {
  if (!VAR_31)
   (void)FUNC_9(VAR_25, VAR_27.ai_next, VAR_23);
  else
   (void)FUNC_9(VAR_25, VAR_27.ai_next, VAR_31);
  FUNC_1(VAR_26, VAR_13);
  return VAR_27.ai_next;
 }





 FUNC_1(VAR_26, FUNC_12(VAR_32->ancount) > 0 ? VAR_14 : VAR_15);
 return ((void*)0);
}
