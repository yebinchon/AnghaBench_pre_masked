
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ext_buf; } ;
struct mbuf {TYPE_1__ m_ext; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, int VAR_3)
{
 struct mbuf *VAR_4;

 VAR_4 = (struct mbuf *)VAR_2;



 FUNC_2(VAR_1, VAR_4->m_ext.ext_buf, ((void*)0));



}
