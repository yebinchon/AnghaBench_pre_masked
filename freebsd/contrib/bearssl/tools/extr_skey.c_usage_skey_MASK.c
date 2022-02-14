
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(void)
{
 FUNC_0(VAR_0,
"usage: brssl skey [ options ] file...\n");
 FUNC_0(VAR_0,
"options:\n");
 FUNC_0(VAR_0,
"   -q             suppress verbose messages\n");
 FUNC_0(VAR_0,
"   -text          print private key details (human-readable)\n");
 FUNC_0(VAR_0,
"   -C             print private key details (C code)\n");
 FUNC_0(VAR_0,
"   -rawder file   save private key in 'file' (raw format, DER)\n");
 FUNC_0(VAR_0,
"   -rawpem file   save private key in 'file' (raw format, PEM)\n");
 FUNC_0(VAR_0,
"   -pk8der file   save private key in 'file' (PKCS#8 format, DER)\n");
 FUNC_0(VAR_0,
"   -pk8pem file   save private key in 'file' (PKCS#8 format, PEM)\n");
 FUNC_0(VAR_0,
"   -gen spec      generate a new key using the provided key specification\n");
 FUNC_0(VAR_0,
"   -list          list known elliptic curve names\n");
 FUNC_0(VAR_0,
"Key specification begins with a key type, followed by optional parameters\n");
 FUNC_0(VAR_0,
"that depend on the key type, separated by colon characters:\n");
 FUNC_0(VAR_0,
"   rsa[:size[:pubexep]]   RSA key (defaults: size = 2048, pubexp = 3)\n");
 FUNC_0(VAR_0,
"   ec[:curvename]         EC key (default curve: secp256r1)\n");
}
