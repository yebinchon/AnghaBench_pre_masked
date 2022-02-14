
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct s_spcl {int const c_type; long c_count; scalar_t__* c_addr; int c_inumber; scalar_t__ c_firstrec; } ;
typedef int intmax_t ;
typedef int ino_t ;







 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct s_spcl *VAR_4)
{
 static ino_t VAR_5 = 0x7fffffff;
 static int VAR_6;
 static long VAR_7;
 long VAR_8, VAR_9;

 if (VAR_4->c_type == VAR_0) {
  FUNC_0(VAR_3, "Volume header ");
   if (VAR_4->c_firstrec)
    FUNC_0(VAR_3, "begins with record %jd",
       (intmax_t)VAR_4->c_firstrec);
   FUNC_0(VAR_3, "\n");
  VAR_5 = 0x7fffffff;
  return;
 }
 if (VAR_5 == 0x7fffffff)
  goto newcalc;
 switch (VAR_6) {
 case 131:
  FUNC_0(VAR_3, "Dumped inodes map header");
  break;
 case 130:
  FUNC_0(VAR_3, "Used inodes map header");
  break;
 case 128:
  FUNC_0(VAR_3, "File header, ino %jd", (uintmax_t)VAR_5);
  break;
 case 132:
  FUNC_0(VAR_3, "File continuation header, ino %jd",
      (uintmax_t)VAR_5);
  break;
 case 129:
  FUNC_0(VAR_3, "End of tape header");
  break;
 }
 if (VAR_7 != VAR_1 - 1)
  FUNC_0(VAR_3, "; predicted %ld blocks, got %d blocks",
   VAR_7, VAR_1 - 1);
 FUNC_0(VAR_3, "\n");
newcalc:
 VAR_8 = 0;
 if (VAR_4->c_type != 129)
  for (VAR_9 = 0; VAR_9 < VAR_4->c_count; VAR_9++)
   if (VAR_2 || VAR_4->c_addr[VAR_9] != 0)
    VAR_8++;
 VAR_7 = VAR_8;
 VAR_1 = 0;
 VAR_6 = VAR_4->c_type;
 VAR_5 = VAR_4->c_inumber;
}
