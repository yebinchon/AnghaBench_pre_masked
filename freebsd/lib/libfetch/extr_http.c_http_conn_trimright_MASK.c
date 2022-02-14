
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buflen; char* buf; } ;
typedef TYPE_1__ conn_t ;


 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static void
FUNC_1(conn_t *VAR_0)
{
 while (VAR_0->buflen &&
        FUNC_0((unsigned char)VAR_0->buf[VAR_0->buflen - 1]))
  VAR_0->buflen--;
 VAR_0->buf[VAR_0->buflen] = '\0';
}
