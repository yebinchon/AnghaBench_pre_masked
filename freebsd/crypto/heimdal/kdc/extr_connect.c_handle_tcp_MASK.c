
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descr {scalar_t__ timeout; int len; char* buf; int port; int addr_string; int s; } ;
typedef int krb5_kdc_configuration ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct descr*,int,int) ;
 int FUNC_1 (struct descr*) ;
 int FUNC_2 (struct descr*) ;
 int FUNC_3 (int ,int *,int*,int,int ,struct descr*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ,int *,struct descr*,int) ;
 int FUNC_5 (int ,int *,struct descr*) ;
 int FUNC_6 (int ,int *,struct descr*) ;
 int FUNC_7 (int ,int *,int ,char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_10 (int ,int ,char*,int ,int ,int ) ;
 int FUNC_11 (int ,char*,unsigned long,int ,int ,int ) ;
 int FUNC_12 (char*,unsigned char*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,unsigned char*,int,int ,int *,int *) ;
 scalar_t__ FUNC_15 (int) ;
 int VAR_3 ;
 int FUNC_16 (int ,int *,int ,struct descr*,int *) ;
 scalar_t__ FUNC_17 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_18(krb5_context VAR_4,
    krb5_kdc_configuration *VAR_5,
    struct descr *VAR_6, int VAR_7, int VAR_8)
{
    unsigned char VAR_9[1024];
    int VAR_10;
    int VAR_11 = 0;

    if (VAR_6[VAR_7].timeout == 0) {
 FUNC_0 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 return;
    }

    VAR_10 = FUNC_14(VAR_6[VAR_7].s, VAR_9, sizeof(VAR_9), 0, ((void*)0), ((void*)0));
    if(FUNC_15(VAR_10)){
 FUNC_10(VAR_4, VAR_3, "recvfrom failed from %s to %s/%d",
    VAR_6[VAR_7].addr_string, FUNC_2(VAR_6 + VAR_7),
    FUNC_13(VAR_6[VAR_7].port));
 return;
    } else if (VAR_10 == 0) {
 FUNC_11(VAR_4, "connection closed before end of data after %lu "
     "bytes from %s to %s/%d", (unsigned long)VAR_6[VAR_7].len,
     VAR_6[VAR_7].addr_string, FUNC_2(VAR_6 + VAR_7),
     FUNC_13(VAR_6[VAR_7].port));
 FUNC_1 (VAR_6 + VAR_7);
 return;
    }
    if (FUNC_4 (VAR_4, VAR_5, &VAR_6[VAR_7], VAR_10))
 return;
    FUNC_12(VAR_6[VAR_7].buf + VAR_6[VAR_7].len, VAR_9, VAR_10);
    VAR_6[VAR_7].len += VAR_10;
    if(VAR_6[VAR_7].len > 4 && VAR_6[VAR_7].buf[0] == 0) {
 VAR_11 = FUNC_6 (VAR_4, VAR_5, &VAR_6[VAR_7]);
    } else if(VAR_2 &&
       VAR_6[VAR_7].len >= 4 &&
       FUNC_17((char *)VAR_6[VAR_7].buf, "GET ", 4) == 0 &&
       FUNC_17((char *)VAR_6[VAR_7].buf + VAR_6[VAR_7].len - 4,
        "\r\n\r\n", 4) == 0) {


        VAR_6[VAR_7].buf[VAR_6[VAR_7].len - 4] = '\0';

 VAR_11 = FUNC_5 (VAR_4, VAR_5, &VAR_6[VAR_7]);
 if (VAR_11 < 0)
     FUNC_1 (VAR_6 + VAR_7);
    } else if (VAR_6[VAR_7].len > 4) {
 FUNC_7 (VAR_4, VAR_5,
   0, "TCP data of strange type from %s to %s/%d",
   VAR_6[VAR_7].addr_string, FUNC_2(VAR_6 + VAR_7),
   FUNC_13(VAR_6[VAR_7].port));
 if (VAR_6[VAR_7].buf[0] & 0x80) {
     krb5_data VAR_12;

     FUNC_7 (VAR_4, VAR_5, 0, "TCP extension not supported");

     VAR_11 = FUNC_9(VAR_4,
    VAR_0,
    ((void*)0),
    ((void*)0),
    ((void*)0),
    ((void*)0),
    ((void*)0),
    ((void*)0),
    &VAR_12);
     if (VAR_11 == 0) {
  FUNC_16(VAR_4, VAR_5, VAR_1, VAR_6 + VAR_7, &VAR_12);
  FUNC_8(&VAR_12);
     }
 }
 FUNC_1(VAR_6 + VAR_7);
 return;
    }
    if (VAR_11 < 0)
 return;
    else if (VAR_11 == 1) {
 FUNC_3(VAR_4, VAR_5,
     VAR_6[VAR_7].buf, VAR_6[VAR_7].len, VAR_1, &VAR_6[VAR_7]);
 FUNC_1(VAR_6 + VAR_7);
    }
}
