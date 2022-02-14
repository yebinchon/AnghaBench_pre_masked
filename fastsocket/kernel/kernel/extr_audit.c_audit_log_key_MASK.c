
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_buffer {int dummy; } ;


 int FUNC_0 (struct audit_buffer*,char*) ;
 int FUNC_1 (struct audit_buffer*,char*) ;

void FUNC_2(struct audit_buffer *VAR_0, char *VAR_1)
{
 FUNC_0(VAR_0, " key=");
 if (VAR_1)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, "(null)");
}
