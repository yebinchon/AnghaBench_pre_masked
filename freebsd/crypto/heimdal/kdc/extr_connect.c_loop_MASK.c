
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct descr {int s; scalar_t__ type; scalar_t__ timeout; scalar_t__ len; int addr_string; } ;
typedef int krb5_kdc_configuration ;
typedef int krb5_context ;
typedef int fd_set ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct descr*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct descr*) ;
 int FUNC_5 (int ,int *,struct descr*,size_t,int) ;
 int FUNC_6 (int ,int *,struct descr*) ;
 int FUNC_7 (struct descr*) ;
 unsigned int FUNC_8 (int ,int *,struct descr**) ;
 int FUNC_9 (int ,int *,int,char*,...) ;
 int FUNC_10 (int ,int,char*) ;
 int FUNC_11 (int ,int ,char*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct descr*,int ,int) ;
 struct descr* FUNC_14 (struct descr*,unsigned int) ;
 int FUNC_15 (struct descr*,unsigned int) ;
 int FUNC_16 (int) ;
 int VAR_10 ;
 int FUNC_17 (int,int *,int ,int ,struct timeval*) ;
 scalar_t__ FUNC_18 (int *) ;

void
FUNC_19(krb5_context VAR_11,
     krb5_kdc_configuration *VAR_12)
{
    struct descr *VAR_13;
    unsigned int VAR_14;

    VAR_14 = FUNC_8(VAR_11, VAR_12, &VAR_13);
    if(VAR_14 <= 0)
 FUNC_10(VAR_11, 1, "No sockets!");
    FUNC_9(VAR_11, VAR_12, 0, "KDC started");
    while(VAR_9 == 0){
 struct timeval VAR_15;
 fd_set VAR_16;
 int VAR_17 = -1;
 int VAR_18 = 0;
 size_t VAR_19;

 FUNC_2(&VAR_16);
 for(VAR_19 = 0; VAR_19 < VAR_14; VAR_19++) {
     if(!FUNC_16(VAR_13[VAR_19].s)){
  if(VAR_13[VAR_19].type == VAR_6 &&
     VAR_13[VAR_19].timeout && VAR_13[VAR_19].timeout < FUNC_18(((void*)0))) {
      FUNC_9(VAR_11, VAR_12, 1,
       "TCP-connection from %s expired after %lu bytes",
       VAR_13[VAR_19].addr_string, (unsigned long)VAR_13[VAR_19].len);
      FUNC_3(&VAR_13[VAR_19]);
      continue;
  }

  if(VAR_18 < VAR_13[VAR_19].s)
      VAR_18 = VAR_13[VAR_19].s;





  FUNC_1(VAR_13[VAR_19].s, &VAR_16);
     } else if(VAR_17 < 0 || VAR_19 < (size_t)VAR_17)
  VAR_17 = VAR_19;
 }
 if(VAR_17 == -1){
     struct descr *VAR_20;
     VAR_20 = FUNC_14(VAR_13, (VAR_14 + 4) * sizeof(*VAR_13));
     if(VAR_20 == ((void*)0))
  FUNC_12(VAR_11, "No memory");
     else {
  VAR_13 = VAR_20;
  FUNC_15 (VAR_13, VAR_14);
  FUNC_13(VAR_13 + VAR_14, 0, 4 * sizeof(*VAR_13));
  for(VAR_19 = VAR_14; VAR_19 < VAR_14 + 4; VAR_19++)
      FUNC_7 (&VAR_13[VAR_19]);
  VAR_17 = VAR_14;
  VAR_14 += 4;
     }
 }

 VAR_15.tv_sec = VAR_7;
 VAR_15.tv_usec = 0;
 switch(FUNC_17(VAR_18 + 1, &VAR_16, 0, 0, &VAR_15)){
 case 0:
     break;
 case -1:
     if (VAR_8 != VAR_0)
  FUNC_11(VAR_11, VAR_10, "select");
     break;
 default:
     for(VAR_19 = 0; VAR_19 < VAR_14; VAR_19++)
  if(!FUNC_16(VAR_13[VAR_19].s) && FUNC_0(VAR_13[VAR_19].s, &VAR_16)) {
      if(VAR_13[VAR_19].type == VAR_5)
   FUNC_6(VAR_11, VAR_12, &VAR_13[VAR_19]);
      else if(VAR_13[VAR_19].type == VAR_6)
   FUNC_5(VAR_11, VAR_12, VAR_13, VAR_19, VAR_17);
  }
 }
    }
    if (0);




    else if(VAR_9 == VAR_2 || VAR_9 == VAR_3)
 FUNC_9(VAR_11, VAR_12, 0, "Terminated");
    else
 FUNC_9(VAR_11, VAR_12, 0, "Unexpected exit reason: %d", VAR_9);
    FUNC_4 (VAR_13);
}
