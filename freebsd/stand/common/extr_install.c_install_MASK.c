
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct preloaded_file {size_t f_loader; } ;
struct fs_ops {int dummy; } ;
typedef int buf ;
struct TYPE_5__ {int (* l_exec ) (struct preloaded_file*) ;} ;
struct TYPE_4__ {scalar_t__ s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 char* VAR_3 ;
 struct fs_ops VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 struct preloaded_file* FUNC_2 (int *,int *) ;
 TYPE_3__** VAR_7 ;
 int * FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 (TYPE_1__) ;
 char* VAR_8 ;
 char* VAR_9 ;
 char** VAR_10 ;
 char* VAR_11 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int *) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,struct fs_ops*) ;
 int FUNC_12 (int) ;
 TYPE_1__ VAR_12 ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,char*,char const*,...) ;
 char* FUNC_15 (char*,char) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (char*,char*,int) ;
 char* FUNC_19 (char*,char*) ;
 int FUNC_20 (struct preloaded_file*) ;
 struct fs_ops VAR_13 ;
 int FUNC_21 () ;
 int FUNC_22 (char*) ;

__attribute__((used)) static int
FUNC_23(char *VAR_14)
{
 static char VAR_15[256];
 struct fs_ops *VAR_16;
 struct preloaded_file *VAR_17;
 char *VAR_18, *VAR_19;
 const char *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_18 = FUNC_19(VAR_14, "://");
 if (VAR_18 == ((void*)0))
  goto invalid_url;

 VAR_23 = VAR_18 - VAR_14;
 if (VAR_23 == 4 && !FUNC_18(VAR_14, "tftp", VAR_23)) {
  VAR_20 = "net0";
  VAR_16 = &VAR_13;
  VAR_24 = 0;
 } else if (VAR_23 == 4 && !FUNC_18(VAR_14, "file", VAR_23)) {
  VAR_19 = FUNC_4("currdev");
  if (VAR_19 != ((void*)0) && FUNC_16(VAR_19, "pxe0:") == 0) {
   VAR_20 = "pxe0";
   VAR_16 = ((void*)0);
  } else {
   VAR_20 = "disk1";
   VAR_16 = &VAR_4;
  }
  VAR_24 = 1;
 } else
  goto invalid_url;

 VAR_18 += 3;
 if (*VAR_18 == '\0')
  goto invalid_url;

 if (*VAR_18 != '/' ) {
  if (VAR_24)
   goto invalid_url;

  VAR_14 = FUNC_15(VAR_18, '/');
  if (VAR_14 == ((void*)0))
   goto invalid_url;

  *VAR_14 = '\0';
  VAR_12.s_addr = FUNC_6(VAR_18);
  if (VAR_12.s_addr == FUNC_5(VAR_1))
   goto invalid_url;

  FUNC_13("serverip", FUNC_7(VAR_12), 1);

  *VAR_14 = '/';
 } else
  VAR_14 = VAR_18;

 if (FUNC_17(VAR_20) + FUNC_17(VAR_14) + 2 > sizeof(VAR_15)) {
  VAR_3 = "package name too long";
  return (VAR_0);
 }
 FUNC_14(VAR_15, "%s:%s", VAR_20, VAR_14);
 FUNC_13("install_package", VAR_15, 1);

 VAR_21 = FUNC_11(VAR_15, VAR_16);
 if (VAR_21) {
  VAR_3 = "cannot open package";
  goto fail;
 }





 FUNC_21();
 FUNC_22("vfs.root.mountfrom");




 VAR_22 = FUNC_10("/metatags", VAR_2);
 if (VAR_22 != -1) {
  VAR_21 = FUNC_12(VAR_22);
  FUNC_1(VAR_22);
  if (VAR_21) {
   VAR_3 = "cannot load metatags";
   goto fail;
  }
 }

 VAR_18 = (VAR_8 == ((void*)0)) ? "/kernel" : VAR_8;
 VAR_21 = FUNC_9(VAR_18, 0, ((void*)0));
 if (VAR_21) {
  VAR_3 = "cannot load kernel from package";
  goto fail;
 }


 VAR_18 = (VAR_9 == ((void*)0)) ? "/loader.rc" : VAR_9;
 VAR_22 = FUNC_10(VAR_18, VAR_2);
 if (VAR_22 != -1) {
  FUNC_1(VAR_22);
  VAR_21 = FUNC_8(VAR_18);
  if (VAR_21 == VAR_0)
   goto fail;
 }

 VAR_23 = 0;
 while (VAR_10 != ((void*)0) && VAR_10[VAR_23] != ((void*)0)) {
  VAR_21 = FUNC_9(VAR_10[VAR_23], 0, ((void*)0));
  if (VAR_21) {
   VAR_3 = "cannot load module(s) from package";
   goto fail;
  }
  VAR_23++;
 }

 VAR_18 = (VAR_11 == ((void*)0)) ? "/install.iso" : VAR_11;
 if (FUNC_3(VAR_18, "mfs_root", 1) == ((void*)0)) {
  VAR_21 = VAR_5;
  VAR_3 = "cannot load root file system";
  goto fail;
 }

 FUNC_0();

 VAR_17 = FUNC_2(((void*)0), ((void*)0));
 if (VAR_17 != ((void*)0))
  VAR_7[VAR_17->f_loader]->l_exec(VAR_17);
 VAR_21 = VAR_0;
 VAR_3 = "unable to start installation";

 fail:
 FUNC_14(VAR_15, "%s (error %d)", VAR_3, VAR_21);
 FUNC_0();
 FUNC_21();
 VAR_6 = ((void*)0);
 VAR_3 = VAR_15;
 return (VAR_0);

 invalid_url:
 VAR_3 = "invalid URL";
 return (VAR_0);
}
