
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_input {scalar_t__ length; scalar_t__ consumed; scalar_t__ buf; int stream; } ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct port_input *VAR_0)
{
 if (!VAR_0->stream) {

  VAR_0->length = 0;
  return;
 }
 if (VAR_0->consumed >= VAR_0->length) {

  VAR_0->length = 0;
  return;
 }
 FUNC_0(VAR_0->buf, VAR_0->buf + VAR_0->consumed, VAR_0->length - VAR_0->consumed);
 VAR_0->length -= VAR_0->consumed;
}
