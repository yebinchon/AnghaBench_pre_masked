
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uid_t ;
typedef int time_t ;
typedef int off_t ;
typedef int nlink_t ;
typedef void* gid_t ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_5__ {int flags; int * sha512digest; int * sha384digest; int * sha256digest; void* st_uid; int type; TYPE_1__ st_mtimespec; int * tags; int * slink; int st_size; int * sha1digest; int * rmd160digest; int st_nlink; int st_mode; int * md5digest; void* st_gid; int st_flags; int st_rdev; int cksum; } ;
typedef TYPE_2__ NODE ;
 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (char*,void**) ;
 int * FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int*) ;
 int FUNC_7 (char*) ;
 void* FUNC_8 (char*) ;
 int FUNC_9 (int *,int,char*,char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 void* FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char**,int *,int *) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (char**,char*) ;
 int FUNC_16 (char*,char**,int) ;
 int FUNC_17 (char*,char**,int) ;
 int FUNC_18 (char*,char**,int) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (char*,void**) ;

__attribute__((used)) static void
FUNC_21(char *VAR_2, NODE *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 gid_t VAR_7;
 uid_t VAR_8;
 char *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 void *VAR_13;

 while ((VAR_9 = FUNC_15(&VAR_2, "= \t")) != ((void*)0)) {
  if (*VAR_9 == '\0')
   continue;
  if (FUNC_10(VAR_9, "all") == 0)
   FUNC_4("invalid keyword `all'");
  VAR_3->flags |= VAR_4 = FUNC_6(VAR_9, &VAR_5);
  if (!VAR_5)

   continue;
  while ((VAR_10 = FUNC_15(&VAR_2, " \t")) != ((void*)0) && *VAR_10 == '\0')
   continue;
  if (VAR_10 == ((void*)0))
   FUNC_4("missing value");
  switch (VAR_4) {
  case 147:
   VAR_3->cksum = FUNC_18(VAR_10, &VAR_12, 10);
   if (*VAR_12)
    FUNC_4("invalid checksum `%s'", VAR_10);
   break;
  case 146:
   VAR_3->st_rdev = FUNC_5(VAR_10);
   break;
  case 145:
   if (FUNC_10("none", VAR_10) == 0)
    VAR_3->st_flags = 0;
   else if (FUNC_13(&VAR_10, &VAR_3->st_flags, ((void*)0))
       != 0)
    FUNC_4("invalid flag `%s'", VAR_10);
   break;
  case 144:
   VAR_3->st_gid = (gid_t)FUNC_18(VAR_10, &VAR_12, 10);
   if (*VAR_12)
    FUNC_4("invalid gid `%s'", VAR_10);
   break;
  case 143:
   if (VAR_1)
    break;
   if (FUNC_2(VAR_10, &VAR_7) == -1)
    FUNC_4("unknown group `%s'", VAR_10);
   VAR_3->st_gid = VAR_7;
   break;
  case 142:
   if (VAR_10[0]=='0' && VAR_10[1]=='x')
    VAR_11=&VAR_10[2];
   else
    VAR_11=VAR_10;
   if ((VAR_3->md5digest = FUNC_11(VAR_11)) == ((void*)0))
    FUNC_4("memory allocation error");
   break;
  case 141:
   if ((VAR_13 = FUNC_8(VAR_10)) == ((void*)0))
    FUNC_4("cannot set file mode `%s' (%s)",
        VAR_10, FUNC_12(VAR_0));
   VAR_3->st_mode = FUNC_1(VAR_13, 0);
   FUNC_0(VAR_13);
   break;
  case 140:
   VAR_3->st_nlink = (nlink_t)FUNC_18(VAR_10, &VAR_12, 10);
   if (*VAR_12)
    FUNC_4("invalid link count `%s'", VAR_10);
   break;
  case 139:
   if (VAR_10[0]=='0' && VAR_10[1]=='x')
    VAR_11=&VAR_10[2];
   else
    VAR_11=VAR_10;
   if ((VAR_3->rmd160digest = FUNC_11(VAR_11)) == ((void*)0))
    FUNC_4("memory allocation error");
   break;
  case 138:
   if (VAR_10[0]=='0' && VAR_10[1]=='x')
    VAR_11=&VAR_10[2];
   else
    VAR_11=VAR_10;
   if ((VAR_3->sha1digest = FUNC_11(VAR_11)) == ((void*)0))
    FUNC_4("memory allocation error");
   break;
  case 134:
   VAR_3->st_size = (off_t)FUNC_17(VAR_10, &VAR_12, 10);
   if (*VAR_12)
    FUNC_4("invalid size `%s'", VAR_10);
   break;
  case 133:
   if ((VAR_3->slink = FUNC_11(VAR_10)) == ((void*)0))
    FUNC_4("memory allocation error");
   if (FUNC_19(VAR_3->slink, VAR_10) == -1)
    FUNC_4("strunvis failed on `%s'", VAR_10);
   break;
  case 132:
   VAR_6 = FUNC_14(VAR_10) + 3;
   if ((VAR_3->tags = FUNC_3(VAR_6)) == ((void*)0))
    FUNC_4("memory allocation error");
   FUNC_9(VAR_3->tags, VAR_6, ",%s,", VAR_10);
   break;
  case 131:
   VAR_3->st_mtimespec.tv_sec =
       (time_t)FUNC_17(VAR_10, &VAR_12, 10);
   if (*VAR_12 != '.')
    FUNC_4("invalid time `%s'", VAR_10);
   VAR_10 = VAR_12 + 1;
   VAR_3->st_mtimespec.tv_nsec = FUNC_16(VAR_10, &VAR_12, 10);
   if (*VAR_12)
    FUNC_4("invalid time `%s'", VAR_10);
   break;
  case 130:
   VAR_3->type = FUNC_7(VAR_10);
   break;
  case 129:
   VAR_3->st_uid = (uid_t)FUNC_18(VAR_10, &VAR_12, 10);
   if (*VAR_12)
    FUNC_4("invalid uid `%s'", VAR_10);
   break;
  case 128:
   if (VAR_1)
    break;
   if (FUNC_20(VAR_10, &VAR_8) == -1)
    FUNC_4("unknown user `%s'", VAR_10);
   VAR_3->st_uid = VAR_8;
   break;
  case 137:
   if (VAR_10[0]=='0' && VAR_10[1]=='x')
    VAR_11=&VAR_10[2];
   else
    VAR_11=VAR_10;
   if ((VAR_3->sha256digest = FUNC_11(VAR_11)) == ((void*)0))
    FUNC_4("memory allocation error");
   break;
  case 136:
   if (VAR_10[0]=='0' && VAR_10[1]=='x')
    VAR_11=&VAR_10[2];
   else
    VAR_11=VAR_10;
   if ((VAR_3->sha384digest = FUNC_11(VAR_11)) == ((void*)0))
    FUNC_4("memory allocation error");
   break;
  case 135:
   if (VAR_10[0]=='0' && VAR_10[1]=='x')
    VAR_11=&VAR_10[2];
   else
    VAR_11=VAR_10;
   if ((VAR_3->sha512digest = FUNC_11(VAR_11)) == ((void*)0))
    FUNC_4("memory allocation error");
   break;
  default:
   FUNC_4(
       "set(): unsupported key type 0x%x (INTERNAL ERROR)",
       VAR_4);

  }
 }
}
