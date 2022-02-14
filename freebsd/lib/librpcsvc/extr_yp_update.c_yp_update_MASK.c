
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_8__ {int yp_buf_len; char* yp_buf_val; } ;
struct TYPE_7__ {int yp_buf_len; char* yp_buf_val; } ;
struct ypupdate_args {char* mapname; TYPE_2__ datum; TYPE_1__ key; } ;
struct ypdelete_args {char* mapname; TYPE_2__ datum; TYPE_1__ key; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int des_block ;
struct TYPE_9__ {int * cl_auth; } ;
typedef TYPE_3__ CLIENT ;
typedef int AUTH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int ,int *,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int ,struct ypupdate_args*,int ,unsigned int*,struct timeval) ;
 TYPE_3__* FUNC_3 (char*,int ,int ,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int ,int ,unsigned int) ;
 int FUNC_7 (char*,char*,char*) ;
 int FUNC_8 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (char*,char*,char**) ;

int
FUNC_10(char *VAR_19, char *VAR_20, unsigned int VAR_21, char *VAR_22, int VAR_23,
    char *VAR_24, int VAR_25)
{
 char *VAR_26;
 int VAR_27;
 unsigned int VAR_28;
 struct ypupdate_args VAR_29;
 struct ypdelete_args VAR_30;
 CLIENT *VAR_31;
 char VAR_32[VAR_0+1];
 des_block VAR_33;
 struct timeval VAR_34;


 if ((VAR_27 = FUNC_9(VAR_19, VAR_20, &VAR_26)))
  return(VAR_27);


 if (FUNC_6(VAR_26, VAR_13, VAR_15, VAR_21))
  return(VAR_7);


 if ((VAR_31 = FUNC_3(VAR_26, VAR_13, VAR_15, "tcp")) == ((void*)0))
  return(VAR_9);
 if (!FUNC_7(VAR_32, VAR_26, VAR_19)) {
  FUNC_4(VAR_31);
  return(VAR_6);
 }


 FUNC_8(&VAR_33);


 if ((VAR_31->cl_auth = (AUTH *)FUNC_1(VAR_32, VAR_4, ((void*)0),
   &VAR_33)) == ((void*)0)) {
  FUNC_4(VAR_31);
  return(VAR_8);
 }


 VAR_34.tv_usec = 0;
 VAR_34.tv_sec = VAR_3;
 switch (VAR_21) {
 case 131:
  VAR_29.mapname = VAR_20;
  VAR_29.key.yp_buf_len = VAR_23;
  VAR_29.key.yp_buf_val = VAR_22;
  VAR_29.datum.yp_buf_len = VAR_25;
  VAR_29.datum.yp_buf_val = VAR_24;

  if ((VAR_27 = FUNC_2(VAR_31, VAR_10,
   (xdrproc_t)VAR_18, &VAR_29,
   (xdrproc_t)VAR_16, &VAR_28, VAR_34)) != VAR_2) {
   if (VAR_27 == VAR_1)
    VAR_28 = VAR_5;
   else
    VAR_28 = VAR_9;
  }

  break;
 case 129:
  VAR_29.mapname = VAR_20;
  VAR_29.key.yp_buf_len = VAR_23;
  VAR_29.key.yp_buf_val = VAR_22;
  VAR_29.datum.yp_buf_len = VAR_25;
  VAR_29.datum.yp_buf_val = VAR_24;

  if ((VAR_27 = FUNC_2(VAR_31, VAR_12,
   (xdrproc_t)VAR_18, &VAR_29,
   (xdrproc_t)VAR_16, &VAR_28, VAR_34)) != VAR_2) {
   if (VAR_27 == VAR_1)
    VAR_28 = VAR_5;
   else
    VAR_28 = VAR_9;
  }

  break;
 case 130:
  VAR_30.mapname = VAR_20;
  VAR_30.key.yp_buf_len = VAR_23;
  VAR_30.key.yp_buf_val = VAR_22;

  if ((VAR_27 = FUNC_2(VAR_31, VAR_11,
   (xdrproc_t)VAR_17, &VAR_30,
   (xdrproc_t)VAR_16, &VAR_28, VAR_34)) != VAR_2) {
   if (VAR_27 == VAR_1)
    VAR_28 = VAR_5;
   else
    VAR_28 = VAR_9;
  }

  break;
 case 128:
  VAR_29.mapname = VAR_20;
  VAR_29.key.yp_buf_len = VAR_23;
  VAR_29.key.yp_buf_val = VAR_22;
  VAR_29.datum.yp_buf_len = VAR_25;
  VAR_29.datum.yp_buf_val = VAR_24;

  if ((VAR_27 = FUNC_2(VAR_31, VAR_14,
   (xdrproc_t)VAR_18, &VAR_29,
   (xdrproc_t)VAR_16, &VAR_28, VAR_34)) != VAR_2) {
   if (VAR_27 == VAR_1)
    VAR_28 = VAR_5;
   else
    VAR_28 = VAR_9;
  }

  break;
 default:
  VAR_28 = VAR_6;
  break;
 }


 FUNC_0(VAR_31->cl_auth);
 FUNC_4(VAR_31);
 FUNC_5(VAR_26);

 return(VAR_28);
}
