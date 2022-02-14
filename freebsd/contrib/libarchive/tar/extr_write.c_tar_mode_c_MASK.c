
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int filename; int * passphrase; int cset; int bytes_in_last_block; int bytes_per_block; int * names_from_file; int ** argv; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_0 (struct archive*) ;
 struct archive* FUNC_1 () ;
 int FUNC_2 (struct archive*,int ) ;
 int FUNC_3 (struct archive*,int ) ;
 int FUNC_4 (struct archive*,int ) ;
 int FUNC_5 (struct archive*,char*) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*,int *) ;
 int FUNC_8 (struct archive*,struct bsdtar*,int *) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,struct archive*,void const**) ;
 int FUNC_12 (int ,char*,char*,char const*) ;
 int FUNC_13 (int,int ,char*,...) ;
 int VAR_2 ;
 int FUNC_14 (struct bsdtar*,struct archive*) ;
 int VAR_3 ;
 int FUNC_15 () ;
 int FUNC_16 (struct archive*,struct bsdtar*) ;

void
FUNC_17(struct bsdtar *VAR_4)
{
 struct archive *VAR_5;
 const void *VAR_6;
 int VAR_7;

 if (*VAR_4->argv == ((void*)0) && VAR_4->names_from_file == ((void*)0))
  FUNC_13(1, 0, "no files or directories specified");

 VAR_5 = FUNC_1();


 if (FUNC_9(VAR_4->cset) == ((void*)0)) {
  VAR_7 = FUNC_6(VAR_5);
  FUNC_10(VAR_4->cset, "pax restricted");
 } else {
  VAR_7 = FUNC_5(VAR_5,
   FUNC_9(VAR_4->cset));
 }
 if (VAR_7 != VAR_0) {
  FUNC_12(VAR_3, "Can't use format %s: %s\n",
      FUNC_9(VAR_4->cset),
      FUNC_0(VAR_5));
  FUNC_15();
 }

 FUNC_4(VAR_5, VAR_4->bytes_per_block);
 FUNC_3(VAR_5, VAR_4->bytes_in_last_block);

 VAR_7 = FUNC_11(VAR_4->cset, VAR_5, &VAR_6);
 if (VAR_7 < VAR_1) {
  FUNC_13(1, 0, "Unsupported compression option --%s",
      (const char *)VAR_6);
 }

 FUNC_14(VAR_4, VAR_5);
 if (VAR_4->passphrase != ((void*)0))
  VAR_7 = FUNC_7(VAR_5, VAR_4->passphrase);
 else
  VAR_7 = FUNC_8(VAR_5, VAR_4,
   &VAR_2);
 if (VAR_7 != VAR_0)
  FUNC_13(1, 0, "%s", FUNC_0(VAR_5));
 if (VAR_0 != FUNC_2(VAR_5, VAR_4->filename))
  FUNC_13(1, 0, "%s", FUNC_0(VAR_5));
 FUNC_16(VAR_5, VAR_4);
}
