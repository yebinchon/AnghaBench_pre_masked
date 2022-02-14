
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct open_file {scalar_t__ f_fsdata; } ;
struct iso_directory_record {char* name; int length; int flags; int extent; int name_len; } ;
struct file {int f_off; int f_size; int f_flags; int f_susp_skip; } ;
struct dirent {size_t d_reclen; size_t d_namlen; scalar_t__* d_name; int d_type; int d_fileno; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,scalar_t__*,size_t) ;
 int FUNC_1 (struct open_file*,char**,size_t*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (struct open_file*,struct iso_directory_record*,int,size_t*) ;

__attribute__((used)) static int
FUNC_5(struct open_file *VAR_7, struct dirent *VAR_8)
{
 struct file *VAR_9 = (struct file *)VAR_7->f_fsdata;
 struct iso_directory_record *VAR_10;
 size_t VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 char *VAR_16, *VAR_17;

again:
 if (VAR_9->f_off >= VAR_9->f_size)
  return (VAR_2);
 VAR_14 = FUNC_1(VAR_7, &VAR_16, &VAR_11);
 if (VAR_14)
  return (VAR_14);
 VAR_10 = (struct iso_directory_record *)VAR_16;

 if (FUNC_2(VAR_10->length) == 0) {
  daddr_t VAR_18;


  VAR_18 = VAR_9->f_off / VAR_5;
  VAR_9->f_off = (VAR_18 + 1) * VAR_5;
  goto again;
 }

 if (VAR_9->f_flags & VAR_4) {
  if (VAR_9->f_flags & VAR_3 && VAR_9->f_off == 0)
   VAR_15 = 0;
  else
   VAR_15 = VAR_9->f_susp_skip;
  VAR_17 = FUNC_4(VAR_7, VAR_10, VAR_15, &VAR_13);
 } else
  VAR_17 = ((void*)0);
 if (VAR_17 == ((void*)0)) {
  VAR_13 = FUNC_2(VAR_10->name_len);
  VAR_17 = VAR_10->name;
  if (VAR_13 == 1) {
   if (VAR_10->name[0] == 0)
    VAR_17 = ".";
   else if (VAR_10->name[0] == 1) {
    VAR_13 = 2;
    VAR_17 = "..";
   }
  }
 }
 VAR_12 = sizeof(struct dirent) - (VAR_6+1) + VAR_13 + 1;
 VAR_12 = (VAR_12 + 3) & ~3;

 VAR_8->d_fileno = FUNC_3(VAR_10->extent);
 VAR_8->d_reclen = VAR_12;
 if (FUNC_2(VAR_10->flags) & 2)
  VAR_8->d_type = VAR_0;
 else
  VAR_8->d_type = VAR_1;
 VAR_8->d_namlen = VAR_13;

 FUNC_0(VAR_17, VAR_8->d_name, VAR_8->d_namlen);
 VAR_8->d_name[VAR_8->d_namlen] = 0;

 VAR_9->f_off += FUNC_2(VAR_10->length);
 return (0);
}
