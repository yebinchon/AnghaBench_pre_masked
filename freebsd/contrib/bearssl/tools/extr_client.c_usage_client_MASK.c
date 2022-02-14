
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
"usage: brssl client server[:port] [ options ]\n");
 FUNC_0(VAR_0,
"options:\n");
 FUNC_0(VAR_0,
"   -q              suppress verbose messages\n");
 FUNC_0(VAR_0,
"   -trace          activate extra debug messages (dump of all packets)\n");
 FUNC_0(VAR_0,
"   -sni name       use this specific name for SNI\n");
 FUNC_0(VAR_0,
"   -nosni          do not send any SNI\n");
 FUNC_0(VAR_0,
"   -mono           use monodirectional buffering\n");
 FUNC_0(VAR_0,
"   -buf length     set the I/O buffer length (in bytes)\n");
 FUNC_0(VAR_0,
"   -CA file        add certificates in 'file' to trust anchors\n");
 FUNC_0(VAR_0,
"   -cert file      set client certificate chain\n");
 FUNC_0(VAR_0,
"   -key file       set client private key (for certificate authentication)\n");
 FUNC_0(VAR_0,
"   -nostaticecdh   prohibit full-static ECDH (client certificate)\n");
 FUNC_0(VAR_0,
"   -list           list supported names (protocols, algorithms...)\n");
 FUNC_0(VAR_0,
"   -vmin name      set minimum supported version (default: TLS-1.0)\n");
 FUNC_0(VAR_0,
"   -vmax name      set maximum supported version (default: TLS-1.2)\n");
 FUNC_0(VAR_0,
"   -cs names       set list of supported cipher suites (comma-separated)\n");
 FUNC_0(VAR_0,
"   -hf names       add support for some hash functions (comma-separated)\n");
 FUNC_0(VAR_0,
"   -minhello len   set minimum ClientHello length (in bytes)\n");
 FUNC_0(VAR_0,
"   -fallback       send the TLS_FALLBACK_SCSV (i.e. claim a downgrade)\n");
 FUNC_0(VAR_0,
"   -noreneg        prohibit renegotiations\n");
 FUNC_0(VAR_0,
"   -alpn name      add protocol name to list of protocols (ALPN extension)\n");
 FUNC_0(VAR_0,
"   -strictalpn     fail on ALPN mismatch\n");
}
