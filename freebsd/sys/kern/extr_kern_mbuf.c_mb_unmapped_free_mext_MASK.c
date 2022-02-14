
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sf_buf {int dummy; } ;
struct TYPE_2__ {struct mbuf* ext_arg2; struct sf_buf* ext_arg1; } ;
struct mbuf {TYPE_1__ m_ext; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct sf_buf*) ;

__attribute__((used)) static void
FUNC_2(struct mbuf *VAR_0)
{
 struct sf_buf *VAR_1;
 struct mbuf *VAR_2;

 VAR_1 = VAR_0->m_ext.ext_arg1;
 FUNC_1(VAR_1);


 VAR_2 = VAR_0->m_ext.ext_arg2;
 FUNC_0(VAR_2);
}
