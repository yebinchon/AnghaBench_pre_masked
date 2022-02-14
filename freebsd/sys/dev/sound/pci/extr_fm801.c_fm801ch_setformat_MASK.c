
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct fm801_info {int rec_fmt; int play_fmt; } ;
struct fm801_chinfo {scalar_t__ dir; struct fm801_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,char*,char*,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_2(kobj_t VAR_8, void *VAR_9, u_int32_t VAR_10)
{
 struct fm801_chinfo *VAR_11 = VAR_9;
 struct fm801_info *VAR_12 = VAR_11->parent;

 FUNC_1("fm801ch_setformat 0x%x : %s, %s, %s, %s\n", VAR_10,
  (FUNC_0(VAR_10) > 1)?"stereo":"mono",
  (VAR_10 & VAR_0) ? "16bit":"8bit",
  (VAR_10 & VAR_2)? "signed":"unsigned",
  (VAR_10 & VAR_1)?"bigendiah":"littleendian" );

 if(VAR_11->dir == VAR_6) {
  VAR_12->play_fmt =
      (FUNC_0(VAR_10) > 1)? VAR_4 : 0;
  VAR_12->play_fmt |= (VAR_10 & VAR_0) ? VAR_3 : 0;
  return 0;
 }

 if(VAR_11->dir == VAR_7 ) {
  VAR_12->rec_fmt = (FUNC_0(VAR_10) > 1)? VAR_5:0;
  VAR_12->rec_fmt |= (VAR_10 & VAR_0) ? VAR_3 : 0;
  return 0;
 }

 return 0;
}
