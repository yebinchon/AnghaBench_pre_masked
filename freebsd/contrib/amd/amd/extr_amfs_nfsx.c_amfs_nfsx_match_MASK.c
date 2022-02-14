
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* opt_rfs; char* opt_sublink; char* opt_fs; int opt_rhost; } ;
typedef TYPE_1__ am_opts ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (char*,int ,char*,char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int) ;
 char* FUNC_7 (char*,int) ;

__attribute__((used)) static char *
FUNC_8(am_opts *VAR_2)
{
  char *VAR_3;
  char *VAR_4;
  int VAR_5;

  if (!VAR_2->opt_rfs) {
    FUNC_2(VAR_1, "amfs_nfsx: no remote filesystem specified");
    return VAR_0;
  }

  if (!VAR_2->opt_rhost) {
    FUNC_2(VAR_1, "amfs_nfsx: no remote host specified");
    return VAR_0;
  }


  if (VAR_2->opt_sublink == ((void*)0) || VAR_2->opt_sublink[0] == '\0') {
    VAR_4 = FUNC_4(VAR_2->opt_rfs, ',');
    if (VAR_4 && VAR_4 > (VAR_2->opt_rfs + 1))
      VAR_2->opt_sublink = FUNC_6(VAR_2->opt_rfs + 1, VAR_4 - VAR_2->opt_rfs - 1);
  }






  if ((VAR_4 = FUNC_4(VAR_2->opt_fs, ',')))
    *VAR_4 = '\0';
  FUNC_0(VAR_2->opt_fs);




  VAR_5 = FUNC_5(VAR_2->opt_fs);
  VAR_2->opt_fs = FUNC_7(VAR_2->opt_fs, VAR_5 + 1 + 1);
  VAR_4 = VAR_2->opt_fs + VAR_5;




  *VAR_4++ = '/';
  *VAR_4 = '\0';




  VAR_3 = FUNC_3((char *) ((void*)0), VAR_2->opt_rhost, ":", VAR_2->opt_rfs);
  FUNC_1("NFSX: mounting remote server \"%s\", remote fs \"%s\" on \"%s\"",
       VAR_2->opt_rhost, VAR_2->opt_rfs, VAR_2->opt_fs);

  return VAR_3;
}
