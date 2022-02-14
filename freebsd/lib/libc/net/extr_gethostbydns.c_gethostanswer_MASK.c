
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct hostent_data {char* hostbuf; char** host_aliases; char** h_addr_ptrs; } ;
struct hostent {char* h_name; char** h_aliases; char** h_addr_list; int h_length; } ;
typedef TYPE_1__* res_state ;
struct TYPE_11__ {int qdcount; int ancount; } ;
struct TYPE_10__ {int * buf; TYPE_3__ hdr; } ;
typedef TYPE_2__ querybuf ;
typedef int align ;
struct TYPE_9__ {int options; scalar_t__ nsort; } ;
typedef TYPE_3__ HEADER ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int const*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_12 ;


 int VAR_13 ;

 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (struct hostent*,char**,char*) ;
 int FUNC_6 (char**,int,TYPE_1__*) ;
 int FUNC_7 (char*,int,TYPE_1__*) ;
 int FUNC_8 (int *,int const*,int const*,char*,int) ;
 int FUNC_9 (char*,int const*,int) ;
 int VAR_18 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char const*,char*) ;
 int FUNC_16 (char*,char const*) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (char const*) ;
 int FUNC_19 (char const*) ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (int,char*,char const*,char*,...) ;

__attribute__((used)) static int
FUNC_22(const querybuf *VAR_19, int VAR_20, const char *VAR_21, int VAR_22,
    struct hostent *VAR_23, struct hostent_data *VAR_24, res_state VAR_25)
{
 const HEADER *VAR_26;
 const u_char *VAR_27;
 int VAR_28;
 const u_char *VAR_29, *VAR_30;
 char *VAR_31, *VAR_32, **VAR_33, **VAR_34;
 int VAR_35, VAR_36, VAR_37, VAR_38;
 int VAR_39, VAR_40;
 int VAR_41 = 0;
 char VAR_42[VAR_7];
 const char *VAR_43;
 int (*VAR_44)(const char *);

 VAR_43 = VAR_21;
 VAR_23->h_name = ((void*)0);
 VAR_29 = VAR_19->buf + VAR_20;
 switch (VAR_22) {
 case 130:
 case 129:
  VAR_44 = FUNC_14;
  break;
 case 128:
  VAR_44 = FUNC_13;
  break;
 default:
  FUNC_2(VAR_25, VAR_10);
  return (-1);
 }



