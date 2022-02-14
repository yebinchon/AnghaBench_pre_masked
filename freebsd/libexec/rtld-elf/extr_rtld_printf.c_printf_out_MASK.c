
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snprintf_arg {scalar_t__ remain; scalar_t__ buf_total; int buf; int str; int fd; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct snprintf_arg *VAR_0)
{

 if (VAR_0->remain == VAR_0->buf_total)
  return;
 FUNC_0(VAR_0->fd, VAR_0->buf, VAR_0->buf_total - VAR_0->remain);
 VAR_0->str = VAR_0->buf;
 VAR_0->remain = VAR_0->buf_total;
}
