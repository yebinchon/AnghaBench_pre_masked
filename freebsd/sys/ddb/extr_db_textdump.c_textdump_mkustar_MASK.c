
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ustar_header {int uh_ustar; scalar_t__ uh_type; int uh_mtime; int uh_group; int uh_owner; int uh_tar_group; int uh_tar_owner; int uh_size; int uh_mode; int uh_filename; } ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 int FUNC_0 (struct ustar_header*,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ,int,char*,unsigned long) ;
 int FUNC_3 (int ,char const*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct ustar_header*) ;

void
FUNC_5(char *VAR_8, const char *VAR_9, u_int VAR_10)
{
 struct ustar_header *VAR_11;





 VAR_11 = (struct ustar_header *)VAR_8;
 FUNC_0(VAR_11, sizeof(*VAR_11));
 FUNC_3(VAR_11->uh_filename, VAR_9, sizeof(VAR_11->uh_filename));
 FUNC_3(VAR_11->uh_mode, VAR_2, sizeof(VAR_11->uh_mode));
 FUNC_2(VAR_11->uh_size, sizeof(VAR_11->uh_size), "%o", VAR_10);
 FUNC_3(VAR_11->uh_tar_owner, VAR_3, sizeof(VAR_11->uh_tar_owner));
 FUNC_3(VAR_11->uh_tar_group, VAR_0, sizeof(VAR_11->uh_tar_group));
 FUNC_3(VAR_11->uh_owner, VAR_4, sizeof(VAR_11->uh_owner));
 FUNC_3(VAR_11->uh_group, VAR_1, sizeof(VAR_11->uh_group));
 FUNC_2(VAR_11->uh_mtime, sizeof(VAR_11->uh_mtime), "%lo",
     (unsigned long)VAR_7);
 VAR_11->uh_type = 0;
 FUNC_3(VAR_11->uh_ustar, VAR_5, sizeof(VAR_11->uh_ustar));
 FUNC_4(VAR_11);
}
