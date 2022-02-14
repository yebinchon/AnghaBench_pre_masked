
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cl_dword; int* cl_word; int* cl_two; int* cl_six; } ;
typedef TYPE_1__ cdf_classid_t ;


 int FUNC_0 (char*,size_t,char*,int,int,int,int,int,int,int,int,int,int,int) ;

int
FUNC_1(char *VAR_0, size_t VAR_1, const cdf_classid_t *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, "%.8x-%.4x-%.4x-%.2x%.2x-"
     "%.2x%.2x%.2x%.2x%.2x%.2x", VAR_2->cl_dword, VAR_2->cl_word[0],
     VAR_2->cl_word[1], VAR_2->cl_two[0], VAR_2->cl_two[1], VAR_2->cl_six[0],
     VAR_2->cl_six[1], VAR_2->cl_six[2], VAR_2->cl_six[3], VAR_2->cl_six[4],
     VAR_2->cl_six[5]);
}
