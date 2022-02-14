
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct sshkey {int dummy; } ;
struct fuzz {int dummy; } ;
typedef int c ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,struct fuzz*) ;
 int FUNC_4 (char*) ;
 struct fuzz* FUNC_5 (int,char*,size_t) ;
 int FUNC_6 (struct fuzz*) ;
 int FUNC_7 (struct fuzz*) ;
 size_t FUNC_8 (struct fuzz*) ;
 scalar_t__ FUNC_9 (struct fuzz*) ;
 int FUNC_10 (struct fuzz*) ;
 char* FUNC_11 (struct fuzz*) ;
 int VAR_5 ;
 int FUNC_12 (struct sshkey*,char**,size_t*,char*,int,char const*,int ) ;
 int FUNC_13 (struct sshkey*,char*,size_t,char*,int,int *,int ) ;

__attribute__((used)) static void
FUNC_14(struct sshkey *VAR_6, const char *VAR_7)
{
 struct fuzz *VAR_8;
 u_char *VAR_9, VAR_10[] = "some junk to be signed";
 size_t VAR_11;

 FUNC_0(FUNC_12(VAR_6, &VAR_9, &VAR_11, VAR_10, sizeof(VAR_10), VAR_7, 0), 0);
 FUNC_2(VAR_11, 0);
 VAR_8 = FUNC_5(VAR_0 |
     VAR_1 | VAR_2 |
     VAR_4 | VAR_3, VAR_9, VAR_11);
 FUNC_0(FUNC_13(VAR_6, VAR_9, VAR_11, VAR_10, sizeof(VAR_10), ((void*)0), 0), 0);
 FUNC_4(VAR_9);
 FUNC_3(VAR_5, VAR_8);
 for(; !FUNC_7(VAR_8); FUNC_10(VAR_8)) {

  if (FUNC_9(VAR_8))
   continue;
  FUNC_1(FUNC_13(VAR_6, FUNC_11(VAR_8), FUNC_8(VAR_8),
      VAR_10, sizeof(VAR_10), ((void*)0), 0), 0);
 }
 FUNC_6(VAR_8);
}
