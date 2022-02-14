
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_rsa_key {int * e; int * n; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; int length; int * payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*,size_t,struct asn1_hdr*) ;
 void* FUNC_1 () ;
 int FUNC_2 (struct crypto_rsa_key*) ;
 int * FUNC_3 (int const*,int const*,int *) ;
 struct crypto_rsa_key* FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int const*,int) ;
 int FUNC_6 (int ,char*,scalar_t__,scalar_t__) ;

struct crypto_rsa_key *
FUNC_7(const u8 *VAR_3, size_t VAR_4)
{
 struct crypto_rsa_key *VAR_5;
 struct asn1_hdr VAR_6;
 const u8 *VAR_7, *VAR_8;

 VAR_5 = FUNC_4(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->n = FUNC_1();
 VAR_5->e = FUNC_1();
 if (VAR_5->n == ((void*)0) || VAR_5->e == ((void*)0)) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }
 if (FUNC_0(VAR_3, VAR_4, &VAR_6) < 0 ||
     VAR_6.class != VAR_0 ||
     VAR_6.tag != VAR_1) {
  FUNC_6(VAR_2, "RSA: Expected SEQUENCE "
      "(public key) - found class %d tag 0x%x",
      VAR_6.class, VAR_6.tag);
  goto error;
 }
 VAR_7 = VAR_6.payload;
 VAR_8 = VAR_7 + VAR_6.length;

 VAR_7 = FUNC_3(VAR_7, VAR_8, VAR_5->n);
 VAR_7 = FUNC_3(VAR_7, VAR_8, VAR_5->e);

 if (VAR_7 == ((void*)0))
  goto error;

 if (VAR_7 != VAR_8) {
  FUNC_5(VAR_2,
       "RSA: Extra data in public key SEQUENCE",
       VAR_7, VAR_8 - VAR_7);
  goto error;
 }

 return VAR_5;

error:
 FUNC_2(VAR_5);
 return ((void*)0);
}
