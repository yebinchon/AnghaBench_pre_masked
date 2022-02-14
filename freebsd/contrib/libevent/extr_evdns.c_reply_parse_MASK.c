
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int tmp_name ;
struct request {int request_type; int request_len; int * put_cname_in_ptr; int * request; struct evdns_base* base; } ;
struct TYPE_7__ {int addrcount; int * addresses; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {int addrcount; int * addresses; } ;
struct TYPE_8__ {TYPE_3__ aaaa; TYPE_2__ ptr; TYPE_1__ a; } ;
struct reply {int type; int have_answer; TYPE_4__ data; } ;
struct evdns_base {int global_randomize_case; } ;
typedef int reply ;
typedef int cname ;
typedef int cmp_name ;


 int FUNC_0 (struct evdns_base*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct reply*,int ,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int *,int,int*,char*,int) ;
 int FUNC_10 (struct request*,int,int,struct reply*) ;
 struct request* FUNC_11 (struct evdns_base*,int) ;
 scalar_t__ FUNC_12 (char*,char*) ;

__attribute__((used)) static int
FUNC_13(struct evdns_base *VAR_11, u8 *VAR_12, int VAR_13) {
 int VAR_14 = 0, VAR_15 = 0;
 u16 VAR_16;
 u32 VAR_17;
 char VAR_18[256], VAR_19[256];
 int VAR_20 = 0;

 u16 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 u16 VAR_27 = 0;
 u32 VAR_28, VAR_29 = 0xffffffff;
 struct reply VAR_30;
 struct request *VAR_31 = ((void*)0);
 unsigned int VAR_32;

 FUNC_0(VAR_11);

 FUNC_2(VAR_21);
 FUNC_2(VAR_27);
 FUNC_2(VAR_22);
 FUNC_2(VAR_23);
 FUNC_2(VAR_24);
 FUNC_2(VAR_25);
 (void) VAR_24;
 (void) VAR_25;

 VAR_31 = FUNC_11(VAR_11, VAR_21);
 if (!VAR_31) return -1;
 FUNC_1(VAR_31->base == VAR_11);

 FUNC_7(&VAR_30, 0, sizeof(VAR_30));


 if (!(VAR_27 & 0x8000)) return -1;
 if ((VAR_27 & 0x020f) && (VAR_27 & 0x020f) != VAR_1) {

  goto err;
 }
 VAR_30.type = VAR_31->request_type;


 for (VAR_32 = 0; VAR_32 < VAR_22; ++VAR_32) {



  VAR_18[0] = '\0';
  VAR_19[0] = '\0';
  VAR_15 = VAR_14;
  if (FUNC_9(VAR_12, VAR_13, &VAR_14, VAR_18, sizeof(VAR_18)) < 0)
   goto err;
  if (FUNC_9(VAR_31->request, VAR_31->request_len, &VAR_15,
   VAR_19, sizeof(VAR_19))<0)
   goto err;
  if (!VAR_11->global_randomize_case) {
   if (FUNC_12(VAR_18, VAR_19) == 0)
    VAR_20 = 1;
  } else {
   if (FUNC_5(VAR_18, VAR_19) == 0)
    VAR_20 = 1;
  }

  VAR_14 += 4;
  if (VAR_14 > VAR_13)
   goto err;
 }

 if (!VAR_20)
  goto err;





 for (VAR_32 = 0; VAR_32 < VAR_23; ++VAR_32) {
  u16 VAR_33, VAR_34;

  do { VAR_18[0] = '\0'; if (FUNC_9(VAR_12, VAR_13, &VAR_14, VAR_18, sizeof(VAR_18))<0) goto err; } while (0);
  FUNC_2(VAR_33);
  FUNC_2(VAR_34);
  FUNC_3(VAR_28);
  FUNC_2(VAR_26);

  if (VAR_33 == VAR_6 && VAR_34 == VAR_0) {
   int VAR_35, VAR_36;
   if (VAR_31->request_type != VAR_6) {
    VAR_14 += VAR_26; continue;
   }
   if ((VAR_26 & 3) != 0)
       goto err;
   VAR_35 = VAR_26 >> 2;
   VAR_36 = FUNC_4(VAR_3 - VAR_30.data.a.addrcount, (unsigned)VAR_35);

   VAR_29 = FUNC_4(VAR_29, VAR_28);

   if (VAR_14 + 4*VAR_36 > VAR_13) goto err;
   FUNC_6(&VAR_30.data.a.addresses[VAR_30.data.a.addrcount],
       VAR_12 + VAR_14, 4*VAR_36);
   VAR_14 += 4*VAR_36;
   VAR_30.data.a.addrcount += VAR_36;
   VAR_30.have_answer = 1;
   if (VAR_30.data.a.addrcount == VAR_3) break;
  } else if (VAR_33 == VAR_9 && VAR_34 == VAR_0) {
   if (VAR_31->request_type != VAR_9) {
    VAR_14 += VAR_26; continue;
   }
   if (FUNC_9(VAR_12, VAR_13, &VAR_14, VAR_30.data.ptr.name,
         sizeof(VAR_30.data.ptr.name))<0)
    goto err;
   VAR_29 = FUNC_4(VAR_29, VAR_28);
   VAR_30.have_answer = 1;
   break;
  } else if (VAR_33 == VAR_8) {
   char VAR_37[VAR_2];
   if (!VAR_31->put_cname_in_ptr || *VAR_31->put_cname_in_ptr) {
    VAR_14 += VAR_26; continue;
   }
   if (FUNC_9(VAR_12, VAR_13, &VAR_14, VAR_37,
    sizeof(VAR_37))<0)
    goto err;
   *VAR_31->put_cname_in_ptr = FUNC_8(VAR_37);
  } else if (VAR_33 == VAR_7 && VAR_34 == VAR_0) {
   int VAR_38, VAR_39;
   if (VAR_31->request_type != VAR_7) {
    VAR_14 += VAR_26; continue;
   }
   if ((VAR_26 & 15) != 0)
    goto err;
   VAR_38 = VAR_26 >> 4;
   VAR_39 = FUNC_4(VAR_4 - VAR_30.data.aaaa.addrcount, (unsigned)VAR_38);
   VAR_29 = FUNC_4(VAR_29, VAR_28);


   if (VAR_14 + 16*VAR_39 > VAR_13) goto err;
   FUNC_6(&VAR_30.data.aaaa.addresses[VAR_30.data.aaaa.addrcount],
       VAR_12 + VAR_14, 16*VAR_39);
   VAR_30.data.aaaa.addrcount += VAR_39;
   VAR_14 += 16*VAR_39;
   VAR_30.have_answer = 1;
   if (VAR_30.data.aaaa.addrcount == VAR_4) break;
  } else {

   VAR_14 += VAR_26;
  }
 }

 if (!VAR_30.have_answer) {
  for (VAR_32 = 0; VAR_32 < VAR_24; ++VAR_32) {
   u16 VAR_40, VAR_41;
   do { VAR_18[0] = '\0'; if (FUNC_9(VAR_12, VAR_13, &VAR_14, VAR_18, sizeof(VAR_18))<0) goto err; } while (0);
   FUNC_2(VAR_40);
   FUNC_2(VAR_41);
   FUNC_3(VAR_28);
   FUNC_2(VAR_26);
   if (VAR_40 == VAR_10 && VAR_41 == VAR_0) {
    u32 VAR_42, VAR_43, VAR_44, VAR_45, VAR_46;
    do { VAR_18[0] = '\0'; if (FUNC_9(VAR_12, VAR_13, &VAR_14, VAR_18, sizeof(VAR_18))<0) goto err; } while (0);
    do { VAR_18[0] = '\0'; if (FUNC_9(VAR_12, VAR_13, &VAR_14, VAR_18, sizeof(VAR_18))<0) goto err; } while (0);
    FUNC_3(VAR_42);
    FUNC_3(VAR_43);
    FUNC_3(VAR_44);
    FUNC_3(VAR_45);
    FUNC_3(VAR_46);
    (void)VAR_45;
    (void)VAR_44;
    (void)VAR_43;
    (void)VAR_42;
    VAR_29 = FUNC_4(VAR_29, VAR_28);
    VAR_29 = FUNC_4(VAR_29, VAR_46);
   } else {

    VAR_14 += VAR_26;
   }
  }
 }

 if (VAR_29 == 0xffffffff)
  VAR_29 = 0;

 FUNC_10(VAR_31, VAR_27, VAR_29, &VAR_30);
 return 0;
 err:
 if (VAR_31)
  FUNC_10(VAR_31, VAR_27, 0, ((void*)0));
 return -1;
}
