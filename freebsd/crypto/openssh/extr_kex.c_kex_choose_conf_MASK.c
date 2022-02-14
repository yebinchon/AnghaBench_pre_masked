
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct ssh {int dispatch_skip_packets; struct kex* kex; } ;
struct TYPE_4__ {char* name; int key_len; } ;
struct TYPE_5__ {int iv_len; int block_size; int cipher; int key_len; int name; } ;
struct TYPE_6__ {int name; } ;
struct newkeys {TYPE_1__ mac; TYPE_2__ enc; TYPE_3__ comp; } ;
struct kex {char* failed_choice; size_t we_need; size_t dh_need; struct newkeys** newkeys; scalar_t__ server; int ext_info_c; int peer; int my; } ;


 size_t FUNC_0 (size_t,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 struct newkeys* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,char*,char*) ;
 int FUNC_3 (TYPE_2__*,char*,char*) ;
 int FUNC_4 (struct kex*,char*,char*) ;
 int FUNC_5 (struct kex*,char*,char*) ;
 int FUNC_6 (struct ssh*,TYPE_1__*,char*,char*) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char*,int ,char*,int ) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,int*,char***) ;
 int FUNC_13 (char**) ;
 char* FUNC_14 (char*,char*,int *) ;
 int FUNC_15 (char**,char**) ;

__attribute__((used)) static int
FUNC_16(struct ssh *VAR_12)
{
 struct kex *VAR_13 = VAR_12->kex;
 struct newkeys *VAR_14;
 char **VAR_15 = ((void*)0), **VAR_16 = ((void*)0);
 char **VAR_17, **VAR_18;
 int VAR_19, VAR_20, VAR_21;
 u_int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 int VAR_27, VAR_28;

 FUNC_10("local %s KEXINIT proposal", VAR_13->server ? "server" : "client");
 if ((VAR_27 = FUNC_12(VAR_13->my, ((void*)0), &VAR_15)) != 0)
  goto out;
 FUNC_10("peer %s KEXINIT proposal", VAR_13->server ? "client" : "server");
 if ((VAR_27 = FUNC_12(VAR_13->peer, &VAR_28, &VAR_16)) != 0)
  goto out;

 if (VAR_13->server) {
  VAR_17=VAR_16;
  VAR_18=VAR_15;
 } else {
  VAR_17=VAR_15;
  VAR_18=VAR_16;
 }


 if (VAR_13->server) {
  char *VAR_29;

  VAR_29 = FUNC_14("ext-info-c", VAR_16[VAR_7], ((void*)0));
  VAR_13->ext_info_c = (VAR_29 != ((void*)0));
  FUNC_11(VAR_29);
 }


 if ((VAR_27 = FUNC_5(VAR_13, VAR_17[VAR_7],
     VAR_18[VAR_7])) != 0) {
  VAR_13->failed_choice = VAR_16[VAR_7];
  VAR_16[VAR_7] = ((void*)0);
  goto out;
 }
 if ((VAR_27 = FUNC_4(VAR_13, VAR_17[VAR_10],
     VAR_18[VAR_10])) != 0) {
  VAR_13->failed_choice = VAR_16[VAR_10];
  VAR_16[VAR_10] = ((void*)0);
  goto out;
 }
 for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++) {
  if ((VAR_14 = FUNC_1(1, sizeof(*VAR_14))) == ((void*)0)) {
   VAR_27 = VAR_11;
   goto out;
  }
  VAR_13->newkeys[VAR_22] = VAR_14;
  VAR_23 = (!VAR_13->server && VAR_22 == VAR_2) ||
      (VAR_13->server && VAR_22 == VAR_0);
  VAR_19 = VAR_23 ? VAR_5 : VAR_6;
  VAR_20 = VAR_23 ? VAR_8 : VAR_9;
  VAR_21 = VAR_23 ? VAR_3 : VAR_4;
  if ((VAR_27 = FUNC_3(&VAR_14->enc, VAR_17[VAR_19],
      VAR_18[VAR_19])) != 0) {
   VAR_13->failed_choice = VAR_16[VAR_19];
   VAR_16[VAR_19] = ((void*)0);
   goto out;
  }
  VAR_26 = FUNC_7(VAR_14->enc.cipher);

  if (VAR_26 == 0 &&
      (VAR_27 = FUNC_6(VAR_12, &VAR_14->mac, VAR_17[VAR_20],
      VAR_18[VAR_20])) != 0) {
   VAR_13->failed_choice = VAR_16[VAR_20];
   VAR_16[VAR_20] = ((void*)0);
   goto out;
  }
  if ((VAR_27 = FUNC_2(&VAR_14->comp, VAR_17[VAR_21],
      VAR_18[VAR_21])) != 0) {
   VAR_13->failed_choice = VAR_16[VAR_21];
   VAR_16[VAR_21] = ((void*)0);
   goto out;
  }
  FUNC_9("kex: %s cipher: %s MAC: %s compression: %s",
      VAR_23 ? "client->server" : "server->client",
      VAR_14->enc.name,
      VAR_26 == 0 ? VAR_14->mac.name : "<implicit>",
      VAR_14->comp.name);
 }
 VAR_24 = VAR_25 = 0;
 for (VAR_22 = 0; VAR_22 < VAR_1; VAR_22++) {
  VAR_14 = VAR_13->newkeys[VAR_22];
  VAR_24 = FUNC_0(VAR_24, VAR_14->enc.key_len);
  VAR_24 = FUNC_0(VAR_24, VAR_14->enc.block_size);
  VAR_24 = FUNC_0(VAR_24, VAR_14->enc.iv_len);
  VAR_24 = FUNC_0(VAR_24, VAR_14->mac.key_len);
  VAR_25 = FUNC_0(VAR_25, FUNC_8(VAR_14->enc.cipher));
  VAR_25 = FUNC_0(VAR_25, VAR_14->enc.block_size);
  VAR_25 = FUNC_0(VAR_25, VAR_14->enc.iv_len);
  VAR_25 = FUNC_0(VAR_25, VAR_14->mac.key_len);
 }

 VAR_13->we_need = VAR_24;
 VAR_13->dh_need = VAR_25;


 if (VAR_28 && !FUNC_15(VAR_15, VAR_16))
  VAR_12->dispatch_skip_packets = 1;
 VAR_27 = 0;
 out:
 FUNC_13(VAR_15);
 FUNC_13(VAR_16);
 return VAR_27;
}
