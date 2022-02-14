
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(void)
{
 FUNC_0(VAR_1, "usage: %s [options] [file ...]\n", VAR_0);
 FUNC_0(VAR_1, "Options:\n");
 FUNC_0(VAR_1, "  -l          List fingerprints of all identities.\n");
 FUNC_0(VAR_1, "  -E hash     Specify hash algorithm used for fingerprints.\n");
 FUNC_0(VAR_1, "  -L          List public key parameters of all identities.\n");
 FUNC_0(VAR_1, "  -k          Load only keys and not certificates.\n");
 FUNC_0(VAR_1, "  -c          Require confirmation to sign using identities\n");
 FUNC_0(VAR_1, "  -m minleft  Maxsign is only changed if less than minleft are left (for XMSS)\n");
 FUNC_0(VAR_1, "  -M maxsign  Maximum number of signatures allowed (for XMSS)\n");
 FUNC_0(VAR_1, "  -t life     Set lifetime (in seconds) when adding identities.\n");
 FUNC_0(VAR_1, "  -d          Delete identity.\n");
 FUNC_0(VAR_1, "  -D          Delete all identities.\n");
 FUNC_0(VAR_1, "  -x          Lock agent.\n");
 FUNC_0(VAR_1, "  -X          Unlock agent.\n");
 FUNC_0(VAR_1, "  -s pkcs11   Add keys from PKCS#11 provider.\n");
 FUNC_0(VAR_1, "  -e pkcs11   Remove keys provided by PKCS#11 provider.\n");
 FUNC_0(VAR_1, "  -q          Be quiet after a successful operation.\n");
}
