
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* m_name; char* m_mailer; int m_argv; } ;
struct TYPE_3__ {char* m_name; char* m_mailer; int m_argv; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

void
FUNC_0()
{
 if (VAR_1.m_name == ((void*)0))
 {

  VAR_1.m_name = "*discard*";
  VAR_1.m_mailer = "DISCARD";
  VAR_1.m_argv = VAR_0;
 }
 if (VAR_3.m_name == ((void*)0))
 {

  VAR_3.m_name = "*error*";
  VAR_3.m_mailer = "ERROR";
  VAR_3.m_argv = VAR_2;
 }
}
