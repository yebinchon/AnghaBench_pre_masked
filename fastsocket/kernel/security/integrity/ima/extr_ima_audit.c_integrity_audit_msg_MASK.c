
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct audit_buffer {int dummy; } ;
struct TYPE_8__ {unsigned char const* comm; int pid; int audit_context; } ;
struct TYPE_7__ {int uid; } ;
struct TYPE_6__ {int s_id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct audit_buffer*) ;
 int FUNC_3 (struct audit_buffer*,char*,...) ;
 struct audit_buffer* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct audit_buffer*,char const*) ;
 int FUNC_6 (struct audit_buffer*) ;
 int FUNC_7 (struct audit_buffer*,unsigned char const*) ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* FUNC_8 () ;
 int VAR_2 ;

void FUNC_9(int VAR_3, struct inode *VAR_4,
    const unsigned char *VAR_5, const char *VAR_6,
    const char *VAR_7, int VAR_8, int VAR_9)
{
 struct audit_buffer *VAR_10;

 if (!VAR_2 && VAR_9 == 1)
  return;

 VAR_10 = FUNC_4(VAR_1->audit_context, VAR_0, VAR_3);
 FUNC_3(VAR_10, "pid=%d uid=%u auid=%u ses=%u",
    VAR_1->pid, FUNC_8()->uid,
    FUNC_0(VAR_1),
    FUNC_1(VAR_1));
 FUNC_6(VAR_10);
 FUNC_3(VAR_10, " op=");
 FUNC_5(VAR_10, VAR_6);
 FUNC_3(VAR_10, " cause=");
 FUNC_5(VAR_10, VAR_7);
 FUNC_3(VAR_10, " comm=");
 FUNC_7(VAR_10, VAR_1->comm);
 if (VAR_5) {
  FUNC_3(VAR_10, " name=");
  FUNC_7(VAR_10, VAR_5);
 }
 if (VAR_4)
  FUNC_3(VAR_10, " dev=%s ino=%lu",
     VAR_4->i_sb->s_id, VAR_4->i_ino);
 FUNC_3(VAR_10, " res=%d", !VAR_8);
 FUNC_2(VAR_10);
}
