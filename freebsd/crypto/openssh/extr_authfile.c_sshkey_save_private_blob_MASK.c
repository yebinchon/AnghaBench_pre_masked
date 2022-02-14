
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int,int ,scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (char const*,int,int) ;
 scalar_t__ FUNC_3 (struct sshbuf*) ;
 int FUNC_4 (struct sshbuf*) ;
 int FUNC_5 (char const*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(struct sshbuf *VAR_6, const char *VAR_7)
{
 int VAR_8, VAR_9;

 if ((VAR_8 = FUNC_2(VAR_7, VAR_2 | VAR_0 | VAR_1, 0600)) < 0)
  return VAR_3;
 if (FUNC_0(VAR_5, VAR_8, FUNC_4(VAR_6),
     FUNC_3(VAR_6)) != FUNC_3(VAR_6)) {
  VAR_9 = VAR_4;
  FUNC_1(VAR_8);
  FUNC_5(VAR_7);
  VAR_4 = VAR_9;
  return VAR_3;
 }
 FUNC_1(VAR_8);
 return 0;
}
