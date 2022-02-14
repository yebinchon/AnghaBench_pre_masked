
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {int file_name; } ;
struct ima_template_entry {TYPE_1__ template; } ;
struct TYPE_4__ {int violations; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (struct ima_template_entry*,int,struct inode*) ;
 int FUNC_2 (int ,struct inode*,unsigned char const*,char const*,char const*,int,int ) ;
 int FUNC_3 (struct ima_template_entry*) ;
 struct ima_template_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int ,unsigned char const*,int ) ;

void FUNC_7(struct inode *VAR_5, const unsigned char *VAR_6,
         const char *VAR_7, const char *VAR_8)
{
 struct ima_template_entry *VAR_9;
 int VAR_10 = 1;
 int VAR_11;


 FUNC_0(&VAR_4.violations);

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_11 = -VAR_1;
  goto err_out;
 }
 FUNC_5(&VAR_9->template, 0, sizeof(VAR_9->template));
 FUNC_6(VAR_9->template.file_name, VAR_6, VAR_3);
 VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_5);
 if (VAR_11 < 0)
  FUNC_3(VAR_9);
err_out:
 FUNC_2(VAR_0, VAR_5, VAR_6,
       VAR_7, VAR_8, VAR_11, 0);
}
