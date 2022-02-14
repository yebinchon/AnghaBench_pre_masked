
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sshbuf*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sshbuf*,char*,char*) ;
 int FUNC_4 (struct sshbuf*) ;
 int FUNC_5 (struct sshbuf*) ;
 struct sshbuf* FUNC_6 () ;
 int FUNC_7 (struct sshbuf*) ;
 int FUNC_8 (struct sshbuf*,char const*) ;
 int FUNC_9 (struct sshbuf*,int *,size_t) ;
 int FUNC_10 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_11 (struct sshbuf*,int ) ;
 int FUNC_12 (struct sshbuf*,int) ;
 int FUNC_13 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_14 (struct sshbuf*) ;
 int FUNC_15 (struct sshkey const*,struct sshbuf*) ;
 int FUNC_16 (struct sshkey const*,struct sshbuf*) ;
 int FUNC_17 (struct sshkey const*,int **,size_t*,int ,int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_18(struct sshbuf *VAR_1, const struct sshkey *VAR_2, const char *VAR_3,
    const struct sshkey *VAR_4, const struct sshkey *VAR_5,
    const char *VAR_6)
{
 struct sshbuf *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 u_char *VAR_12;
 size_t VAR_13;

 VAR_7 = FUNC_6();
 FUNC_1(VAR_7, ((void*)0));
 FUNC_0(FUNC_15(VAR_5, VAR_7), 0);





 VAR_8 = FUNC_6();
 FUNC_1(VAR_8, ((void*)0));
 FUNC_0(FUNC_16(VAR_2, VAR_8), 0);
 FUNC_0(FUNC_14(VAR_8), 0);

 VAR_9 = FUNC_6();
 FUNC_1(VAR_9, ((void*)0));
 FUNC_0(FUNC_8(VAR_9, "gsamsa"), 0);
 FUNC_0(FUNC_8(VAR_9, "gregor"), 0);

 VAR_10 = FUNC_6();
 FUNC_1(VAR_10, ((void*)0));
 FUNC_3(VAR_10, "force-command", "/usr/local/bin/nethack");
 FUNC_3(VAR_10, "source-address", "192.168.0.0/24,127.0.0.1,::1");

 VAR_11 = FUNC_6();
 FUNC_1(VAR_11, ((void*)0));
 FUNC_3(VAR_10, "permit-X11-forwarding", ((void*)0));

 FUNC_0(FUNC_8(VAR_1, VAR_3), 0);
 FUNC_0(FUNC_8(VAR_1, "noncenoncenonce!"), 0);
 FUNC_0(FUNC_13(VAR_1, VAR_8), 0);
 FUNC_0(FUNC_12(VAR_1, 1234), 0);
 FUNC_0(FUNC_11(VAR_1, VAR_0), 0);
 FUNC_0(FUNC_8(VAR_1, "gregor"), 0);
 FUNC_0(FUNC_10(VAR_1, VAR_9), 0);
 FUNC_0(FUNC_12(VAR_1, 0), 0);
 FUNC_0(FUNC_12(VAR_1, 0xffffffffffffffffULL), 0);
 FUNC_0(FUNC_10(VAR_1, VAR_10), 0);
 FUNC_0(FUNC_10(VAR_1, VAR_11), 0);
 FUNC_0(FUNC_9(VAR_1, ((void*)0), 0), 0);
 FUNC_0(FUNC_10(VAR_1, VAR_7), 0);
 FUNC_0(FUNC_17(VAR_4, &VAR_12, &VAR_13,
     FUNC_7(VAR_1), FUNC_5(VAR_1), VAR_6, 0), 0);
 FUNC_0(FUNC_9(VAR_1, VAR_12, VAR_13), 0);

 FUNC_2(VAR_12);
 FUNC_4(VAR_7);
 FUNC_4(VAR_11);
 FUNC_4(VAR_10);
 FUNC_4(VAR_9);
 FUNC_4(VAR_8);
}
