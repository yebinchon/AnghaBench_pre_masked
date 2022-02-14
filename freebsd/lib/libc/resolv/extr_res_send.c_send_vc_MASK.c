
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct iovec {int dummy; } ;
typedef TYPE_1__* res_state ;
typedef int on ;
struct TYPE_9__ {int tc; scalar_t__ id; } ;
struct TYPE_8__ {scalar_t__ _vcsock; int _flags; int options; int pfcode; } ;
typedef int ISC_SOCKLEN_T ;
typedef TYPE_2__ HEADER ;


 int FUNC_0 (TYPE_1__*,int ,char*,int,struct sockaddr*,int) ;
 int FUNC_1 (int const*,void*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int *,int) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*,int ,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_5 (scalar_t__,struct sockaddr*,int) ;
 scalar_t__ FUNC_6 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_7 (scalar_t__,char*,int) ;
 int FUNC_8 (scalar_t__,int ,int ,int*,int) ;
 scalar_t__ FUNC_9 (int ,int,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,struct iovec*,int) ;
 int VAR_13 ;
 struct iovec FUNC_11 (void*,int) ;
 struct sockaddr* FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (struct sockaddr*) ;
 scalar_t__ VAR_14 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int,int *) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (struct sockaddr*,struct sockaddr*) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_18(res_state VAR_17,
 const u_char *VAR_18, int VAR_19, u_char *VAR_20, int VAR_21,
 int *VAR_22, int VAR_23)
{
 const HEADER *VAR_24 = (const HEADER *) VAR_18;
 HEADER *VAR_25 = (HEADER *) VAR_20;
 struct sockaddr *VAR_26;
 int VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31;
 struct iovec VAR_32[2];
 u_short VAR_33;
 u_char *VAR_34;
 void *VAR_35;




 VAR_26 = FUNC_12(VAR_17, VAR_23);
 VAR_27 = FUNC_13(VAR_26);

 VAR_29 = 0;
 same_ns:
 VAR_28 = 0;


 if (VAR_17->_vcsock >= 0 && (VAR_17->_flags & VAR_7) != 0) {
  struct sockaddr_storage VAR_36;
  ISC_SOCKLEN_T VAR_37 = sizeof VAR_36;

  if (FUNC_6(VAR_17->_vcsock,
    (struct sockaddr *)&VAR_36, &VAR_37) < 0 ||
      !FUNC_17((struct sockaddr *)&VAR_36, VAR_26)) {
   FUNC_16(VAR_17);
   VAR_17->_flags &= ~VAR_7;
  }
 }

 if (VAR_17->_vcsock < 0 || (VAR_17->_flags & VAR_7) == 0) {
  if (VAR_17->_vcsock >= 0)
   FUNC_16(VAR_17);

  VAR_17->_vcsock = FUNC_9(VAR_26->sa_family, VAR_10 |
      VAR_9, 0);

  if (VAR_17->_vcsock > VAR_14) {
   FUNC_16(VAR_17);
   VAR_13 = VAR_2;
  }

  if (VAR_17->_vcsock < 0) {
   switch (VAR_13) {
   case 128:

   case 129:

   case 130:
    FUNC_4(VAR_17, VAR_15, "socket(vc)", VAR_13);
    return (0);
   default:
    *VAR_22 = VAR_13;
    FUNC_4(VAR_17, VAR_15, "socket(vc)", VAR_13);
    return (-1);
   }
  }
  VAR_13 = 0;
  if (FUNC_5(VAR_17->_vcsock, VAR_26, VAR_27) < 0) {
   *VAR_22 = VAR_13;
   FUNC_0(VAR_17, VAR_15, "connect/vc", VAR_13, VAR_26,
       VAR_27);
   FUNC_16(VAR_17);
   return (0);
  }
  VAR_17->_flags |= VAR_7;
 }




 FUNC_15((u_short)VAR_19, (u_char*)&VAR_33);
 VAR_32[0] = FUNC_11(&VAR_33, VAR_4);
 FUNC_1(VAR_18, VAR_35);
 VAR_32[1] = FUNC_11(VAR_35, VAR_19);
 if (FUNC_10(VAR_17->_vcsock, VAR_32, 2) != (VAR_4 + VAR_19)) {
  *VAR_22 = VAR_13;
  FUNC_4(VAR_17, VAR_15, "write failed", VAR_13);
  FUNC_16(VAR_17);
  return (0);
 }



 read_len:
 VAR_34 = VAR_20;
 VAR_33 = VAR_4;
 while ((VAR_31 = FUNC_7(VAR_17->_vcsock, (char *)VAR_34, (int)VAR_33)) > 0) {
  VAR_34 += VAR_31;
  if ((VAR_33 -= VAR_31) == 0)
   break;
 }
 if (VAR_31 <= 0) {
  *VAR_22 = VAR_13;
  FUNC_4(VAR_17, VAR_15, "read failed", VAR_13);
  FUNC_16(VAR_17);
  if (*VAR_22 == VAR_0 && !VAR_29) {
   VAR_29 = 1;
   FUNC_16(VAR_17);
   goto same_ns;
  }
  FUNC_16(VAR_17);
  return (0);
 }
 VAR_30 = FUNC_14(VAR_20);
 if (VAR_30 > VAR_21) {
  FUNC_2(VAR_17->options & VAR_6,
         (VAR_16, ";; response truncated\n")
         );
  VAR_28 = 1;
  VAR_33 = VAR_21;
 } else
  VAR_33 = VAR_30;
 if (VAR_33 < VAR_3) {



  FUNC_2(VAR_17->options & VAR_6,
         (VAR_16, ";; undersized: %d\n", VAR_33));
  *VAR_22 = VAR_1;
  FUNC_16(VAR_17);
  return (0);
 }
 VAR_34 = VAR_20;
 while (VAR_33 != 0 &&
     (VAR_31 = FUNC_7(VAR_17->_vcsock, (char *)VAR_34, (int)VAR_33)) > 0) {
  VAR_34 += VAR_31;
  VAR_33 -= VAR_31;
 }
 if (VAR_31 <= 0) {
  *VAR_22 = VAR_13;
  FUNC_4(VAR_17, VAR_15, "read(vc)", VAR_13);
  FUNC_16(VAR_17);
  return (0);
 }
 if (VAR_28) {



  VAR_25->tc = 1;
  VAR_33 = VAR_30 - VAR_21;
  while (VAR_33 != 0) {
   char VAR_38[VAR_5];

   VAR_31 = FUNC_7(VAR_17->_vcsock, VAR_38,
       (VAR_33 > sizeof VAR_38) ? sizeof VAR_38 : VAR_33);
   if (VAR_31 > 0)
    VAR_33 -= VAR_31;
   else
    break;
  }
 }







 if (VAR_24->id != VAR_25->id) {
  FUNC_3((VAR_17->options & VAR_6) ||
   (VAR_17->pfcode & VAR_8),
   (VAR_16, ";; old answer (unexpected):\n"),
   VAR_20, (VAR_30 > VAR_21) ? VAR_21: VAR_30);
  goto read_len;
 }





 return (VAR_30);
}
