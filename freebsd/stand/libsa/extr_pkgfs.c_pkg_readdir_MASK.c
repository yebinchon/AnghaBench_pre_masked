
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ut_name; } ;
struct tarfile {TYPE_1__ tf_hdr; } ;
struct open_file {scalar_t__ f_fsdata; } ;
struct dirent {int d_reclen; int d_name; int d_type; scalar_t__ d_fileno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_3 ;
 struct tarfile* FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_4, struct dirent *VAR_5)
{
 struct tarfile *VAR_6;

 VAR_6 = (struct tarfile *)VAR_4->f_fsdata;
 if (VAR_6 != ((void*)0))
  return (VAR_1);

 VAR_6 = FUNC_1(VAR_3, ((void*)0));
 if (VAR_6 == ((void*)0))
  return (VAR_2);

 VAR_5->d_fileno = 0;
 VAR_5->d_reclen = sizeof(*VAR_5);
 VAR_5->d_type = VAR_0;
 FUNC_0(VAR_5->d_name, VAR_6->tf_hdr.ut_name, sizeof(VAR_5->d_name));
 return (0);
}
