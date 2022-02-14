
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf; int h; int y; int (* gh ) (int ,int ,int ,size_t) ;scalar_t__ count_aad; } ;
typedef TYPE_1__ br_gcm_context ;


 int FUNC_0 (int ,int ,int ,size_t) ;

void
FUNC_1(br_gcm_context *VAR_0)
{





 size_t VAR_1;

 VAR_1 = (size_t)VAR_0->count_aad & (size_t)15;
 if (VAR_1 != 0) {
  VAR_0->gh(VAR_0->y, VAR_0->h, VAR_0->buf, VAR_1);
 }
}
