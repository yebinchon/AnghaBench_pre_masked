
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_3__ {int ctl_label; } ;
typedef TYPE_1__ ctf_lblent_t ;
typedef int ctf_file_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__ const**,scalar_t__*) ;

const char *
FUNC_3(ctf_file_t *VAR_3)
{
 const ctf_lblent_t *VAR_4;
 const char *VAR_5;
 uint_t VAR_6;

 if (FUNC_2(VAR_3, &VAR_4, &VAR_6) == VAR_0)
  return (((void*)0));

 if (VAR_6 == 0) {
  (void) FUNC_0(VAR_3, VAR_2);
  return (((void*)0));
 }

 if ((VAR_5 = FUNC_1(VAR_3, (VAR_4 + VAR_6 - 1)->ctl_label)) == ((void*)0))
  (void) FUNC_0(VAR_3, VAR_1);

 return (VAR_5);
}
