
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uma_zone_t ;
struct TYPE_2__ {void* ext_arg2; int ext_arg1; } ;
struct mbuf {TYPE_1__ m_ext; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static void
FUNC_2(struct mbuf *VAR_1)
{
 uma_zone_t VAR_2 = VAR_1->m_ext.ext_arg1;
 void *VAR_3 = VAR_1->m_ext.ext_arg2;

 FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_0, 1);
}
