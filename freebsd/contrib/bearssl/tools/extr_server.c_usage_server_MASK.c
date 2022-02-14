
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 FUNC_1(VAR_1,
"usage: brssl server [ options ]\n");
 FUNC_1(VAR_1,
"options:\n");
 FUNC_1(VAR_1,
"   -q              suppress verbose messages\n");
 FUNC_1(VAR_1,
"   -trace          activate extra debug messages (dump of all packets)\n");
 FUNC_1(VAR_1,
"   -b name         bind to a specific address or host name\n");
 FUNC_1(VAR_1,
"   -p port         bind to a specific port (default: 4433)\n");
 FUNC_1(VAR_1,
"   -mono           use monodirectional buffering\n");
 FUNC_1(VAR_1,
"   -buf length     set the I/O buffer length (in bytes)\n");
 FUNC_1(VAR_1,
"   -cache length   set the session cache storage length (in bytes)\n");
 FUNC_1(VAR_1,
"   -cert fname     read certificate chain from file 'fname'\n");
 FUNC_1(VAR_1,
"   -key fname      read private key from file 'fname'\n");
 FUNC_1(VAR_1,
"   -CA file        add trust anchors from 'file' (for client auth)\n");
 FUNC_1(VAR_1,
"   -anon_ok        request but do not require a client certificate\n");
 FUNC_1(VAR_1,
"   -list           list supported names (protocols, algorithms...)\n");
 FUNC_1(VAR_1,
"   -vmin name      set minimum supported version (default: TLS-1.0)\n");
 FUNC_1(VAR_1,
"   -vmax name      set maximum supported version (default: TLS-1.2)\n");
 FUNC_1(VAR_1,
"   -cs names       set list of supported cipher suites (comma-separated)\n");
 FUNC_1(VAR_1,
"   -hf names       add support for some hash functions (comma-separated)\n");
 FUNC_1(VAR_1,
"   -cbhash         test hashing in policy callback\n");
 FUNC_1(VAR_1,
"   -serverpref     enforce server's preferences for cipher suites\n");
 FUNC_1(VAR_1,
"   -noreneg        prohibit renegotiations\n");
 FUNC_1(VAR_1,
"   -alpn name      add protocol name to list of protocols (ALPN extension)\n");
 FUNC_1(VAR_1,
"   -strictalpn     fail on ALPN mismatch\n");
 FUNC_0(VAR_0);
}
