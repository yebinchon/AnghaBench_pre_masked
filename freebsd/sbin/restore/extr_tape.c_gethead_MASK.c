
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct s_spcl {scalar_t__ c_magic; int c_flags; int c_type; int c_size; int c_count; int c_tapea; int * c_spare1; int c_gid; int c_uid; void* c_date; int c_extsize; int c_birthtimensec; int c_birthtime; int c_old_mtime; void* c_mtime; int c_old_atime; void* c_atime; int c_old_ddate; void* c_ddate; int c_old_date; int c_old_firstrec; int c_firstrec; int c_old_tapea; int c_inumber; int * c_addr; int c_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (struct s_spcl*) ;
 int FUNC_3 (int*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int ,char*) ;
 int VAR_11 ;
 int FUNC_5 (char*,int) ;
 int VAR_12 ;
 int FUNC_6 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int *) ;
 int VAR_15 ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static int
FUNC_10(struct s_spcl *VAR_16)
{
 long VAR_17;

 FUNC_6((char *)VAR_16);
 if (VAR_16->c_magic != VAR_2 && VAR_16->c_magic != VAR_5) {
  if (VAR_16->c_magic == VAR_6) {
   FUNC_4(VAR_13,
       "Format of dump tape is too old. Must use\n");
   FUNC_4(VAR_13,
       "a version of restore from before 2002.\n");
   return (VAR_1);
  }
  if (FUNC_7(VAR_16->c_magic) != VAR_2 &&
      FUNC_7(VAR_16->c_magic) != VAR_5) {
   if (FUNC_7(VAR_16->c_magic) == VAR_6) {
    FUNC_4(VAR_13,
      "Format of dump tape is too old. Must use\n");
    FUNC_4(VAR_13,
      "a version of restore from before 2002.\n");
   }
   return (VAR_1);
  }
  if (!VAR_0) {
   FUNC_9(VAR_14, "Note: Doing Byte swapping\n");
   VAR_0 = 1;
  }
 }
 if (FUNC_3((int *)VAR_16) == VAR_1)
  return (VAR_1);
 if (VAR_0) {
  FUNC_8((u_char *)"8l4s1q8l2q17l", (u_char *)VAR_16);
  FUNC_8((u_char *)"l",(u_char *) &VAR_16->c_level);
  FUNC_8((u_char *)"2l4q",(u_char *) &VAR_16->c_flags);
 }
 VAR_12 = 0;

 switch (VAR_16->c_type) {

 case 131:
 case 132:



  VAR_16->c_size = VAR_16->c_count * VAR_7;
  if (VAR_16->c_count > VAR_8)
   VAR_12 = 1;
  else
   for (VAR_17 = 0; VAR_17 < VAR_16->c_count; VAR_17++)
    VAR_16->c_addr[VAR_17]++;


 case 128:
  if (VAR_16->c_magic == VAR_5 &&
      (VAR_16->c_flags & VAR_4) == 0)
   VAR_11 = 1;


 case 130:
  VAR_16->c_inumber = 0;


 case 133:
 case 129:




  if (VAR_16->c_magic == VAR_5) {
   VAR_16->c_tapea = VAR_16->c_old_tapea;
   VAR_16->c_firstrec = VAR_16->c_old_firstrec;
   VAR_16->c_date = FUNC_0(VAR_16->c_old_date);
   VAR_16->c_ddate = FUNC_0(VAR_16->c_old_ddate);
   VAR_16->c_atime = FUNC_0(VAR_16->c_old_atime);
   VAR_16->c_mtime = FUNC_0(VAR_16->c_old_mtime);
   VAR_16->c_birthtime = 0;
   VAR_16->c_birthtimensec = 0;
   VAR_16->c_extsize = 0;
  }
  break;

 default:
  FUNC_5("gethead: unknown inode type %d\n", VAR_16->c_type);
  break;
 }
 if (VAR_10 != 0 && FUNC_1(VAR_16->c_date) != VAR_10)
  FUNC_4(VAR_13, "Header with wrong dumpdate.\n");




 if (VAR_11) {
  VAR_16->c_uid = VAR_16->c_spare1[1];
  VAR_16->c_gid = VAR_16->c_spare1[2];
 }
 VAR_16->c_magic = VAR_2;
 VAR_15 = VAR_16->c_tapea;
 if (VAR_9)
  FUNC_2(VAR_16);
 return(VAR_3);
}
