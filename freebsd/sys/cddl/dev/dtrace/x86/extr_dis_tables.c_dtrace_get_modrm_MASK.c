
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_4__ {int d86_got_modrm; int d86_rmindex; int d86_len; } ;
typedef TYPE_1__ dis86_t ;


 int FUNC_0 (TYPE_1__*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_1(dis86_t *VAR_0, uint_t *VAR_1, uint_t *VAR_2, uint_t *VAR_3)
{
 if (VAR_0->d86_got_modrm == 0) {
  if (VAR_0->d86_rmindex == -1)
   VAR_0->d86_rmindex = VAR_0->d86_len;
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  VAR_0->d86_got_modrm = 1;
 }
}
