
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int subline ;
typedef int line ;
struct TYPE_2__ {char* fs_spec; char* fs_file; char* fs_type; char* fs_mntops; char* fs_vfstype; void* fs_passno; void* fs_freq; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*,int,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,void*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 void* FUNC_8 (char**,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int
FUNC_10(void)
{
 char *VAR_10, *VAR_11;

 static char VAR_12[1024];
 char VAR_13[1024];
 int VAR_14;

 for (;;) {

  if (!(VAR_11 = FUNC_2(VAR_12, sizeof(VAR_12), VAR_8)))
   return (0);

  ++VAR_6;
  if (*VAR_12 == '#' || *VAR_12 == '\n')
   continue;
  if (!FUNC_7(VAR_11, " \t")) {
   VAR_9.fs_spec = FUNC_8(&VAR_11, ":\n");
   VAR_9.fs_file = FUNC_8(&VAR_11, ":\n");
   FUNC_3();
   VAR_9.fs_type = FUNC_8(&VAR_11, ":\n");
   if (VAR_9.fs_type) {
    if (!FUNC_4(VAR_9.fs_type, VAR_5))
     continue;
    VAR_9.fs_mntops = VAR_9.fs_type;
    VAR_9.fs_vfstype =
        FUNC_4(VAR_9.fs_type, VAR_4) ?
        "ufs" : "swap";
    if ((VAR_10 = FUNC_8(&VAR_11, ":\n")) != ((void*)0)) {
     VAR_9.fs_freq = FUNC_0(VAR_10);
     if ((VAR_10 = FUNC_8(&VAR_11, ":\n")) != ((void*)0)) {
      VAR_9.fs_passno = FUNC_0(VAR_10);
      return (1);
     }
    }
   }
   goto bad;
  }

  while ((VAR_10 = FUNC_8(&VAR_11, " \t\n")) != ((void*)0) && *VAR_10 == '\0')
   ;
  VAR_9.fs_spec = VAR_10;
  if (VAR_9.fs_spec == ((void*)0) || *VAR_9.fs_spec == '#')
   continue;
  if (FUNC_9(VAR_9.fs_spec, VAR_9.fs_spec) < 0)
   goto bad;
  while ((VAR_10 = FUNC_8(&VAR_11, " \t\n")) != ((void*)0) && *VAR_10 == '\0')
   ;
  VAR_9.fs_file = VAR_10;
  if (VAR_9.fs_file == ((void*)0))
   goto bad;
  if (FUNC_9(VAR_9.fs_file, VAR_9.fs_file) < 0)
   goto bad;
  FUNC_3();
  while ((VAR_10 = FUNC_8(&VAR_11, " \t\n")) != ((void*)0) && *VAR_10 == '\0')
   ;
  VAR_9.fs_vfstype = VAR_10;
  while ((VAR_10 = FUNC_8(&VAR_11, " \t\n")) != ((void*)0) && *VAR_10 == '\0')
   ;
  VAR_9.fs_mntops = VAR_10;
  if (VAR_9.fs_mntops == ((void*)0))
   goto bad;
  VAR_9.fs_freq = 0;
  VAR_9.fs_passno = 0;
  while ((VAR_10 = FUNC_8(&VAR_11, " \t\n")) != ((void*)0) && *VAR_10 == '\0')
   ;
  if (VAR_10 != ((void*)0)) {
   VAR_9.fs_freq = FUNC_0(VAR_10);
   while ((VAR_10 = FUNC_8(&VAR_11, " \t\n")) != ((void*)0) && *VAR_10 == '\0')
    ;
   if (VAR_10 != ((void*)0))
    VAR_9.fs_passno = FUNC_0(VAR_10);
  }
  (void)FUNC_5(VAR_13, VAR_9.fs_mntops, sizeof(VAR_13));
  VAR_11 = VAR_13;
  for (VAR_14 = 0, VAR_10 = FUNC_8(&VAR_11, ","); VAR_10;
       VAR_10 = FUNC_8(&VAR_11, ",")) {
   if (FUNC_6(VAR_10) != 2)
    continue;
   if (!FUNC_4(VAR_10, VAR_3)) {
    VAR_9.fs_type = VAR_3;
    break;
   }
   if (!FUNC_4(VAR_10, VAR_2)) {
    VAR_9.fs_type = VAR_2;
    break;
   }
   if (!FUNC_4(VAR_10, VAR_1)) {
    VAR_9.fs_type = VAR_1;
    break;
   }
   if (!FUNC_4(VAR_10, VAR_4)) {
    VAR_9.fs_type = VAR_4;
    break;
   }
   if (!FUNC_4(VAR_10, VAR_5)) {
    VAR_9.fs_type = VAR_5;
    VAR_14++;
    break;
   }
  }
  if (VAR_14)
   continue;
  if (VAR_10 != ((void*)0))
   return (1);

bad:
  FUNC_1(VAR_0);
 }

}
