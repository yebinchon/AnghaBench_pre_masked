
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {char* body; } ;
struct TYPE_7__ {TYPE_2__ reply; } ;
struct TYPE_5__ {int type; int len; } ;
struct xs_stored_msg {TYPE_3__ u; TYPE_1__ hdr; } ;
typedef enum xsd_sockmsg_type { ____Placeholder_xsd_sockmsg_type } xsd_sockmsg_type ;
struct TYPE_8__ {int reply_lock; int reply_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct xs_stored_msg* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct xs_stored_msg*,int ) ;
 int FUNC_3 (struct xs_stored_msg*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,char*,int) ;
 int FUNC_6 (int *) ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static int
FUNC_7(enum xsd_sockmsg_type *VAR_5, u_int *VAR_6, void **VAR_7)
{
 struct xs_stored_msg *VAR_8;
 char *VAR_9;
 int VAR_10;

 FUNC_4(&VAR_4.reply_lock);
 while (FUNC_0(&VAR_4.reply_list)) {
  VAR_10 = FUNC_5(&VAR_4.reply_list, &VAR_4.reply_lock, 0, "xswait",
      VAR_2/10);
  if (VAR_10 && VAR_10 != VAR_0) {
   FUNC_6(&VAR_4.reply_lock);
   return (VAR_10);
  }
 }
 VAR_8 = FUNC_1(&VAR_4.reply_list);
 FUNC_2(&VAR_4.reply_list, VAR_8, VAR_3);
 FUNC_6(&VAR_4.reply_lock);

 *VAR_5 = VAR_8->hdr.type;
 if (VAR_6)
  *VAR_6 = VAR_8->hdr.len;
 VAR_9 = VAR_8->u.reply.body;

 FUNC_3(VAR_8, VAR_1);
 *VAR_7 = VAR_9;
 return (0);
}
