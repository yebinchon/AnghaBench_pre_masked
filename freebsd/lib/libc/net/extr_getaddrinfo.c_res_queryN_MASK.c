
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct res_target {int qclass; int qtype; int anslen; int n; int * answer; struct res_target* next; } ;
typedef TYPE_1__* res_state ;
struct TYPE_9__ {int rcode; int ancount; } ;
struct TYPE_8__ {int _flags; int options; } ;
typedef TYPE_2__ HEADER ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

 int VAR_10 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__*,int ,char const*,int,int,int *,int ,int *,int *,int ) ;
 int FUNC_6 (TYPE_1__*,int,int *,int ,int) ;
 int FUNC_7 (TYPE_1__*,int *,int,int *,int) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_11, struct res_target *VAR_12, res_state VAR_13)
{
 u_char *VAR_14;
 HEADER *VAR_15;
 int VAR_16;
 u_int VAR_17;
 struct res_target *VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_19 = 132;
 VAR_20 = 0;

 VAR_14 = FUNC_2(VAR_1);
 if (!VAR_14) {
  FUNC_0(VAR_13, VAR_2);
  return -1;
 }

 for (VAR_18 = VAR_12; VAR_18; VAR_18 = VAR_18->next) {
  int VAR_21, VAR_22;
  u_char *VAR_23;
  int VAR_24;

  VAR_15 = (HEADER *)(void *)VAR_18->answer;


  VAR_21 = VAR_18->qclass;
  VAR_22 = VAR_18->qtype;
  VAR_23 = VAR_18->answer;
  VAR_24 = VAR_18->anslen;

  VAR_17 = VAR_13->_flags;

again:
  VAR_15->rcode = 132;






  VAR_16 = FUNC_5(VAR_13, VAR_5, VAR_11, VAR_21, VAR_22, ((void*)0), 0, ((void*)0),
      VAR_14, VAR_1);
  if (VAR_16 > 0 && (VAR_13->_flags & VAR_7) == 0 &&
      (VAR_13->options & (VAR_9|VAR_8)) != 0U)
   VAR_16 = FUNC_6(VAR_13, VAR_16, VAR_14, VAR_1, VAR_24);
  if (VAR_16 <= 0) {




   FUNC_1(VAR_14);
   FUNC_0(VAR_13, VAR_4);
   return (VAR_16);
  }
  VAR_16 = FUNC_7(VAR_13, VAR_14, VAR_16, VAR_23, VAR_24);
  if (VAR_16 < 0) {




   if ((VAR_13->options & (VAR_9|VAR_8))
       != 0U &&
       ((VAR_17 ^ VAR_13->_flags) & VAR_7) != 0) {
    VAR_13->_flags |= VAR_7;
    if (VAR_13->options & VAR_6)
     FUNC_4(";; res_nquery: retry without EDNS0\n");
    goto again;
   }
   VAR_19 = VAR_15->rcode;




   continue;
  }

  if (VAR_16 > VAR_24)
   VAR_15->rcode = 133;
  if (VAR_15->rcode != 132 || FUNC_3(VAR_15->ancount) == 0) {
   VAR_19 = VAR_15->rcode;





   continue;
  }

  VAR_20 += FUNC_3(VAR_15->ancount);

  VAR_18->n = VAR_16;
 }

 FUNC_1(VAR_14);

 if (VAR_20 == 0) {
  switch (VAR_19) {
  case 130:
   FUNC_0(VAR_13, VAR_0);
   break;
  case 128:
   FUNC_0(VAR_13, VAR_10);
   break;
  case 132:
   FUNC_0(VAR_13, VAR_3);
   break;
  case 133:
  case 131:
  case 129:
  default:
   FUNC_0(VAR_13, VAR_4);
   break;
  }
  return (-1);
 }
 return (VAR_20);
}
