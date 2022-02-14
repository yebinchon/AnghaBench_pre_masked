
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tar {int sparse_offset; int sparse_numbytes; int sparse_gnu_major; int sparse_gnu_minor; int realsize_override; int sparse_gnu_pending; int pax_hdrcharset_binary; int entry_uname; void* entry_bytes_remaining; void* realsize; int entry_pathname; int entry_linkpath; int entry_gname; int entry_pathname_override; int sparse_allowed; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;
typedef int int64_t ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct archive_entry*,char const*) ;
 int FUNC_1 (struct archive_entry*,int ,long) ;
 int FUNC_2 (struct archive_entry*,int ,long) ;
 int FUNC_3 (struct archive_entry*,int ,long) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int FUNC_5 (struct archive_entry*,void*) ;
 int FUNC_6 (struct archive_entry*,void*) ;
 int FUNC_7 (struct archive_entry*,int ,long) ;
 int FUNC_8 (struct archive_entry*,unsigned int) ;
 int FUNC_9 (struct archive_entry*,int ) ;
 int FUNC_10 (struct archive_entry*,int ) ;
 int FUNC_11 (struct archive_entry*,void*) ;
 int FUNC_12 (struct archive_entry*,int ) ;
 int FUNC_13 (struct archive_entry*,void*) ;
 int FUNC_14 (int *,int ,char*) ;
 int FUNC_15 (int *,char const*) ;
 int FUNC_16 (struct archive_read*,struct tar*,int,int) ;
 int FUNC_17 (struct archive_read*,struct tar*,char const*) ;
 int FUNC_18 (char const*,char*,int) ;
 int FUNC_19 (struct archive_read*,struct tar*,struct archive_entry*,char const*,int ) ;
 int FUNC_20 (struct archive_entry*,char const*,char const*,size_t) ;
 int FUNC_21 (struct archive_entry*,char const*,char const*) ;
 int FUNC_22 (char const*,int *,long*) ;
 int FUNC_23 (struct archive_read*,struct tar*,struct archive_entry*,char const*) ;
 int FUNC_24 (char const*,char*) ;
 int FUNC_25 (char const*) ;
 int FUNC_26 (char const*,char*,int) ;
 void* FUNC_27 (char const*,int ) ;

__attribute__((used)) static int
FUNC_28(struct archive_read *VAR_9, struct tar *VAR_10,
    struct archive_entry *VAR_11, const char *VAR_12, const char *VAR_13, size_t VAR_14)
{
 int64_t VAR_15;
 long VAR_16;
 int VAR_17 = VAR_7, VAR_18;


 if (VAR_13 == ((void*)0))
  VAR_13 = "";


