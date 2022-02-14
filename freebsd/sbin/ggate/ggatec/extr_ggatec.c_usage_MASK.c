
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{

 FUNC_1(VAR_1, "usage: %s create [-nv] [-o <ro|wo|rw>] [-p port] "
     "[-q queue_size] [-R rcvbuf] [-S sndbuf] [-s sectorsize] "
     "[-t timeout] [-u unit] <host> <path>\n", FUNC_2());
 FUNC_1(VAR_1, "       %s rescue [-nv] [-o <ro|wo|rw>] [-p port] "
     "[-R rcvbuf] [-S sndbuf] <-u unit> <host> <path>\n", FUNC_2());
 FUNC_1(VAR_1, "       %s destroy [-f] <-u unit>\n", FUNC_2());
 FUNC_1(VAR_1, "       %s list [-v] [-u unit]\n", FUNC_2());
 FUNC_0(VAR_0);
}
