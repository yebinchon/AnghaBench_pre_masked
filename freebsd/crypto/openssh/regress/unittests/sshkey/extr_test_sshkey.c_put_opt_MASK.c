
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sshbuf*,int *) ;
 int FUNC_2 (struct sshbuf*) ;
 struct sshbuf* FUNC_3 () ;
 int FUNC_4 (struct sshbuf*,char const*) ;
 int FUNC_5 (struct sshbuf*,struct sshbuf*) ;

__attribute__((used)) static void
FUNC_6(struct sshbuf *VAR_0, const char *VAR_1, const char *VAR_2)
{
 struct sshbuf *VAR_3;

 VAR_3 = FUNC_3();
 FUNC_1(VAR_3, ((void*)0));
 FUNC_0(FUNC_4(VAR_0, VAR_1), 0);
 if (VAR_2 != ((void*)0))
  FUNC_0(FUNC_4(VAR_3, VAR_2), 0);
 FUNC_0(FUNC_5(VAR_0, VAR_3), 0);
 FUNC_2(VAR_3);
}
