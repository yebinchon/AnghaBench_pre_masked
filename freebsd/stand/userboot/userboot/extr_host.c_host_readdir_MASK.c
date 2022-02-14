
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct open_file {int f_fsdata; } ;
struct dirent {size_t d_namlen; int d_type; int d_fileno; int d_name; } ;


 int FUNC_0 (int ,int ,int *,int *,size_t*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_1, struct dirent *VAR_2)
{
 uint32_t VAR_3;
 uint8_t VAR_4;
 size_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1->f_fsdata, &VAR_3, &VAR_4, &VAR_5,
            VAR_2->d_name);
 if (VAR_6)
  return (VAR_6);

 VAR_2->d_fileno = VAR_3;
 VAR_2->d_type = VAR_4;
 VAR_2->d_namlen = VAR_5;

 return (0);
}
