
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_netobj {int * data; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xdr_netobj*,unsigned char*,int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;

u32
FUNC_3(unsigned char **VAR_2, int *VAR_3, unsigned char **VAR_4)
{
 struct xdr_netobj VAR_5 = {.len =0, .data = ((void*)0)};
 unsigned char *VAR_6 = *VAR_2;
 int VAR_7;
 u32 VAR_8 = VAR_1;


 if ((VAR_6[0] != 0xa4) || (VAR_6[2] != 0x30)) {
  FUNC_1("RPC:       BAD SPKM ictoken preamble\n");
  goto out;
 }

 *VAR_3 = VAR_6[3];


 if ((VAR_6[4] != 0x02) || (VAR_6[5] != 0x02)) {
  FUNC_1("RPC:       BAD asn1 SPKM3 token type\n");
  goto out;
 }


 if((VAR_6[6] != 0x01) || (VAR_6[7] != 0x01)) {
  FUNC_1("RPC:       ERROR unsupported SPKM3 token \n");
  goto out;
 }


 if (VAR_6[8] != 0x03) {
  FUNC_1("RPC:       BAD SPKM3 asn1 context-id type\n");
  goto out;
 }

 VAR_7 = VAR_6[9];
 if (VAR_7 > 17) {
  FUNC_1("RPC:       BAD SPKM3 contextid len %d\n", VAR_7);
  goto out;
 }



 if(!FUNC_0(&VAR_5, &VAR_6[11], VAR_7 - 1, 16))
  goto out;







 if (*VAR_3 != 6 + VAR_7) {
  FUNC_1("RPC:       BAD SPKM_ MIC_TOK header len %d: we only "
    "support default int-alg (should be absent) "
    "and do not support snd-seq\n", *VAR_3);
  goto out;
 }

 *VAR_4 = (&VAR_6[10] + VAR_7);

 VAR_8 = VAR_0;
out:
 FUNC_2(VAR_5.data);
 return VAR_8;
}
