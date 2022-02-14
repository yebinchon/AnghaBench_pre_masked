
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uchar_t ;
struct TYPE_8__ {int cd_nsyms; TYPE_1__* cd_strdata; int cd_symdata; } ;
typedef TYPE_2__ ctf_data_t ;
struct TYPE_9__ {int st_name; int st_info; } ;
struct TYPE_7__ {scalar_t__ d_buf; } ;
typedef TYPE_3__ GElf_Sym ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char*) ;

__attribute__((used)) static int
FUNC_3(const ctf_data_t *VAR_0, const int VAR_1, const uchar_t VAR_2,
    char **VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_1 + 1; VAR_4 < VAR_0->cd_nsyms; VAR_4++) {
  GElf_Sym VAR_5;
  char *VAR_6;
  int VAR_7;

  if (FUNC_1(VAR_0->cd_symdata, VAR_4, &VAR_5) == 0)
   return (-1);

  VAR_6 = (char *)VAR_0->cd_strdata->d_buf + VAR_5.st_name;
  VAR_7 = FUNC_0(VAR_5.st_info);




  if (VAR_7 != VAR_2 || FUNC_2(&VAR_5, VAR_6))
   continue;


  *VAR_3 = VAR_6;
  return (VAR_4);
 }

 return (-1);
}