 VAR_26 = &VAR_19->hdr;
 VAR_37 = FUNC_10(VAR_26->ancount);
 VAR_38 = FUNC_10(VAR_26->qdcount);
 VAR_31 = VAR_24->hostbuf;
 VAR_32 = VAR_24->hostbuf + sizeof VAR_24->hostbuf;
 VAR_27 = VAR_19->buf;
 FUNC_0(VAR_2);
 if (VAR_38 != 1) {
  FUNC_2(VAR_25, VAR_10);
  return (-1);
 }
 VAR_28 = FUNC_8(VAR_19->buf, VAR_29, VAR_27, VAR_31, VAR_32 - VAR_31);
 if ((VAR_28 < 0) || !(*VAR_44)(VAR_31)) {
  FUNC_2(VAR_25, VAR_10);
  return (-1);
 }
 FUNC_0(VAR_28 + VAR_11);
 if (VAR_22 == 130 || VAR_22 == 129) {




  VAR_28 = FUNC_17(VAR_31) + 1;
  if (VAR_28 >= VAR_8) {
   FUNC_2(VAR_25, VAR_10);
   return (-1);
  }
  VAR_23->h_name = VAR_31;
  VAR_31 += VAR_28;

  VAR_21 = VAR_23->h_name;
 }
 VAR_33 = VAR_24->host_aliases;
 *VAR_33 = ((void*)0);
 VAR_23->h_aliases = VAR_24->host_aliases;
 VAR_34 = VAR_24->h_addr_ptrs;
 *VAR_34 = ((void*)0);
 VAR_23->h_addr_list = VAR_24->h_addr_ptrs;
 VAR_39 = 0;
 VAR_40 = 0;
 VAR_17 = -1;
 while (VAR_37-- > 0 && VAR_27 < VAR_29 && !VAR_40) {
  VAR_28 = FUNC_8(VAR_19->buf, VAR_29, VAR_27, VAR_31, VAR_32 - VAR_31);
  if ((VAR_28 < 0) || !(*VAR_44)(VAR_31)) {
   VAR_40++;
   continue;
  }
  VAR_27 += VAR_28;
  FUNC_1(VAR_27, 3 * VAR_3 + VAR_4);
  VAR_35 = FUNC_4(VAR_27);
   VAR_27 += VAR_3;
  VAR_36 = FUNC_4(VAR_27);
   VAR_27 += VAR_3;
  if (VAR_22 == 130 && VAR_35 == 130)
   VAR_17 = FUNC_3(VAR_27);
  VAR_27 += VAR_4;
  VAR_28 = FUNC_4(VAR_27);
  VAR_27 += VAR_3;
  FUNC_1(VAR_27, VAR_28);
  VAR_30 = VAR_27 + VAR_28;
  if (VAR_36 != VAR_1) {

   VAR_27 += VAR_28;
   continue;
  }
  if ((VAR_22 == 130 || VAR_22 == 129) && VAR_35 == VAR_13) {
   if (VAR_33 >= &VAR_24->host_aliases[VAR_16-1])
    continue;
   VAR_28 = FUNC_8(VAR_19->buf, VAR_29, VAR_27, VAR_42, sizeof VAR_42);
   if ((VAR_28 < 0) || !(*VAR_44)(VAR_42)) {
    VAR_40++;
    continue;
   }
   VAR_27 += VAR_28;
   if (VAR_27 != VAR_30) {
    FUNC_2(VAR_25, VAR_10);
    return (-1);
   }

   *VAR_33++ = VAR_31;
   VAR_28 = FUNC_17(VAR_31) + 1;
   if (VAR_28 >= VAR_8) {
    VAR_40++;
    continue;
   }
   VAR_31 += VAR_28;

   VAR_28 = FUNC_17(VAR_42) + 1;
   if (VAR_28 > VAR_32 - VAR_31 || VAR_28 >= VAR_8) {
    VAR_40++;
    continue;
   }
   FUNC_16(VAR_31, VAR_42);
   VAR_23->h_name = VAR_31;
   VAR_31 += VAR_28;
   continue;
  }
  if (VAR_22 == 128 && VAR_35 == VAR_13) {
   VAR_28 = FUNC_8(VAR_19->buf, VAR_29, VAR_27, VAR_42, sizeof VAR_42);
   if (VAR_28 < 0 || !FUNC_13(VAR_42)) {
    VAR_40++;
    continue;
   }
   VAR_27 += VAR_28;
   if (VAR_27 != VAR_30) {
    FUNC_2(VAR_25, VAR_10);
    return (-1);
   }

   VAR_28 = FUNC_17(VAR_42) + 1;
   if (VAR_28 > VAR_32 - VAR_31 || VAR_28 >= VAR_8) {
    VAR_40++;
    continue;
   }
   FUNC_16(VAR_31, VAR_42);
   VAR_43 = VAR_31;
   VAR_31 += VAR_28;
   continue;
  }
  if (VAR_35 != VAR_22) {
   if (VAR_35 != VAR_14 && VAR_35 != VAR_18)
    FUNC_21(VAR_6|VAR_5,
 "gethostby*.gethostanswer: asked for \"%s %s %s\", got type \"%s\"",
           VAR_21, FUNC_11(VAR_1), FUNC_12(VAR_22),
           FUNC_12(VAR_35));
   VAR_27 += VAR_28;
   continue;
  }
  switch (VAR_35) {
  case 128:
   if (FUNC_15(VAR_43, VAR_31) != 0) {
    FUNC_21(VAR_6|VAR_5,
           VAR_0, VAR_21, VAR_31);
    VAR_27 += VAR_28;
    continue;
   }
   VAR_28 = FUNC_8(VAR_19->buf, VAR_29, VAR_27, VAR_31, VAR_32 - VAR_31);
   if ((VAR_28 < 0) || !FUNC_14(VAR_31)) {
    VAR_40++;
    break;
   }
   VAR_23->h_name = VAR_31;
   if (VAR_25->options & VAR_12) {
    VAR_28 = FUNC_17(VAR_31) + 1;
    if (VAR_28 >= VAR_8) {
     VAR_40++;
     break;
    }
    VAR_31 += VAR_28;
    FUNC_5(VAR_23, &VAR_31, VAR_32);
   }
   FUNC_2(VAR_25, VAR_9);
   return (0);

  case 130:
  case 129:
   if (FUNC_15(VAR_23->h_name, VAR_31) != 0) {
    FUNC_21(VAR_6|VAR_5,
           VAR_0, VAR_23->h_name, VAR_31);
    VAR_27 += VAR_28;
    continue;
   }
   if (VAR_28 != VAR_23->h_length) {
    VAR_27 += VAR_28;
    continue;
   }
   if (!VAR_39) {
    int VAR_45;

    VAR_23->h_name = VAR_31;
    VAR_45 = FUNC_17(VAR_31) + 1;
    VAR_31 += VAR_45;
   }

   VAR_31 += sizeof(align) - ((u_long)VAR_31 % sizeof(align));

   if (VAR_31 + VAR_28 >= VAR_32) {
    FUNC_7("size (%d) too big\n", VAR_28, VAR_25);
    VAR_40++;
    continue;
   }
   if (VAR_34 >= &VAR_24->h_addr_ptrs[VAR_15-1]) {
    if (!VAR_41++)
     FUNC_7("Too many addresses (%d)\n",
      VAR_15, VAR_25);
    VAR_27 += VAR_28;
    continue;
   }
   FUNC_9(*VAR_34++ = VAR_31, VAR_27, VAR_28);
   VAR_31 += VAR_28;
   VAR_27 += VAR_28;
   if (VAR_27 != VAR_30) {
    FUNC_2(VAR_25, VAR_10);
    return (-1);
   }
   break;
  default:
   FUNC_7("Impossible condition (type=%d)\n", VAR_35,
       VAR_25);
   FUNC_2(VAR_25, VAR_10);
   return (-1);

  }
  if (!VAR_40)
   VAR_39++;
 }
 if (VAR_39) {
  *VAR_33 = ((void*)0);
  *VAR_34 = ((void*)0);
  if (!VAR_23->h_name) {
   VAR_28 = FUNC_17(VAR_21) + 1;
   if (VAR_28 > VAR_32 - VAR_31 || VAR_28 >= VAR_8)
    goto no_recovery;
   FUNC_16(VAR_31, VAR_21);
   VAR_23->h_name = VAR_31;
   VAR_31 += VAR_28;
  }
  if (VAR_25->options & VAR_12)
   FUNC_5(VAR_23, &VAR_31, VAR_32);
  FUNC_2(VAR_25, VAR_9);
  return (0);
 }
 no_recovery:
 FUNC_2(VAR_25, VAR_10);
 return (-1);
}
