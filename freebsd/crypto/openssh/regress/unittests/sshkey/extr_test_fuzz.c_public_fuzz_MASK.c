
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;
struct fuzz {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sshbuf*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,struct fuzz*) ;
 struct fuzz* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct fuzz*) ;
 int FUNC_5 (struct fuzz*) ;
 int FUNC_6 (struct fuzz*) ;
 int FUNC_7 (struct fuzz*) ;
 int FUNC_8 (struct fuzz*) ;
 int VAR_4 ;
 int FUNC_9 (struct sshbuf*) ;
 int FUNC_10 (struct sshbuf*) ;
 int FUNC_11 (struct sshbuf*) ;
 struct sshbuf* FUNC_12 () ;
 int FUNC_13 (struct sshbuf*) ;
 int FUNC_14 (struct sshkey*) ;
 scalar_t__ FUNC_15 (int ,int ,struct sshkey**) ;
 scalar_t__ FUNC_16 (struct sshkey*,struct sshbuf*) ;

__attribute__((used)) static void
FUNC_17(struct sshkey *VAR_5)
{
 struct sshkey *VAR_6;
 struct sshbuf *VAR_7;
 struct fuzz *VAR_8;

 FUNC_1(VAR_7 = FUNC_12(), ((void*)0));
 FUNC_0(FUNC_16(VAR_5, VAR_7), 0);

 VAR_8 = FUNC_3(VAR_0 |
     VAR_1 |
     VAR_3 | VAR_2,
     FUNC_11(VAR_7), FUNC_10(VAR_7));
 FUNC_0(FUNC_15(FUNC_13(VAR_7), FUNC_10(VAR_7),
     &VAR_6), 0);
 FUNC_14(VAR_6);
 FUNC_9(VAR_7);
 FUNC_2(VAR_4, VAR_8);
 for(; !FUNC_5(VAR_8); FUNC_7(VAR_8)) {
  if (FUNC_15(FUNC_8(VAR_8), FUNC_6(VAR_8), &VAR_6) == 0)
   FUNC_14(VAR_6);
 }
 FUNC_4(VAR_8);
}
