
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct old_qctrl TYPE_1__ ;


typedef int oq ;
typedef scalar_t__ clock_t ;
struct old_qctrl {size_t oq_hiwater; size_t oq_lowater; size_t oq_bufsz; scalar_t__ oq_delay; int oq_minfree; } ;
typedef TYPE_1__ au_qctrl_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 scalar_t__ VAR_3 ;

int
FUNC_1(au_qctrl_t *VAR_4, size_t VAR_5)
{
 int VAR_6;

 if (sizeof(*VAR_4) != VAR_5) {
  VAR_3 = VAR_2;
  return (-1);
 }

 VAR_6 = FUNC_0(VAR_0, VAR_4, sizeof(*VAR_4));
 return (VAR_6);
}
