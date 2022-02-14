
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct os_fstab_type {scalar_t__ os_name; } ;
struct TYPE_3__ {char* h_os; int h_mask; } ;
typedef TYPE_1__ host ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char*,scalar_t__) ;
 struct os_fstab_type* VAR_2 ;

__attribute__((used)) static struct os_fstab_type *
FUNC_2(host *VAR_3)
{
  struct os_fstab_type *VAR_4 = ((void*)0);
  char *VAR_5 = ((void*)0);

again:;
  if (VAR_5 == 0) {
    if (FUNC_0(VAR_3->h_mask, VAR_1))
      VAR_5 = VAR_3->h_os;
    else
      VAR_5 = VAR_0;
  }
  for (VAR_4 = VAR_2; VAR_4->os_name; VAR_4++)
    if (FUNC_1(VAR_5, VAR_4->os_name))
      return VAR_4;

  VAR_5 = VAR_0;
  goto again;
}
