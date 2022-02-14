
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ext_buf; TYPE_2__* ext_arg1; } ;
struct mbuf {TYPE_1__ m_ext; } ;
struct TYPE_4__ {int * buf; } ;
typedef TYPE_2__ pduq_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct mbuf *VAR_2)
{
     pduq_t *VAR_3 = VAR_2->m_ext.ext_arg1;

     if(VAR_3->buf != ((void*)0)) {
   FUNC_0(3, "ou_refcnt=%d a=%p b=%p",
        VAR_1, VAR_2->m_ext.ext_buf, VAR_3->buf);
   FUNC_1(VAR_3->buf, VAR_0);
   VAR_3->buf = ((void*)0);
     }
}
