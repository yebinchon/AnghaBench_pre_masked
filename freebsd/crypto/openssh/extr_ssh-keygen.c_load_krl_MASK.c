
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int dummy; } ;
struct ssh_krl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sshbuf*,struct ssh_krl**,int *,int ) ;
 int FUNC_5 (struct sshbuf*) ;
 struct sshbuf* FUNC_6 () ;
 int FUNC_7 (int,struct sshbuf*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_2, struct ssh_krl **VAR_3)
{
 struct sshbuf *VAR_4;
 int VAR_5, VAR_6;

 if ((VAR_4 = FUNC_6()) == ((void*)0))
  FUNC_1("sshbuf_new failed");
 if ((VAR_6 = FUNC_2(VAR_2, VAR_0)) == -1)
  FUNC_1("open %s: %s", VAR_2, FUNC_8(VAR_1));
 if ((VAR_5 = FUNC_7(VAR_6, VAR_4)) != 0)
  FUNC_1("Unable to load KRL: %s", FUNC_3(VAR_5));
 FUNC_0(VAR_6);

 if ((VAR_5 = FUNC_4(VAR_4, VAR_3, ((void*)0), 0)) != 0 ||
     *VAR_3 == ((void*)0))
  FUNC_1("Invalid KRL file: %s", FUNC_3(VAR_5));
 FUNC_5(VAR_4);
}
