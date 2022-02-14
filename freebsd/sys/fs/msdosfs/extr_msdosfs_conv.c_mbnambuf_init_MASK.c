
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbnambuf {int nb_last_id; char* nb_buf; scalar_t__ nb_len; } ;



void
FUNC_0(struct mbnambuf *VAR_0)
{

 VAR_0->nb_len = 0;
 VAR_0->nb_last_id = -1;
 VAR_0->nb_buf[sizeof(VAR_0->nb_buf) - 1] = '\0';
}
