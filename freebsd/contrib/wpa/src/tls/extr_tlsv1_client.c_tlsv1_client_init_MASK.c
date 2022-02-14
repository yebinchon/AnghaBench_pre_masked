
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int tls_version; } ;
struct tlsv1_client {size_t num_cipher_suites; TYPE_1__ rl; int * cipher_suites; int verify; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct tlsv1_client*) ;
 struct tlsv1_client* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;

struct tlsv1_client * FUNC_4(void)
{
 struct tlsv1_client *VAR_15;
 size_t VAR_16;
 u16 *VAR_17;

 VAR_15 = FUNC_1(sizeof(*VAR_15));
 if (VAR_15 == ((void*)0))
  return ((void*)0);

 VAR_15->state = VAR_0;

 if (FUNC_2(&VAR_15->verify) < 0) {
  FUNC_3(VAR_1, "TLSv1: Failed to initialize verify "
      "hash");
  FUNC_0(VAR_15);
  return ((void*)0);
 }

 VAR_16 = 0;
 VAR_17 = VAR_15->cipher_suites;
 VAR_17[VAR_16++] = VAR_6;
 VAR_17[VAR_16++] = VAR_11;
 VAR_17[VAR_16++] = VAR_5;
 VAR_17[VAR_16++] = VAR_10;
 VAR_17[VAR_16++] = VAR_4;
 VAR_17[VAR_16++] = VAR_9;
 VAR_17[VAR_16++] = VAR_3;
 VAR_17[VAR_16++] = VAR_8;
 VAR_17[VAR_16++] = VAR_2;
 VAR_17[VAR_16++] = VAR_7;
 VAR_17[VAR_16++] = VAR_13;
 VAR_17[VAR_16++] = VAR_12;
 VAR_15->num_cipher_suites = VAR_16;

 VAR_15->rl.tls_version = VAR_14;

 return VAR_15;
}
