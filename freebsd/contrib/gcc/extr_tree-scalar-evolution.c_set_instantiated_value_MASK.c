
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct scev_info_str {void* chrec; void* var; } ;
typedef int htab_t ;
typedef scalar_t__ PTR ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int ,struct scev_info_str*,int ) ;
 scalar_t__ FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2 (htab_t VAR_1, tree VAR_2, tree VAR_3)
{
  struct scev_info_str *VAR_4, VAR_5;
  PTR *VAR_6;

  VAR_5.var = VAR_2;
  VAR_6 = FUNC_0 (VAR_1, &VAR_5, VAR_0);

  if (!*VAR_6)
    *VAR_6 = FUNC_1 (VAR_2);
  VAR_4 = (struct scev_info_str *) *VAR_6;
  VAR_4->chrec = VAR_3;
}
