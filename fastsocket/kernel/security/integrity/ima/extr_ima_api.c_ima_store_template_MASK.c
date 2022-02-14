
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ima_template_entry {int template_len; int template_name; int digest; int template; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ima_template_entry*,int,char const*,struct inode*) ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (int ,struct inode*,int ,char const*,char const*,int,int ) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct ima_template_entry *VAR_2,
         int VAR_3, struct inode *VAR_4)
{
 const char *VAR_5 = "add_template_measure";
 const char *VAR_6 = "hashing_error";
 int VAR_7;

 FUNC_3(VAR_2->digest, 0, sizeof(VAR_2->digest));
 VAR_2->template_name = VAR_1;
 VAR_2->template_len = sizeof(VAR_2->template);

 if (!VAR_3) {
  VAR_7 = FUNC_1(VAR_2->template_len,
      &VAR_2->template,
      VAR_2->digest);
  if (VAR_7 < 0) {
   FUNC_2(VAR_0, VAR_4,
         VAR_2->template_name, VAR_5,
         VAR_6, VAR_7, 0);
   return VAR_7;
  }
 }
 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_5, VAR_4);
 return VAR_7;
}
