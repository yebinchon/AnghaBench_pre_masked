
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct inode {int dummy; } ;
struct TYPE_2__ {int file_name; } ;
struct ima_template_entry {TYPE_1__ template; int digest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ima_template_entry*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct inode*,int ,char const*,char const*,int,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct ima_template_entry *VAR_3, int VAR_4,
      const char *VAR_5, struct inode *VAR_6)
{
 u8 VAR_7[VAR_1];
 const char *VAR_8 = "hash_added";
 int VAR_9 = 1;
 int VAR_10 = 0;

 FUNC_6(&VAR_2);
 if (!VAR_4) {
  FUNC_4(VAR_7, VAR_3->digest, sizeof VAR_7);
  if (FUNC_1(VAR_7)) {
   VAR_8 = "hash_exists";
   goto out;
  }
 }

 VAR_10 = FUNC_0(VAR_3);
 if (VAR_10 < 0) {
  VAR_8 = "ENOMEM";
  VAR_9 = 0;
  goto out;
 }

 if (VAR_4)
  FUNC_5(VAR_7, 0xff, sizeof VAR_7);

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 != 0) {
  VAR_8 = "TPM error";
  VAR_9 = 0;
 }
out:
 FUNC_7(&VAR_2);
 FUNC_3(VAR_0, VAR_6,
       VAR_3->template.file_name,
       VAR_5, VAR_8, VAR_10, VAR_9);
 return VAR_10;
}
