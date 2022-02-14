
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ggd_export {int e_flags; int e_path; int e_mask; int e_ip; } ;
struct ggd_connection {int c_flags; int c_diskfd; } ;
struct g_gate_cinit {int gc_flags; } ;
typedef int ipmask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct ggd_export *VAR_9, struct g_gate_cinit *VAR_10,
    struct ggd_connection *VAR_11)
{
 char VAR_12[32];
 int VAR_13 = 0, VAR_14;

 FUNC_5(VAR_12, FUNC_1(VAR_9->e_ip), sizeof(VAR_12));
 FUNC_4(VAR_12, "/", sizeof(VAR_12));
 FUNC_4(VAR_12, FUNC_1(VAR_9->e_mask), sizeof(VAR_12));
 if ((VAR_10->gc_flags & VAR_1) != 0) {
  if (VAR_9->e_flags == VAR_7) {
   FUNC_0(VAR_4, "Read-only access requested, "
       "but %s (%s) is exported write-only.", VAR_9->e_path,
       VAR_12);
   return (VAR_0);
  } else {
   VAR_11->c_flags |= VAR_1;
  }
 } else if ((VAR_10->gc_flags & VAR_2) != 0) {
  if (VAR_9->e_flags == VAR_5) {
   FUNC_0(VAR_4, "Write-only access requested, "
       "but %s (%s) is exported read-only.", VAR_9->e_path,
       VAR_12);
   return (VAR_0);
  } else {
   VAR_11->c_flags |= VAR_2;
  }
 } else {
  if (VAR_9->e_flags == VAR_5) {
   FUNC_0(VAR_4, "Read-write access requested, "
       "but %s (%s) is exported read-only.", VAR_9->e_path,
       VAR_12);
   return (VAR_0);
  } else if (VAR_9->e_flags == VAR_7) {
   FUNC_0(VAR_4, "Read-write access requested, "
       "but %s (%s) is exported write-only.", VAR_9->e_path,
       VAR_12);
   return (VAR_0);
  }
 }
 if ((VAR_11->c_flags & VAR_1) != 0)
  VAR_14 = VAR_5;
 else if ((VAR_11->c_flags & VAR_2) != 0)
  VAR_14 = VAR_7;
 else
  VAR_14 = VAR_6;
 VAR_11->c_diskfd = FUNC_2(VAR_9->e_path, VAR_14);
 if (VAR_11->c_diskfd == -1) {
  VAR_13 = VAR_8;
  FUNC_0(VAR_3, "Cannot open %s: %s.", VAR_9->e_path,
      FUNC_3(VAR_13));
  return (VAR_13);
 }
 return (0);
}
