
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
"usage: brssl twrch [ options ]\n");
 FUNC_0(VAR_0,
"options:\n");
 FUNC_0(VAR_0,
"   -trace          dump all packets on stderr\n");
 FUNC_0(VAR_0,
"   -v              verbose error messages on stderr\n");
 FUNC_0(VAR_0,
"   -server         act as an SSL server\n");
 FUNC_0(VAR_0,
"   -client         act as an SSL client\n");
 FUNC_0(VAR_0,
"   -sni name       use specified name for SNI\n");
 FUNC_0(VAR_0,
"   -mono           use monodirectional buffering\n");
 FUNC_0(VAR_0,
"   -buf length     set the I/O buffer length (in bytes)\n");
 FUNC_0(VAR_0,
"   -cache length   set the session cache storage length (in bytes)\n");
 FUNC_0(VAR_0,
"   -cert fname     read certificate chain from file 'fname'\n");
 FUNC_0(VAR_0,
"   -key fname      read private key from file 'fname'\n");
 FUNC_0(VAR_0,
"   -CA file        add trust anchors from 'file' (for peer auth)\n");
 FUNC_0(VAR_0,
"   -anon_ok        request but do not require a client certificate\n");
 FUNC_0(VAR_0,
"   -nostaticecdh   prohibit full-static ECDH (client only)\n");
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
"   -serverpref     enforce server's preferences for cipher suites\n");
 FUNC_0(VAR_0,
"   -noreneg        prohibit renegotiations\n");
 FUNC_0(VAR_0,
"   -alpn name      add protocol name to list of protocols (ALPN extension)\n");
 FUNC_0(VAR_0,
"   -strictalpn     fail on ALPN mismatch\n");
}
