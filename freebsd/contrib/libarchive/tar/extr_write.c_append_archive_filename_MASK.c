
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int return_value; int bytes_per_block; int * passphrase; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bsdtar*,struct archive*,struct archive*) ;
 int FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*,int *) ;
 int FUNC_3 (struct archive*) ;
 struct archive* FUNC_4 () ;
 scalar_t__ FUNC_5 (struct archive*,char const*,int ) ;
 int FUNC_6 (struct archive*,char*) ;
 int FUNC_7 (struct archive*,struct bsdtar*,int *) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (int,int ,char*,int ) ;
 int FUNC_11 (int ,char*,char const*,...) ;
 int VAR_1 ;
 int FUNC_12 (struct bsdtar*,struct archive*) ;
 scalar_t__ FUNC_13 (char const*,char*) ;

__attribute__((used)) static int
FUNC_14(struct bsdtar *VAR_2, struct archive *VAR_3,
    const char *VAR_4)
{
 struct archive *VAR_5;
 const char *VAR_6 = VAR_4;
 int VAR_7;

 if (FUNC_13(VAR_6, "-") == 0)
  VAR_6 = ((void*)0);

 VAR_5 = FUNC_4();
 FUNC_9(VAR_5);
 FUNC_8(VAR_5);
 FUNC_12(VAR_2, VAR_5);
 FUNC_6(VAR_5, "mtree:checkfs");
 if (VAR_2->passphrase != ((void*)0))
  VAR_7 = FUNC_2(VAR_3, VAR_2->passphrase);
 else
  VAR_7 = FUNC_7(VAR_5, VAR_2,
   &VAR_1);
 if (VAR_7 != VAR_0)
  FUNC_10(1, 0, "%s", FUNC_1(VAR_3));
 if (FUNC_5(VAR_5, VAR_6,
     VAR_2->bytes_per_block)) {
  FUNC_11(0, "%s", FUNC_1(VAR_5));
  VAR_2->return_value = 1;
  return (0);
 }

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_5);

 if (VAR_7 != VAR_0) {
  FUNC_11(0, "Error reading archive %s: %s",
      VAR_4, FUNC_1(VAR_5));
  VAR_2->return_value = 1;
 }
 FUNC_3(VAR_5);

 return (VAR_7);
}
