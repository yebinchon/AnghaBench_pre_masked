
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
typedef TYPE_1__* res_state ;
typedef int buf ;
struct TYPE_10__ {int rcode; int arcount; int nscount; int ancount; } ;
struct TYPE_9__ {int _flags; int options; } ;
typedef TYPE_2__ HEADER ;



 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;

 int VAR_11 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_1__*,int ,char const*,int,int,int *,int ,int *,int *,int) ;
 int FUNC_5 (TYPE_1__*,int,int *,int,int) ;
 int FUNC_6 (TYPE_1__*,int,int *,int,int *,int ,int ,int *) ;
 int FUNC_7 (TYPE_1__*,int *,int,int *,int) ;

int
FUNC_8(res_state VAR_12,
    const char *VAR_13,
    int VAR_14, int VAR_15,
    u_char *VAR_16,
    int VAR_17)
{
 u_char VAR_18[VAR_1];
 HEADER *VAR_19 = (HEADER *) VAR_16;
 u_int VAR_20;
 u_char *VAR_21;
 int VAR_22;

 VAR_20 = VAR_12->_flags;

again:
 VAR_19->rcode = 132;





 VAR_22 = FUNC_4(VAR_12, VAR_5, VAR_13, VAR_14, VAR_15, ((void*)0), 0, ((void*)0),
    VAR_18, sizeof(VAR_18));
 if (VAR_22 <= 0) {




  FUNC_0(VAR_12, VAR_3);
  return (VAR_22);
 }

 VAR_22 = FUNC_7(VAR_12, VAR_18, VAR_22, VAR_16, VAR_17);
 if (VAR_22 < 0) {
  FUNC_0(VAR_12, VAR_11);
  return (VAR_22);
 }

 if (VAR_19->rcode != 132 || FUNC_1(VAR_19->ancount) == 0) {
  switch (VAR_19->rcode) {
  case 130:
   FUNC_0(VAR_12, VAR_0);
   break;
  case 128:
   FUNC_0(VAR_12, VAR_11);
   break;
  case 132:
   FUNC_0(VAR_12, VAR_2);
   break;
  case 133:
  case 131:
  case 129:
  default:
   FUNC_0(VAR_12, VAR_3);
   break;
  }
  return (-1);
 }
 return (VAR_22);
}
