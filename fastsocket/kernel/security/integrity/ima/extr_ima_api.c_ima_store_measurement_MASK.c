
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {int file_name; int digest; } ;
struct ima_template_entry {TYPE_2__ template; } ;
struct ima_iint_cache {int flags; int digest; } ;
struct file {TYPE_1__* f_dentry; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ima_template_entry*,int,struct inode*) ;
 int FUNC_1 (int ,struct inode*,unsigned char const*,char const*,char const*,int,int ) ;
 int FUNC_2 (struct ima_template_entry*) ;
 struct ima_template_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int ,unsigned char const*,int ) ;

void FUNC_7(struct ima_iint_cache *VAR_6, struct file *VAR_7,
      const unsigned char *VAR_8)
{
 const char *VAR_9 = "add_template_measure";
 const char *VAR_10 = "ENOMEM";
 int VAR_11 = -VAR_1;
 struct inode *VAR_12 = VAR_7->f_dentry->d_inode;
 struct ima_template_entry *VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  FUNC_1(VAR_0, VAR_12, VAR_8,
        VAR_9, VAR_10, VAR_11, 0);
  return;
 }
 FUNC_5(&VAR_13->template, 0, sizeof(VAR_13->template));
 FUNC_4(VAR_13->template.digest, VAR_6->digest, VAR_3);
 FUNC_6(VAR_13->template.file_name, VAR_8, VAR_4);

 VAR_11 = FUNC_0(VAR_13, VAR_14, VAR_12);
 if (!VAR_11)
  VAR_6->flags |= VAR_5;
 else
  FUNC_2(VAR_13);
}
