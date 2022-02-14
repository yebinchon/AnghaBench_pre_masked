
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ int32_t ;
typedef int bool_t ;
struct TYPE_5__ {scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_6__ {int fbtbc; scalar_t__ in_finger; scalar_t__ in_boundry; } ;
typedef TYPE_2__ RECSTREAM ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;

__attribute__((used)) static bool_t
FUNC_2(XDR *VAR_2, long *VAR_3)
{
 RECSTREAM *VAR_4 = (RECSTREAM *)(VAR_2->x_private);
 int32_t *VAR_5 = (int32_t *)(void *)(VAR_4->in_finger);
 int32_t VAR_6;


 if ((VAR_4->fbtbc >= sizeof(int32_t)) &&
  (((long)VAR_4->in_boundry - (long)VAR_5) >= sizeof(int32_t))) {
  *VAR_3 = (long)FUNC_0((u_int32_t)(*VAR_5));
  VAR_4->fbtbc -= sizeof(int32_t);
  VAR_4->in_finger += sizeof(int32_t);
 } else {
  if (! FUNC_1(VAR_2, (char *)(void *)&VAR_6,
      sizeof(int32_t)))
   return (VAR_0);
  *VAR_3 = (long)FUNC_0((u_int32_t)VAR_6);
 }
 return (VAR_1);
}
