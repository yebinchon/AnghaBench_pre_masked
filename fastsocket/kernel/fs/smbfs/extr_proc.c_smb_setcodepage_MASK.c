
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {TYPE_1__* ops; int * remote_nls; int * local_nls; } ;
struct smb_nls_codepage {int * remote_name; int * local_name; } ;
struct TYPE_2__ {int convert; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int *) ;
 int FUNC_1 (struct smb_sb_info*) ;
 int FUNC_2 (struct smb_sb_info*) ;
 int FUNC_3 (int *,char*) ;
 int VAR_2 ;

int FUNC_4(struct smb_sb_info *VAR_3, struct smb_nls_codepage *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(VAR_3);


 if (!*VAR_4->remote_name)
  goto out;


 VAR_5 = FUNC_0(&VAR_3->local_nls, VAR_4->local_name);
 if (VAR_5 != 0)
  goto out;


 if (!FUNC_3(VAR_4->remote_name, "unicode")) {
  VAR_3->remote_nls = &VAR_2;
 } else {
  VAR_5 = FUNC_0(&VAR_3->remote_nls, VAR_4->remote_name);
  if (VAR_5 != 0)
   FUNC_0(&VAR_3->local_nls, ((void*)0));
 }

out:
 if (VAR_3->local_nls != ((void*)0) && VAR_3->remote_nls != ((void*)0))
  VAR_3->ops->convert = VAR_0;
 else
  VAR_3->ops->convert = VAR_1;

 FUNC_2(VAR_3);
 return VAR_5;
}
