
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct security_mnt_opts {int num_mnt_opts; char** mnt_opts; int* mnt_opts_flags; } ;


 int FUNC_0 () ;

 char* VAR_0 ;

 char* VAR_1 ;

 char* VAR_2 ;
 char* VAR_3 ;

 char* VAR_4 ;

 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_5,
          struct security_mnt_opts *VAR_6)
{
 int VAR_7;
 char *VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_6->num_mnt_opts; VAR_7++) {
  char *VAR_9;

  if (VAR_6->mnt_opts[VAR_7])
   VAR_9 = FUNC_3(VAR_6->mnt_opts[VAR_7], ',');
  else
   VAR_9 = ((void*)0);

  switch (VAR_6->mnt_opts_flags[VAR_7]) {
  case 132:
   VAR_8 = VAR_0;
   break;
  case 130:
   VAR_8 = VAR_2;
   break;
  case 129:
   VAR_8 = VAR_4;
   break;
  case 131:
   VAR_8 = VAR_1;
   break;
  case 128:
   FUNC_1(VAR_5, ',');
   FUNC_2(VAR_5, VAR_3);
   continue;
  default:
   FUNC_0();
  };

  FUNC_1(VAR_5, ',');
  FUNC_2(VAR_5, VAR_8);
  if (VAR_9)
   FUNC_1(VAR_5, '\"');
  FUNC_2(VAR_5, VAR_6->mnt_opts[VAR_7]);
  if (VAR_9)
   FUNC_1(VAR_5, '\"');
 }
}
