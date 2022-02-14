
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pst_status {char* pst_cmd; } ;
typedef int pid_t ;
typedef int exec_file_buffer ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int,int ) ;
 int FUNC_1 (struct pst_status*,int,int ,int) ;

char *
FUNC_2 (int VAR_1)
{
  int VAR_2;
  static char VAR_3[1024];
  pid_t VAR_4;
  static struct pst_status VAR_5;




  VAR_2 = FUNC_0 (VAR_0,
      VAR_1,
      (uint64_t) VAR_3,
      sizeof (VAR_3) - 1,
      0);
  if (VAR_2 >= 0)
    return VAR_3;



  if (FUNC_1 (&VAR_5, sizeof (struct pst_status), 0, VAR_1) != -1)
    {
      char *VAR_6 = VAR_5.pst_cmd;

      while (*VAR_6 && *VAR_6 != ' ')
 VAR_6++;
      *VAR_6 = 0;

      return (VAR_5.pst_cmd);
    }

  return (((void*)0));
}
