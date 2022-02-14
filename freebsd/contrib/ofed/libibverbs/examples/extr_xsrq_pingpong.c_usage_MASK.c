
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0)
{
 FUNC_0("Usage:\n");
 FUNC_0("  %s            start a server and wait for connection\n", VAR_0);
 FUNC_0("  %s <host>     connect to server at <host>\n", VAR_0);
 FUNC_0("\n");
 FUNC_0("Options:\n");
 FUNC_0("  -p, --port=<port>      listen on/connect to port <port> (default 18515)\n");
 FUNC_0("  -d, --ib-dev=<dev>     use IB device <dev> (default first device found)\n");
 FUNC_0("  -i, --ib-port=<port>   use port <port> of IB device (default 1)\n");
 FUNC_0("  -s, --size=<size>      size of message to exchange (default 4096)\n");
 FUNC_0("  -m, --mtu=<size>       path MTU (default 2048)\n");
 FUNC_0("  -c, --clients=<n>      number of clients (on server only, default 1)\n");
 FUNC_0("  -n, --num_tests=<n>    number of tests per client (default 5)\n");
 FUNC_0("  -l, --sl=<sl>          service level value\n");
 FUNC_0("  -e, --events           sleep on CQ events (default poll)\n");
 FUNC_0("  -g, --gid-idx=<gid index> local port gid index\n");
}
