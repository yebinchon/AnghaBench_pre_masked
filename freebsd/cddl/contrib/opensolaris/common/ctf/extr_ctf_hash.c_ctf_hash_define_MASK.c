
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort_t ;
typedef int uint_t ;
struct TYPE_3__ {int h_type; } ;
typedef TYPE_1__ ctf_helem_t ;
typedef int ctf_hash_t ;
typedef int ctf_file_t ;


 int FUNC_0 (int *,int *,int ,int ) ;
 TYPE_1__* FUNC_1 (int *,int *,char const*,int ) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (char const*) ;

int
FUNC_4(ctf_hash_t *VAR_0, ctf_file_t *VAR_1, ushort_t VAR_2, uint_t VAR_3)
{
 const char *VAR_4 = FUNC_2(VAR_1, VAR_3);
 ctf_helem_t *VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4, FUNC_3(VAR_4));

 if (VAR_5 == ((void*)0))
  return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3));

 VAR_5->h_type = VAR_2;
 return (0);
}
