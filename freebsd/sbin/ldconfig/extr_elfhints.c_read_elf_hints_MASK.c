
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
struct elfhints_hdr {scalar_t__ magic; int version; int dirlist; int strtab; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,char const*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int,char*,char const*,...) ;
 int FUNC_4 (int,struct stat*) ;
 void* FUNC_5 (int *,scalar_t__,int,int ,int,int ) ;
 int FUNC_6 (char const*,int ) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static void
FUNC_8(const char *VAR_9, int VAR_10)
{
 int VAR_11;
 struct stat VAR_12;
 void *VAR_13;
 struct elfhints_hdr *VAR_14;
 char *VAR_15;
 char *VAR_16;
 char *VAR_17;

 if ((VAR_11 = FUNC_6(VAR_9, VAR_5)) == -1) {
  if (VAR_8 == VAR_1 && !VAR_10)
   return;
  FUNC_2(1, "Cannot open \"%s\"", VAR_9);
 }
 if (FUNC_4(VAR_11, &VAR_12) == -1)
  FUNC_2(1, "Cannot stat \"%s\"", VAR_9);
 if (VAR_12.st_size > VAR_4)
  FUNC_3(1, "\"%s\" is unreasonably large", VAR_9);




 VAR_13 = FUNC_5(((void*)0), VAR_12.st_size, VAR_6|VAR_7,
     VAR_3, VAR_11, 0);
 if (VAR_13 == VAR_2)
  FUNC_2(1, "Cannot mmap \"%s\"", VAR_9);
 FUNC_1(VAR_11);

 VAR_14 = (struct elfhints_hdr *)VAR_13;
 if (VAR_14->magic != VAR_0)
  FUNC_3(1, "\"%s\": invalid file format", VAR_9);
 if (VAR_14->version != 1)
  FUNC_3(1, "\"%s\": unrecognized file version (%d)", VAR_9,
      VAR_14->version);

 VAR_15 = (char *)VAR_13 + VAR_14->strtab;
 VAR_16 = VAR_15 + VAR_14->dirlist;

 if (*VAR_16 != '\0')
  while ((VAR_17 = FUNC_7(&VAR_16, ":")) != ((void*)0))
   FUNC_0(VAR_9, VAR_17, 1);
}