 switch (VAR_12[0]) {
 case 'G':

  if (FUNC_26(VAR_12, "GNU.sparse", 10) == 0 &&
      !VAR_10->sparse_allowed) {
   FUNC_14(&VAR_9->archive, VAR_5,
       "Non-regular file cannot be sparse");
   return (VAR_6);
  }


  if (FUNC_24(VAR_12, "GNU.sparse.numblocks") == 0) {
   VAR_10->sparse_offset = -1;
   VAR_10->sparse_numbytes = -1;
   VAR_10->sparse_gnu_major = 0;
   VAR_10->sparse_gnu_minor = 0;
  }
  if (FUNC_24(VAR_12, "GNU.sparse.offset") == 0) {
   VAR_10->sparse_offset = FUNC_27(VAR_13, FUNC_25(VAR_13));
   if (VAR_10->sparse_numbytes != -1) {
    if (FUNC_16(VAR_9, VAR_10,
        VAR_10->sparse_offset, VAR_10->sparse_numbytes)
        != VAR_7)
     return (VAR_6);
    VAR_10->sparse_offset = -1;
    VAR_10->sparse_numbytes = -1;
   }
  }
  if (FUNC_24(VAR_12, "GNU.sparse.numbytes") == 0) {
   VAR_10->sparse_numbytes = FUNC_27(VAR_13, FUNC_25(VAR_13));
   if (VAR_10->sparse_numbytes != -1) {
    if (FUNC_16(VAR_9, VAR_10,
        VAR_10->sparse_offset, VAR_10->sparse_numbytes)
        != VAR_7)
     return (VAR_6);
    VAR_10->sparse_offset = -1;
    VAR_10->sparse_numbytes = -1;
   }
  }
  if (FUNC_24(VAR_12, "GNU.sparse.size") == 0) {
   VAR_10->realsize = FUNC_27(VAR_13, FUNC_25(VAR_13));
   FUNC_11(VAR_11, VAR_10->realsize);
   VAR_10->realsize_override = 1;
  }


  if (FUNC_24(VAR_12, "GNU.sparse.map") == 0) {
   VAR_10->sparse_gnu_major = 0;
   VAR_10->sparse_gnu_minor = 1;
   if (FUNC_17(VAR_9, VAR_10, VAR_13) != VAR_7)
    return (VAR_8);
  }


  if (FUNC_24(VAR_12, "GNU.sparse.major") == 0) {
   VAR_10->sparse_gnu_major = (int)FUNC_27(VAR_13, FUNC_25(VAR_13));
   VAR_10->sparse_gnu_pending = 1;
  }
  if (FUNC_24(VAR_12, "GNU.sparse.minor") == 0) {
   VAR_10->sparse_gnu_minor = (int)FUNC_27(VAR_13, FUNC_25(VAR_13));
   VAR_10->sparse_gnu_pending = 1;
  }
  if (FUNC_24(VAR_12, "GNU.sparse.name") == 0) {






   FUNC_15(&(VAR_10->entry_pathname_override), VAR_13);
  }
  if (FUNC_24(VAR_12, "GNU.sparse.realsize") == 0) {
   VAR_10->realsize = FUNC_27(VAR_13, FUNC_25(VAR_13));
   FUNC_11(VAR_11, VAR_10->realsize);
   VAR_10->realsize_override = 1;
  }
  break;
 case 'L':






  if (FUNC_24(VAR_12, "LIBARCHIVE.creationtime") == 0) {
   FUNC_22(VAR_13, &VAR_15, &VAR_16);
   FUNC_2(VAR_11, VAR_15, VAR_16);
  }
  if (FUNC_24(VAR_12, "LIBARCHIVE.symlinktype") == 0) {
   if (FUNC_24(VAR_13, "file") == 0) {
    FUNC_12(VAR_11,
        VAR_1);
   } else if (FUNC_24(VAR_13, "dir") == 0) {
    FUNC_12(VAR_11,
        VAR_0);
   }
  }
  if (FUNC_18(VAR_12, "LIBARCHIVE.xattr.", 17) == 0)
   FUNC_21(VAR_11, VAR_12, VAR_13);
  break;
 case 'S':

  if (FUNC_24(VAR_12, "SCHILY.acl.access") == 0) {
   VAR_18 = FUNC_19(VAR_9, VAR_10, VAR_11, VAR_13,
       VAR_2);
   if (VAR_18 == VAR_6)
    return (VAR_18);
  } else if (FUNC_24(VAR_12, "SCHILY.acl.default") == 0) {
   VAR_18 = FUNC_19(VAR_9, VAR_10, VAR_11, VAR_13,
       VAR_3);
   if (VAR_18 == VAR_6)
    return (VAR_18);
  } else if (FUNC_24(VAR_12, "SCHILY.acl.ace") == 0) {
   VAR_18 = FUNC_19(VAR_9, VAR_10, VAR_11, VAR_13,
       VAR_4);
   if (VAR_18 == VAR_6)
    return (VAR_18);
  } else if (FUNC_24(VAR_12, "SCHILY.devmajor") == 0) {
   FUNC_9(VAR_11,
       (dev_t)FUNC_27(VAR_13, FUNC_25(VAR_13)));
  } else if (FUNC_24(VAR_12, "SCHILY.devminor") == 0) {
   FUNC_10(VAR_11,
       (dev_t)FUNC_27(VAR_13, FUNC_25(VAR_13)));
  } else if (FUNC_24(VAR_12, "SCHILY.fflags") == 0) {
   FUNC_0(VAR_11, VAR_13);
  } else if (FUNC_24(VAR_12, "SCHILY.dev") == 0) {
   FUNC_4(VAR_11,
       (dev_t)FUNC_27(VAR_13, FUNC_25(VAR_13)));
  } else if (FUNC_24(VAR_12, "SCHILY.ino") == 0) {
   FUNC_6(VAR_11,
       FUNC_27(VAR_13, FUNC_25(VAR_13)));
  } else if (FUNC_24(VAR_12, "SCHILY.nlink") == 0) {
   FUNC_8(VAR_11, (unsigned)
       FUNC_27(VAR_13, FUNC_25(VAR_13)));
  } else if (FUNC_24(VAR_12, "SCHILY.realsize") == 0) {
   VAR_10->realsize = FUNC_27(VAR_13, FUNC_25(VAR_13));
   VAR_10->realsize_override = 1;
   FUNC_11(VAR_11, VAR_10->realsize);
  } else if (FUNC_26(VAR_12, "SCHILY.xattr.", 13) == 0) {
   FUNC_20(VAR_11, VAR_12, VAR_13,
       VAR_14);
  } else if (FUNC_24(VAR_12, "SUN.holesdata") == 0) {

   VAR_18 = FUNC_23(VAR_9, VAR_10, VAR_11, VAR_13);
   if (VAR_18 < VAR_17) {
    if (VAR_18 == VAR_6)
     return (VAR_18);
    VAR_17 = VAR_18;
    FUNC_14(&VAR_9->archive,
        VAR_5,
        "Parse error: SUN.holesdata");
   }
  }
  break;
 case 'a':
  if (FUNC_24(VAR_12, "atime") == 0) {
   FUNC_22(VAR_13, &VAR_15, &VAR_16);
   FUNC_1(VAR_11, VAR_15, VAR_16);
  }
  break;
 case 'c':
  if (FUNC_24(VAR_12, "ctime") == 0) {
   FUNC_22(VAR_13, &VAR_15, &VAR_16);
   FUNC_3(VAR_11, VAR_15, VAR_16);
  } else if (FUNC_24(VAR_12, "charset") == 0) {

  } else if (FUNC_24(VAR_12, "comment") == 0) {

  }
  break;
 case 'g':
  if (FUNC_24(VAR_12, "gid") == 0) {
   FUNC_5(VAR_11,
       FUNC_27(VAR_13, FUNC_25(VAR_13)));
  } else if (FUNC_24(VAR_12, "gname") == 0) {
   FUNC_15(&(VAR_10->entry_gname), VAR_13);
  }
  break;
 case 'h':
  if (FUNC_24(VAR_12, "hdrcharset") == 0) {
   if (FUNC_24(VAR_13, "BINARY") == 0)

    VAR_10->pax_hdrcharset_binary = 1;
   else if (FUNC_24(VAR_13, "ISO-IR 10646 2000 UTF-8") == 0)
    VAR_10->pax_hdrcharset_binary = 0;
  }
  break;
 case 'l':

  if (FUNC_24(VAR_12, "linkpath") == 0) {
   FUNC_15(&(VAR_10->entry_linkpath), VAR_13);
  }
  break;
 case 'm':
  if (FUNC_24(VAR_12, "mtime") == 0) {
   FUNC_22(VAR_13, &VAR_15, &VAR_16);
   FUNC_7(VAR_11, VAR_15, VAR_16);
  }
  break;
 case 'p':
  if (FUNC_24(VAR_12, "path") == 0) {
   FUNC_15(&(VAR_10->entry_pathname), VAR_13);
  }
  break;
 case 'r':

  break;
 case 's':


  if (FUNC_24(VAR_12, "size") == 0) {

   VAR_10->entry_bytes_remaining
       = FUNC_27(VAR_13, FUNC_25(VAR_13));






   if (!VAR_10->realsize_override) {
    FUNC_11(VAR_11,
        VAR_10->entry_bytes_remaining);
    VAR_10->realsize
        = VAR_10->entry_bytes_remaining;
   }
  }
  break;
 case 'u':
  if (FUNC_24(VAR_12, "uid") == 0) {
   FUNC_13(VAR_11,
       FUNC_27(VAR_13, FUNC_25(VAR_13)));
  } else if (FUNC_24(VAR_12, "uname") == 0) {
   FUNC_15(&(VAR_10->entry_uname), VAR_13);
  }
  break;
 }
 return (VAR_17);
}
